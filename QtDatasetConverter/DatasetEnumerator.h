#pragma once

#include <QThread>
#include <memory>

class MLDataset;

class DatasetEnumerator : public QThread
{
private:
	Q_OBJECT

	std::shared_ptr < MLDataset > dataset;

	QString inputDir;

public:
	DatasetEnumerator(QObject * parent = 0);
	
	~DatasetEnumerator();

	void SetInputDir(QString inputDir);

protected:
	void run() override;

public slots:
	void Stop();

signals:
	void Finished();

	void ProgressChanged(unsigned totalFilesFound);
};

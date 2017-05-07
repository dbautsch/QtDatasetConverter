#pragma once

#include <QtWidgets/QMainWindow>
#include <memory>

#include "ui_QtDatasetConverter.h"

#include "DatasetEnumerator.h"
#include "DatasetLoader.h"
#include "DatasetConverter.h"

class QtDatasetConverter : public QMainWindow
{
	Q_OBJECT

public:
	QtDatasetConverter(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtDatasetConverterClass ui;

	std::unique_ptr < DatasetEnumerator > enumerator;

	std::unique_ptr < DatasetLoader > loader;

	std::unique_ptr < DatasetConverter > converter;


	void EnableControls(bool enable);

private slots:
	void OpenDatasetClick();

	void SelectDatasetDirectoryClick();

	void StartClick();

	void AboutClick();

public slots:
	void EnumeratorFinished();

	void EnumeratorProgressChanged(unsigned totalFilesFound);

signals:
	void StopEnumerator();
};

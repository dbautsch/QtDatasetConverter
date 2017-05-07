#include "DatasetEnumerator.h"

#include <QDir>
#include <QDebug>

#include "MLDataset.h"

DatasetEnumerator::DatasetEnumerator(QObject * parent)
{

}

DatasetEnumerator::~DatasetEnumerator()
{

}

void DatasetEnumerator::SetInputDir(QString inputDir)
{
	this->inputDir = inputDir;
}

void DatasetEnumerator::run()
{
	dataset.reset(new MLDataset());

	QDir rootDir = QDir(inputDir);
	QFileInfoList dirList = rootDir.entryInfoList(QStringList(), QDir::Dirs | QDir::NoDotAndDotDot);

	for (int i = 0; i < dirList.size(); ++i)
	{
		QFileInfo fi = dirList[i];
		QDir subdir = QDir(fi.absoluteFilePath());
		QFileInfoList subdirList = subdir.entryInfoList(QStringList(), QDir::Files | QDir::NoDotAndDotDot);

		for (int j = 0; j < subdirList.size(); ++j)
		{
			
		}
	}

}

void DatasetEnumerator::Stop()
{

}

#include "QtDatasetConverter.h"

QtDatasetConverter::QtDatasetConverter(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void QtDatasetConverter::EnableControls(bool enable)
{
	ui.directoryEdit->setEnabled(enable);
	ui.openDirectoryButton->setEnabled(enable);
	ui.pictureResizerTab->setEnabled(enable);

}

void QtDatasetConverter::OpenDatasetClick()
{
	enumerator.reset(new DatasetEnumerator());

	connect(enumerator.get(),
		SIGNAL(Finished()),
		this,
		SLOT(EnumeratorFinished()));

	connect(enumerator.get(),
		SIGNAL(ProgressChanged(unsigned)),
		this,
		SLOT(EnumeratorProgressChanged(unsigned)));

	connect(this,
		SIGNAL(StopEnumerator()),
		enumerator.get(),
		SLOT(Stop()));

	enumerator->SetInputDir(ui.directoryEdit->text());

	enumerator->start();
}

void QtDatasetConverter::SelectDatasetDirectoryClick()
{

}

void QtDatasetConverter::StartClick()
{

}

void QtDatasetConverter::AboutClick()
{

}

void QtDatasetConverter::EnumeratorFinished()
{

}

void QtDatasetConverter::EnumeratorProgressChanged(unsigned totalFilesFound)
{

}

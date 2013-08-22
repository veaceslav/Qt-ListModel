#include "mainwindow.h"
#include "tagmngrlistmodel.h"
#include "tagmngrlistview.h"
#include "QListView"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    TagMngrListView* listW = new TagMngrListView(this);
    listW->resize(800,600);
    this->resize(820,610);

    TagMngrListModel* treem = new TagMngrListModel("One\n Two \n Tree \n Four \n Five");
    listW->setModel(treem);

    listW->setSelectionMode(QAbstractItemView::ExtendedSelection);
    listW->setDragEnabled(true);
    listW->setAcceptDrops(true);
    listW->setDropIndicatorShown(true);
    listW->setSpacing(3);
    listW->setDragDropMode(QAbstractItemView::InternalMove);
}

MainWindow::~MainWindow()
{
    
}

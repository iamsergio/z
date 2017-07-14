#include <QApplication>
#include <QMessageBox>

int main(int a, char **b)
{
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication app(a, b);

    QString text = app.arguments().size() > 1 ? app.arguments().at(1) : QString();

    QMessageBox msgBox;
    msgBox.setText(QString("Operation finished %1").arg(text));
    return msgBox.exec();
}

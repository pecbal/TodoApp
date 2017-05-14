#ifndef TASK_H
#define TASK_H

#include <QWidget>

namespace Ui {
class Task;
}

/**
 * @brief The Task class
 * This class refers to the Task ui form.
 */
class Task : public QWidget
{
    Q_OBJECT

public:
    explicit Task(const QString& name, QWidget *parent = 0);
    ~Task();

    void setName(const QString& name);
    QString name() const;
    bool isCompleted() const;

public slots:
    void rename();
    void checked(bool checked);

signals:
    void removed(Task* task);
    void statusChanged(Task* task);

private:
    Ui::Task *ui;
};

#endif // TASK_H

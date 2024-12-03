#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QListWidget>
#include <QDateTime>

class HabitTracker : public QWidget {
public:
    HabitTracker(QWidget *parent = nullptr);

private slots:
    void addHabit();
    void deleteHabit();
    void completeHabit();

private:
    QLineEdit *habitInput;
    QListWidget *habitList;
    QListWidget *completedList;
};

HabitTracker::HabitTracker(QWidget *parent) : QWidget(parent) {
    setWindowTitle("Habit Tracker");
    setMinimumSize(600, 400);

    QVBoxLayout *mainLayout = new QVBoxLayout(this);

    QLabel *title = new QLabel("Habit Tracker", this);
    title->setAlignment(Qt::AlignCenter);
    QFont font = title->font();
    font.setPointSize(24);
    font.setBold(true);
    title->setFont(font);
    mainLayout->addWidget(title);

    habitInput = new QLineEdit(this);
    habitInput->setPlaceholderText("Enter a new habit");
    mainLayout->addWidget(habitInput);

    QHBoxLayout *buttonLayout = new QHBoxLayout();
    QPushButton *addButton = new QPushButton("Add Habit", this);
    connect(addButton, &QPushButton::clicked, this, &HabitTracker::addHabit);
    buttonLayout->addWidget(addButton);

    QPushButton *completeButton = new QPushButton("Complete Habit", this);
    connect(completeButton, &QPushButton::clicked, this, &HabitTracker::completeHabit);
    buttonLayout->addWidget(completeButton);

    QPushButton *deleteButton = new QPushButton("Delete Habit", this);
    connect(deleteButton, &QPushButton::clicked, this, &HabitTracker::deleteHabit);
    buttonLayout->addWidget(deleteButton);

    mainLayout->addLayout(buttonLayout);

    habitList = new QListWidget(this);
    mainLayout->addWidget(habitList);

    completedList = new QListWidget(this);
    completedList->setStyleSheet("color: gray;");
    mainLayout->addWidget(completedList);
}

void HabitTracker::addHabit() {
    QString habit = habitInput->text();
    if (!habit.isEmpty()) {
        habitList->addItem(habit);
        habitInput->clear();
    }
}

void HabitTracker::deleteHabit() {
    QListWidgetItem *item = habitList->takeItem(habitList->currentRow());
    delete item;
}

void HabitTracker::completeHabit() {
    QListWidgetItem *item = habitList->takeItem(habitList->currentRow());
    if (item) {
        QString habit = item->text();
        delete item;
        completedList->addItem(habit + " (Completed on " + QDateTime::currentDateTime().toString() + ")");
    }
}

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    HabitTracker window;
    window.show();
    return app.exec();
}

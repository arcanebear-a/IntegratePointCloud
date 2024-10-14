#pragma once

#include <QtWidgets/QWidget>
#include "ui_IntegratePointCloud.h"

class IntegratePointCloud : public QWidget
{
    Q_OBJECT

public:
    IntegratePointCloud(QWidget *parent = nullptr);
    ~IntegratePointCloud();

private:
    Ui::IntegratePointCloudClass ui;
};

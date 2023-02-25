#pragma once

#include <QUrl>

namespace qmapcontrol
{
    struct LoadingTask{
        void* image_user;
        QUrl url;
        bool operator==(const LoadingTask& other) const;
    };
};

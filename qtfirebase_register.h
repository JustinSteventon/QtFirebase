#ifndef QTFIREBASE_REGISTER_TYPES_H
#define QTFIREBASE_REGISTER_TYPES_H

#include <QtCore/QCoreApplication>
#include <QtQml/QQmlEngine>

#include "qqml.h"

#if defined(QTFIREBASE_BUILD_ALL) || defined(QTFIREBASE_BUILD_ANALYTICS)

#if defined(QTFIREBASE_FAKE_BUILD)
    #include "fake/src/qtfirebaseanalytics.h"
#else
    #include "src/qtfirebaseanalytics.h"
#endif

# endif // QTFIREBASE_BUILD_ANALYTICS

#if defined(QTFIREBASE_BUILD_ALL) || defined(QTFIREBASE_BUILD_ADMOB)

#if defined(QTFIREBASE_FAKE_BUILD)
    #include "fake/src/qtfirebaseadmob.h"
#else
    #include "src/qtfirebaseadmob.h"
#endif

# endif // QTFIREBASE_BUILD_ADMOB

static void registerQtFirebase() {

    #if defined(QTFIREBASE_BUILD_ALL) || defined(QTFIREBASE_BUILD_ANALYTICS)
    qmlRegisterType<QtFirebaseAnalytics>("QtFirebase", 1, 0, "Analytics");
    #endif

    #if defined(QTFIREBASE_BUILD_ALL) || defined(QTFIREBASE_BUILD_ADMOB)
    qmlRegisterType<QtFirebaseAdMob>("QtFirebase", 1, 0, "AdMob");
    qmlRegisterType<QtFirebaseAdMobRequest>("QtFirebase", 1, 0, "AdMobRequest");
    qmlRegisterType<QtFirebaseAdMobBanner>("QtFirebase", 1, 0, "AdMobBanner");
    qmlRegisterType<QtFirebaseAdMobInterstitial>("QtFirebase", 1, 0, "AdMobInterstitial");
    #endif

}

Q_COREAPP_STARTUP_FUNCTION(registerQtFirebase)

#endif // QTFIREBASE_REGISTER_TYPES_H

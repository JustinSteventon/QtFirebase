#include "qtfirebase_plugin.h"

#if defined(QTFIREBASE_BUILD_ALL) || defined(QTFIREBASE_BUILD_ANALYTICS)
#include "src/qtfirebaseanalytics.h"
# endif // QTFIREBASE_BUILD_ANALYTICS

#if defined(QTFIREBASE_BUILD_ALL) || defined(QTFIREBASE_BUILD_ADMOB)
#include "src/qtfirebaseadmob.h"
# endif // QTFIREBASE_BUILD_ADMOB

#include <qqml.h>

void QtFirebasePlugin::registerTypes(const char *uri)
{
    // @uri QtFirebase

    #if defined(QTFIREBASE_BUILD_ALL) || defined(QTFIREBASE_BUILD_ANALYTICS)
    qmlRegisterType<QtFirebaseAnalytics>(uri, 1, 0, "Analytics");
    #endif

    #if defined(QTFIREBASE_BUILD_ALL) || defined(QTFIREBASE_BUILD_ADMOB)
    qmlRegisterType<QtFirebaseAdMob>(uri, 1, 0, "AdMob");
    qmlRegisterType<QtFirebaseAdMobRequest>(uri, 1, 0, "AdMobRequest");
    qmlRegisterType<QtFirebaseAdMobBanner>(uri, 1, 0, "AdMobBanner");
    qmlRegisterType<QtFirebaseAdMobInterstitial>(uri, 1, 0, "AdMobInterstitial");
    #endif
}


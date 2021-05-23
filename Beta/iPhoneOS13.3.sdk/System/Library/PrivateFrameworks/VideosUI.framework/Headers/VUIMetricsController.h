/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class MTMetricsKit, NSDictionary, NSHashTable, NSString, VUIMetricsPageEventData;

@protocol OS_dispatch_queue;

@interface VUIMetricsController : NSObject

{
    _Bool _isInternalBuild;
    _Bool _isAppJustLaunched;
    _Bool _isAppJustDeepLinkOpened;
    _Bool _isGDPRConsented;
    _Bool _shouldPostAppLaunchData;
    NSDictionary *_baseFields;
    NSDictionary *_cachedOpenUrlData;
    NSString *_currentTabIdentifier;
    NSString *_exitEventDestinationUrl;
    VUIMetricsPageEventData *_lastRecordedPageEventData;
    MTMetricsKit *_activeMetricsKit;
    MTMetricsKit *_metricsKitMain;
    MTMetricsKit *_loggerKit;
    MTMetricsKit *_metricsKitUnidentified;
    MTMetricsKit *_perfMetricsKit;
    NSObject<OS_dispatch_queue> *_metricsDataDispatchSQ;
    NSHashTable *_savedRecentEvents;
}

@property (copy, nonatomic, readonly) NSDictionary *baseFieldsForVPAF;
@property (copy, nonatomic, readonly) NSDictionary *iTunesVPAF;
@property (copy, nonatomic) NSDictionary *baseFields;
@property (retain, nonatomic) VUIMetricsPageEventData *lastRecordedPageEventData;
@property (retain, nonatomic) MTMetricsKit *activeMetricsKit;
@property (retain, nonatomic) MTMetricsKit *metricsKitMain;
@property (retain, nonatomic) MTMetricsKit *loggerKit;
@property (retain, nonatomic) MTMetricsKit *metricsKitUnidentified;
@property (retain, nonatomic) MTMetricsKit *perfMetricsKit;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metricsDataDispatchSQ;
@property (retain, nonatomic) NSHashTable *savedRecentEvents;
@property (nonatomic) _Bool shouldPostAppLaunchData;
@property (retain, nonatomic) NSDictionary *cachedOpenUrlData;
@property (copy, nonatomic, readonly) NSString *currentTabIdentifier;
@property (retain, nonatomic) NSString *exitEventDestinationUrl;

+ (id)sharedInstance;
+ (id)_baseToVPAFMapping;

- (id)init;
- (void)recordClick:(id)arg1;
- (void)recordMedia:(id)arg1;
- (void)recordPage:(id)arg1;
- (void)recordDialog:(id)arg1;
- (void)forceGDPRConsentStatus:(_Bool)arg1;
- (void)_handleServerConfigChange:(id)arg1;
- (void)recordLog:(id)arg1;
- (id)getRecentEventsForDebuggerUI;
- (void)setupMetricsController;
- (id)_createMetricsKitForTopic:(id)arg1;
- (void)_initializeBaseFields;
- (void)registerForBaseFieldChanges;
- (void)_recordEnter:(id)arg1;
- (void)_recordEvent:(id)arg1 withEventData:(id)arg2;
- (void)_recordExit:(id)arg1;
- (void)_flushMetricsOnExit;
- (void)_flushUnreportedEvents:(id)arg1;
- (id)_createDataAddingBaseAndPageFieldsToEventData:(id)arg1;
- (void)_saveRecentEvents:(id)arg1;
- (id)_getLocationAuthorizationStatus;
- (void)_handleTabBarChange:(id)arg1;
- (void)_handleWLKSettingsDidChange:(id)arg1;
- (void)_handleWLKAppLibChange:(id)arg1;
- (void)_handleWLKLocationManagerChange:(id)arg1;
- (void)_setGDPRConsentStatus:(_Bool)arg1;
- (void)_updateBaseFieldsWithData:(id)arg1;
- (void)recordAppLaunched;
- (void)recordAppBecameActive;
- (void)recordOpenUrlLaunchWithExtURL:(id)arg1 andOptions:(id)arg2;
- (void)recordAppWillTerminate;
- (void)recordAppWillBackground;
- (void)jsDelegateRecordEvent:(id)arg1;
- (void)jsDelegateRecordPerfEvent:(id)arg1;
- (void)jsDelegateRecordLogEvent:(id)arg1;
- (void)updateGDPRConsentStatus;
- (void)flushMetrics;

@end

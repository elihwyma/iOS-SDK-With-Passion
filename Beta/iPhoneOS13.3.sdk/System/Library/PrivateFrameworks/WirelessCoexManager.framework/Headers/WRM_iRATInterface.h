/*
 Image: /System/Library/PrivateFrameworks/WirelessCoexManager.framework/WirelessCoexManager
 */

#import <WirelessCoexManager/WRMClientInterface.h>

@class NSMutableArray;

@interface WRM_iRATInterface : WRMClientInterface

{
    NSMutableArray *mAppLists;
    _Bool mClientSupportsMultipleAppTypes;
    CDUnknownBlockType mObserver;
    CDUnknownBlockType mOppModeObserver;
    CDUnknownBlockType mProximitySubscribeLinkRecommendationHandler;
    CDUnknownBlockType mProximityGetLinkRecommendationHandler;
    CDUnknownBlockType mGetLinkRecommendationMetricsHandler;
    CDUnknownBlockType mOppBtLQMObserver;
    _Bool mLinkPreferenceSubscriptionEnabled;
    _Bool mTelephoneAssertionEnabled;
    _Bool mTelephonyStateEnabled;
    _Bool mLocationAssertionEnabled;
    _Bool mProximitySubscribeLinkRecommendationEnabled;
    _Bool mProximityGetLinkRecommendationEnabled;
    _Bool mGetLinkRecommendationMetricsHandlerEnabled;
    int mLocationState;
    NSMutableArray *mProximityLinkRecommendationList;
    _Bool mBBAssertionBGAppActive;
}

- (id)init;
- (void)dealloc;
- (void)subscribeStandaloneLinkRecommendation:(CDUnknownBlockType)arg1;
- (void)getProximityLinkRecommendation:(_Bool)arg1 recommendation:(CDUnknownBlockType)arg2;
- (void)registerClient:(int)arg1 queue:(id)arg2;
- (void)unregisterClient;
- (void)addProximityLinkRecommendationType:(id)arg1;
- (void)subscribeMultipleAppTypes:(id)arg1 observer:(CDUnknownBlockType)arg2;
- (void)subscribeAppType:(CDStruct_a734b2e2)arg1 observer:(CDUnknownBlockType)arg2;
- (void)setTelephonyEnabled:(_Bool)arg1;
- (void)assertCommCenterBaseBandMode:(int)arg1;
- (void)expediteBBAssertionBGAppActive:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;
- (void)subscribeProximityLinkRecommendation:(CDUnknownBlockType)arg1;
- (void)reConnect;
- (void)processBTLQMNotification:(id)arg1;
- (void)processOperatingModeNotification:(id)arg1;
- (void)processNotificationListForTerminus:(id)arg1;
- (void)processMetricsNotificationReport:(id)arg1;
- (void)processNotificationList:(id)arg1:(unsigned long long)arg2;
- (void)handleNotification:(id)arg1:(_Bool)arg2;
- (int)getSubscribeMessageType:(int)arg1;
- (int)getStatusUpdateMessageType:(int)arg1;
- (void)addAppType:(id)arg1;
- (void)_expediteBBAssertionBGAppActive_sync:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;
- (void)removeAppType:(id)arg1;
- (void)removeProximityLinkRecommendationType:(id)arg1;
- (void)subscribeBtLqmScoreNotification:(CDUnknownBlockType)arg1;
- (void)subscribeOperatingModeChangeNotification:(CDUnknownBlockType)arg1;
- (void)getLinkRecommendationMetrics:(CDUnknownBlockType)arg1;
- (void)statusUpdateAppLinkPreference:(int)arg1 status:(_Bool)arg2;
- (void)assertCommCenterBaseBand:(int)arg1;
- (void)subscribeDataLinkRecommendation:(CDUnknownBlockType)arg1;
- (void)statusUpdateAppType:(int)arg1 linkType:(int)arg2 serviceStatus:(_Bool)arg3;
- (void)expediteBBAssertionBGAppActiveAppType:(int)arg1:(_Bool)arg2 handler:(CDUnknownBlockType)arg3;

@end

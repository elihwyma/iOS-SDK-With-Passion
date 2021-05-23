/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class IDSWRMMetricContainer;

@protocol OS_dispatch_queue, OS_xpc_object;

@interface IDSWRMExchange : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    unsigned long long _recommendedLinkType;
    unsigned long long _activeLinkType;
    unsigned long long _activeRecommendationType;
    _Bool _registered;
    _Bool _subscribed;
    unsigned long long _reportInterval;
    _Bool _shouldSendReport;
    IDSWRMMetricContainer *_metrics;
    unsigned short _connectCount;
    unsigned long long _nearbyOverWiFi;
    _Bool _isPaired;
    _Bool _isNearby;
    _Bool _isConnected;
    int _isPairedNotifyToken;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    CDUnknownBlockType _delegateBlock;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)submitMetric:(id)arg1;
- (void)_resetLocalMetric;
- (void)_startXPCConnection;
- (void)_registerWithWRM;
- (void)_stopXPCConnection;
- (void)_processXPCEvent:(id)arg1;
- (void)_restartSubscriptionIfNeeded;
- (id)_newSubscribeStatusUpdateMessage;
- (void)_sendXPCMessage:(id)arg1;
- (void)_submitBlockAsync:(CDUnknownBlockType)arg1;
- (_Bool)_processXPCMessage:(id)arg1;
- (void)_reconnectUntilTimeout;
- (void)_restartClient;
- (void)_dispatchAfter:(double)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)_isXPCDictionary:(id)arg1;
- (id)_newPrefSubscribeMessage:(_Bool)arg1;
- (id)_newRegisterMessage;
- (void)unsubscribeForRecommendation;
- (id)_newSubscribeMessage;
- (id)_newUnsubscribeMessage;
- (_Bool)_setRecommendedLinkType:(unsigned long long)arg1;
- (_Bool)_processLinkPreferenceNotificationEvent:(id)arg1;
- (_Bool)_processMetricsConfigEvent:(id)arg1;
- (void)_notifyDelegate;
- (void)_sendMetricReportPeriodically;
- (void)_setReportInterval:(unsigned long long)arg1;
- (id)_newMetricReportMessage;
- (void)_sendMetricReport;
- (void)_updateLocalMetric:(id)arg1;
- (id)_newSubscribeStatusUpdateMessage:(_Bool)arg1 nearby:(_Bool)arg2;
- (void)subscribeForRecommendation:(id)arg1 recommendationType:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;
- (_Bool)isWiFiRecommended;
- (_Bool)isBTRecommended;
- (unsigned long long)recommendedLinkType;
- (void)handleActiveLinkChange:(unsigned long long)arg1;
- (void)handleNetworkStateChangeUpdate:(_Bool)arg1 nearby:(_Bool)arg2;

@end

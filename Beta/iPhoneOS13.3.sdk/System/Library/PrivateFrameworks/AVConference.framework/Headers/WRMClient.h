/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object, WRMClientDelegate;

__attribute__((visibility("hidden")))
@interface WRMClient : NSObject

{
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    id _wrmClientDelegate;
    int _mediaControlInfoVersion;
    int _mode;
    CDStruct_21a0265e _metricsConfig;
}

@property id <WRMClientDelegate> delegate;
@property int mediaControlInfoVersion;

- (id)init;
- (void)dealloc;
- (void)setConfiguration:(CDStruct_69d7cc99 *)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)setPreWarmState:(_Bool)arg1;
- (void)reportMetricsFaceTimeCalling:(const CDStruct_dea828ac *)arg1;
- (void)sendStatusUpdateFaceTimeCalling:(const CDStruct_8aeecdac *)arg1;
- (void)requestNotificationFaceTimeCalling;
- (void)startWRMClientWithMode:(int)arg1 metricsConfig:(CDStruct_21a0265e)arg2;
- (void)stopWRMClient;
- (void)reportImmediateMetric:(int)arg1 value:(unsigned long long)arg2;
- (void)processNotificationList:(id)arg1;
- (_Bool)setupServiceConnection;
- (void)sendProcessInfoWithProcessID:(unsigned long long)arg1;
- (void)sendSubscriptionInfoFaceTimeCalling;
- (void)releaseServiceConnection;
- (int)getWRMSubscribeVersion;
- (void)sendUnsubscriptionInfoFaceTimeCalling;
- (void)sendStatusUpdateInfoFaceTimeCalling:(id)arg1;
- (void)dumpReport:(id)arg1;
- (void)sendReport:(id)arg1;
- (void)reportMetricsWifiCalling:(const CDStruct_dea828ac *)arg1;

@end

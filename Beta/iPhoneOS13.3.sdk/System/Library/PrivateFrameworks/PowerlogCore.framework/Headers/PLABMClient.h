/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@protocol PLABMClientMessageDelegate;

@interface PLABMClient : NSObject

{
    struct dispatch_queue_s *_queue;
    struct shared_ptr<abm::client::Manager> abmPLClnt;
    id <PLABMClientMessageDelegate> _delegate;
}

@property (retain) id <PLABMClientMessageDelegate> delegate;

+ (id)sharedABMClient;

- (id)init;
- (id).cxx_construct;
- (void)startListening;
- (id)getBasebandBootState;
- (id)getBasebandTimeAndLatency;
- (void)removeDeviceConfig;
- (void)addICEDeviceConfig;
- (void)regMetricListener;
- (void)regBBWakeListener;
- (void)regBootStateListener;
- (void)addICEDeviceConfigDebug;
- (void)triggerPeriodicMetrics;
- (id)getLTESleepManagerStats;
- (void)addICEDeviceConfigWith:(id)arg1;
- (void)sendBootStateChangInfoToLoggerUsing:(id)arg1;
- (void)sendTriggerToLoggerUsing:(id)arg1;
- (void)sendMetricToLoggerUsing:(id)arg1;
- (void)sendWakeInfoToLoggerUsing:(id)arg1;
- (void)regTriggerListener;

@end

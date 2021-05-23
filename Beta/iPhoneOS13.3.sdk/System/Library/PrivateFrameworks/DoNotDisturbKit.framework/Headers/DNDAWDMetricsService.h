/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbKit.framework/DoNotDisturbKit
 */

#import <Foundation/NSObject.h>

@class DNDState, DNDStateService, NSString;

@protocol OS_dispatch_queue;

@interface DNDAWDMetricsService : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    DNDStateService *_notificationsStateService;
    DNDState *_currentState;
    unsigned long long _lockState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)resume;
- (id)initWithClientIdentifier:(id)arg1;
- (void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;
- (void)_queue_postAWDMetric;
- (unsigned long long)_queue_currentAWDMetricState;
- (void)handleTransitionToUILocked:(_Bool)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@protocol AFAnalyticsService, OS_dispatch_group, OS_dispatch_queue;

@interface AFAnalytics : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    id <AFAnalyticsService> _service;
}

+ (id)sharedAnalytics;

- (id)init;
- (id)_init;
- (void)logEventWithType:(long long)arg1 context:(id)arg2;
- (void)setService:(id)arg1;
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3;
- (void)logEventWithType:(long long)arg1 context:(id)arg2 contextNoCopy:(_Bool)arg3;
- (void)logEvent:(id)arg1;
- (void)logInstrumentationOfType:(Class)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3;
- (void)barrier:(CDUnknownBlockType)arg1;
- (void)boostQueuedEvents:(CDUnknownBlockType)arg1;
- (void)beginEventsGrouping;
- (void)endEventsGrouping;
- (void)logEventWithType:(long long)arg1 contextProvider:(CDUnknownBlockType)arg2;
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3 contextNoCopy:(_Bool)arg4;
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 contextProvider:(CDUnknownBlockType)arg3 contextProvidingQueue:(id)arg4;
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 contextResolver:(CDUnknownBlockType)arg3;
- (void)logInstrumentation:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnContext:(id)arg3;
- (void)_stageEvent:(id)arg1;
- (id)_service:(_Bool)arg1;
- (void)_stageEvents:(id)arg1;
- (void)logEventWithType:(long long)arg1 contextProvider:(CDUnknownBlockType)arg2 contextProvidingQueue:(id)arg3;
- (void)logEventWithType:(long long)arg1 contextResolver:(CDUnknownBlockType)arg2;
- (void)logInstrumentation:(id)arg1 turnContext:(id)arg2;
- (void)logInstrumentation:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(struct NSUUID *)arg3;
- (void)logInstrumentationOfType:(Class)arg1 turnIdentifier:(id)arg2;
- (void)logEvents:(id)arg1;
- (void)logClientFeedbackPresented:(id)arg1;
- (id)newTurnBasedInstrumentationContext;

@end

/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface AFAnalyticsConnection : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_idleTimer;
    unsigned long long _numberOfEventsBeingSent;
    NSObject<OS_dispatch_group> *_group;
    _Bool _needsCleanUpConnection;
}

@property _Bool needsCleanUpConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)_connection;
- (void)_idleTimerFired;
- (void)_connectionInvalidated;
- (void)_connectionInterrupted;
- (void)_stopIdleTimer;
- (void)_cleanUpConnection;
- (oneway void)stageEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_willStartSendingEvents:(id)arg1;
- (void)_didFinishSendingEvents:(id)arg1;
- (void)_sendEvents:(id)arg1 numberOfRetries:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)logInstrumentationOfType:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3;
- (oneway void)boostQueuedEvents:(CDUnknownBlockType)arg1;
- (void)_handleFailureCallbackForEvents:(id)arg1 error:(id)arg2 numberOfRetries:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleSuccessCallbackForEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_startIdleTimer;
- (void)_cleanUpConnectionIfNeeded;
- (oneway void)flushStagedEventsWithReply:(CDUnknownBlockType)arg1;
- (oneway void)beginEventsGrouping;
- (oneway void)endEventsGrouping;
- (oneway void)stageEvent:(id)arg1;
- (oneway void)stageEvents:(id)arg1;

@end

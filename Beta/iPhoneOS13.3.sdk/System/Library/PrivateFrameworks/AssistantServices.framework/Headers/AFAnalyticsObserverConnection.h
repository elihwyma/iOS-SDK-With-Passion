/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AFAnalyticsObserverConnection : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSXPCConnection *_connection;
    CDUnknownBlockType _observation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)_connection;
- (void)flushWithCompletion:(CDUnknownBlockType)arg1;
- (void)_connectionInvalidated;
- (void)_connectionInterrupted;
- (oneway void)didObserveEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_cleanUpConnection;
- (id)initWithObservation:(CDUnknownBlockType)arg1;
- (void)waitUntilInvalidated;

@end

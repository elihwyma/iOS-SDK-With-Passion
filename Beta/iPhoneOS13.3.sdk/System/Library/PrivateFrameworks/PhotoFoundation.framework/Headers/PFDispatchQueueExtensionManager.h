/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, PFDispatchQueueExtension;

@interface PFDispatchQueueExtensionManager : NSObject

{
    _Atomic unsigned long long _enabledExtensionCount;
    PFDispatchQueueExtension *_extensions[4];
    _Atomic _Bool _extensionEnabled[4];
    unsigned long long _suspendCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)installOnQueue:(id)arg1;
- (id)queue:(id)arg1 willTargetQueue:(id)arg2;
- (id)queue:(id)arg1 receivedDispatchSync:(CDUnknownBlockType)arg2;
- (id)queue:(id)arg1 receivedDispatchBarrierSync:(CDUnknownBlockType)arg2;
- (id)queue:(id)arg1 receivedDispatchAsync:(CDUnknownBlockType)arg2;
- (id)queue:(id)arg1 receivedDispatchBarrierAsync:(CDUnknownBlockType)arg2;
- (id)queue:(id)arg1 receivedDispatchAfter:(CDUnknownBlockType)arg2;
- (id)queue:(id)arg1 receivedDispatchGroup:(id)arg2 async:(CDUnknownBlockType)arg3;
- (id)queue:(id)arg1 receivedDispatchGroup:(id)arg2 notify:(CDUnknownBlockType)arg3;
- (void)queue:(id)arg1 willEnqueueSync:(id)arg2;
- (void)queue:(id)arg1 willEnqueueAsync:(id)arg2 when:(CDUnknownBlockType)arg3;
- (void)queue:(id)arg1 didDequeue:(id)arg2 skipExecution:(CDUnknownBlockType)arg3;
- (void)queue:(id)arg1 willExecute:(id)arg2;
- (void)queue:(id)arg1 didExecute:(id)arg2;
- (void)queue:(id)arg1 skippedExecuting:(id)arg2;
- (void)queueDidSuspend:(id)arg1;
- (void)queueWillResume:(id)arg1;
- (void)enableExtension:(id)arg1;
- (void)disableExtension:(id)arg1;
- (id)extensionMatching:(CDUnknownBlockType)arg1;
- (void)addExtensions:(id)arg1 queue:(id)arg2;
- (id)extensions;
- (id)announce:(CDUnknownBlockType)arg1;
- (void)messageExtensions:(id)arg1 messageBlock:(CDUnknownBlockType)arg2;

@end

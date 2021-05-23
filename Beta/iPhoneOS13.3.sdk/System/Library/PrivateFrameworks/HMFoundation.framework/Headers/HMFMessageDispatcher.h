/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFMessageTransport, HMFTimer, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSObject, NSSet, NSString;

@protocol HMFLocking, OS_dispatch_queue;

@interface HMFMessageDispatcher

{
    id <HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableOrderedSet *_handlers;
    HMFTimer *_indexWatchdog;
    NSMutableArray *_indexOperations;
    NSSet *_filterClasses;
    HMFMessageTransport *_transport;
    NSMutableDictionary *_destinationHandlerIndexes;
    NSMutableDictionary *_nameHandlerIndexes;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly) NSMutableDictionary *destinationHandlerIndexes;
@property (readonly) NSMutableDictionary *nameHandlerIndexes;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, readonly) HMFMessageTransport *transport;
@property (copy) NSSet *filterClasses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)timerDidFire:(id)arg1;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 selector:(SEL)arg4;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 policies:(id)arg3 messageHandler:(CDUnknownBlockType)arg4;
- (id)handlersForMessage:(id)arg1;
- (void)dispatchMessage:(id)arg1;
- (void)messageTransport:(id)arg1 didReceiveMessage:(id)arg2;
- (id)initWithTransport:(id)arg1;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 selector:(SEL)arg3;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(CDUnknownBlockType)arg3;
- (void)deregisterForMessage:(id)arg1 receiver:(id)arg2;
- (void)deregisterReceiver:(id)arg1;
- (void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)dispatchMessage:(id)arg1 target:(id)arg2;
- (void)sendMessage:(id)arg1 target:(id)arg2;
- (void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)sendMessage:(id)arg1 target:(id)arg2 andInvokeCompletionHandler:(CDUnknownBlockType)arg3;

@end

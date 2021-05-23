/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@class NSString, PFCoalescerContext;

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface PFCoalescer : NSObject

{
    long long _resetSequenceNumber;
    long long _lastUpdateResetSequenceNumber;
    _Bool _usesTarget;
    _Bool _initialDelayTimerIsArmed;
    double _initialDelay;
    NSString *_label;
    id _target;
    id _buffer;
    NSObject<OS_dispatch_queue> *_sourceQueue;
    id _targetQueue;
    long long _queueType;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_source> *_source;
    CDUnknownBlockType _snapshotAndDrainHandler;
    CDUnknownBlockType _action;
    PFCoalescerContext *_context;
    long long _state;
    NSObject<OS_os_transaction> *_transaction;
    unsigned long long _stateCaptureHandlerHandle;
}

@property (retain) NSString *label;
@property (weak) id target;
@property _Bool usesTarget;
@property (retain) id buffer;
@property (retain) NSObject<OS_dispatch_queue> *sourceQueue;
@property (retain) id targetQueue;
@property long long queueType;
@property (retain) NSObject<OS_dispatch_queue> *isolationQueue;
@property (retain) NSObject<OS_dispatch_source> *source;
@property (copy) CDUnknownBlockType snapshotAndDrainHandler;
@property (copy) CDUnknownBlockType action;
@property (retain) PFCoalescerContext *context;
@property _Bool initialDelayTimerIsArmed;
@property long long state;
@property (retain) NSObject<OS_os_transaction> *transaction;
@property unsigned long long stateCaptureHandlerHandle;
@property double initialDelay;

+ (id)coalescerWithLabel:(id)arg1 target:(id)arg2 buffer:(id)arg3 queue:(id)arg4 bufferDrainer:(CDUnknownBlockType)arg5 action:(CDUnknownBlockType)arg6;
+ (id)coalescerWithLabel:(id)arg1 target:(id)arg2 queue:(id)arg3 action:(CDUnknownBlockType)arg4;
+ (id)coalescerWithLabel:(id)arg1 queue:(id)arg2 action:(CDUnknownBlockType)arg3;
+ (id)mutableContainerCoalescerWithLabel:(id)arg1 target:(id)arg2 container:(id)arg3 queue:(id)arg4 action:(CDUnknownBlockType)arg5;
+ (id)mutableContainerCoalescerWithLabel:(id)arg1 container:(id)arg2 queue:(id)arg3 action:(CDUnknownBlockType)arg4;
+ (id)setCoalescerWithLabel:(id)arg1 queue:(id)arg2 action:(CDUnknownBlockType)arg3;
+ (id)setCoalescerWithLabel:(id)arg1 target:(id)arg2 queue:(id)arg3 action:(CDUnknownBlockType)arg4;
+ (id)dictionaryCoalescerWithLabel:(id)arg1 queue:(id)arg2 action:(CDUnknownBlockType)arg3;
+ (id)dictionaryCoalescerWithLabel:(id)arg1 target:(id)arg2 queue:(id)arg3 action:(CDUnknownBlockType)arg4;
+ (id)arrayCoalescerWithLabel:(id)arg1 queue:(id)arg2 action:(CDUnknownBlockType)arg3;
+ (id)arrayCoalescerWithLabel:(id)arg1 target:(id)arg2 queue:(id)arg3 action:(CDUnknownBlockType)arg4;
+ (CDUnknownBlockType)mutableCollectionBufferDrainer;

- (id)init;
- (void)dealloc;
- (void)reset;
- (void)update;
- (void)update:(CDUnknownBlockType)arg1;
- (id)initWithLabel:(id)arg1 target:(id)arg2 buffer:(id)arg3 queue:(id)arg4 bufferDrainer:(CDUnknownBlockType)arg5 action:(CDUnknownBlockType)arg6;
- (void)performEventActionWithTarget:(id)arg1;
- (void)resetAndShutDown;
- (void)_resetWhileLocked;
- (id)stateInformation;
- (void)setupStateCaptureHandler;

@end

/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class NSError;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SGFuture : NSObject

{
    NSObject *_result;
    NSError *_error;
    struct _opaque_pthread_mutex_t _lock;
    NSObject<OS_dispatch_queue> *_callbacks;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    _Bool _alwaysUseCallbacksQueue;
    _Bool _yoDontLeaveMeHangingBro;
    NSObject *_parentObject;
    void *_parentObjectKey;
    _Bool _isComplete;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (nonatomic, readonly) _Bool isComplete;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)createAfter:(id)arg1 onCreate:(CDUnknownBlockType)arg2;
+ (id)futureForObject:(id)arg1 withKey:(void *)arg2 onCreate:(CDUnknownBlockType)arg3;
+ (id)createWithImmediateResult:(id)arg1 error:(id)arg2;
+ (id)createWithImmediateResult:(id)arg1;
+ (id)createWithImmediateError:(id)arg1;
+ (void)waitForFuturesToComplete:(id)arg1 withCallback:(CDUnknownBlockType)arg2;

- (id)init;
- (void)dealloc;
- (id)error;
- (id)wait;
- (id)result;
- (void)wait:(CDUnknownBlockType)arg1;
- (void)setTimeout:(double)arg1;
- (id)waitWithTimeout:(double)arg1;
- (CDUnknownBlockType)completer;
- (void)setTargetQueue:(id)arg1 useAfterCompletion:(_Bool)arg2;
- (void)_wait:(CDUnknownBlockType)arg1 forSyncAPI:(_Bool)arg2;
- (_Bool)succeed:(id)arg1;
- (_Bool)fail:(id)arg1;
- (_Bool)completeWithResult:(id)arg1 error:(id)arg2;
- (_Bool)_finishWithResult:(id)arg1 orError:(id)arg2;
- (void)clearTimeout;
- (void)_clearTimeoutNonThreadSafe;
- (void)disassociateFromParentObject;

@end

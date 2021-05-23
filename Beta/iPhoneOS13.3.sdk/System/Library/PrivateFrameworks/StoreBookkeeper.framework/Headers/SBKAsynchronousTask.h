/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <Foundation/NSObject.h>

@class NSError, NSMutableArray, NSString, SBKTaskAssertion;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SBKAsynchronousTask : NSObject

{
    NSString *_debugDescription;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    _Bool _taskInvalidationDisabled;
    double _timeout;
    int _cancelType;
    id _result;
    NSError *_error;
    CDUnknownBlockType _expirationHandler;
    CDUnknownBlockType _finishedHandler;
    SBKTaskAssertion *_taskAssertion;
    NSMutableArray *_completions;
}

@property (retain) id result;
@property (retain) NSError *error;
@property (retain) SBKTaskAssertion *taskAssertion;
@property (retain) NSMutableArray *completions;
@property (copy) CDUnknownBlockType finishedHandler;
@property (copy) CDUnknownBlockType expirationHandler;
@property int cancelType;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (void)invalidate;
- (void)_invalidateTimer;
- (void)_invalidateAssertion:(_Bool)arg1;
- (void)addTaskCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithHandlerQueue:(id)arg1 timeout:(double)arg2 debugDescription:(id)arg3;
- (void)invokeTaskCompletionBlocksWithBlock:(CDUnknownBlockType)arg1;
- (void)finishTaskOperationWithResult:(id)arg1 error:(id)arg2;
- (void)beginTaskOperation;
- (void)_onQueueFireExpirationHandlerIfNecesary;
- (void)endTaskOperation;

@end

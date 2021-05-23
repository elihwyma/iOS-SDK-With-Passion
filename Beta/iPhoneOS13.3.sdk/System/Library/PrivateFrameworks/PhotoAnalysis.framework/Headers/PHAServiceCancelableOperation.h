/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class NSInvocation;

@protocol OS_dispatch_group;

@interface PHAServiceCancelableOperation : NSObject

{
    NSInvocation *_invocation;
    long long _operationId;
    _Bool _cancelRequested;
    CDUnknownBlockType _cancellationBlock;
    NSObject<OS_dispatch_group> *_completionGroup;
}

+ (id)currentOperation;
+ (id)operationNotFoundError:(long long)arg1;

- (id)description;
- (_Bool)cancel;
- (_Bool)isCancelled;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setCancellationBlock:(CDUnknownBlockType)arg1;
- (long long)operationId;
- (void)_startWork;
- (id)initWithOperationId:(long long)arg1 invocation:(id)arg2;
- (void)beginAsyncWork;
- (void)endAsyncWork;
- (void)enqueueOnQueue:(id)arg1;
- (id)operationCanceledError:(_Bool)arg1;

@end

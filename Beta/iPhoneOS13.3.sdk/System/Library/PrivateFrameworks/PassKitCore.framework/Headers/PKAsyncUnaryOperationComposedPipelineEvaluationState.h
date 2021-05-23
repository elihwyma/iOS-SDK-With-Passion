/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSMutableArray, NSString, PKAsyncOperationState;

@interface PKAsyncUnaryOperationComposedPipelineEvaluationState : NSObject

{
    struct os_unfair_lock_s _lock;
    NSMutableArray *_operations;
    id _value;
    CDUnknownBlockType _completion;
    _Bool _canceled;
    PKAsyncOperationState *_runningOperationState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isCanceled) _Bool canceled;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (_Bool)_performOperation;
- (id)_initWithOperations:(id)arg1 input:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

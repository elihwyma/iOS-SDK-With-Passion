/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CKAsyncTransaction : NSObject

{
    NSObject<OS_dispatch_group> *_group;
    NSMutableArray *_operations;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _completionBlock;
    unsigned long long _state;
}

@property (retain, nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (copy, nonatomic, readonly) CDUnknownBlockType completionBlock;
@property (nonatomic, readonly) unsigned long long state;

- (void)dealloc;
- (void)cancel;
- (void)commit;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (void)addOperationWithBlock:(CDUnknownBlockType)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithCallbackQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addAsyncOperationWithBlock:(CDUnknownBlockType)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_ensureTransactionData;

@end

/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIKeyboardTaskQueue;

__attribute__((visibility("hidden")))
@interface UIKeyboardTaskExecutionContext : NSObject

{
    UIKeyboardTaskExecutionContext *_parentExecutionContext;
    CDUnknownBlockType _continuation;
    id _info;
    CDUnknownBlockType _pendingCompletionBlock;
    UIKeyboardTaskQueue *_executionQueue;
}

@property (nonatomic, readonly) UIKeyboardTaskQueue *executionQueue;
@property (retain, nonatomic) id info;
@property (copy, nonatomic) CDUnknownBlockType pendingCompletionBlock;

- (id)init;
- (void)dealloc;
- (void)returnExecutionToParent;
- (void)returnExecutionToParentWithInfo:(id)arg1;
- (id)childWithContinuation:(CDUnknownBlockType)arg1;
- (void)transferExecutionToMainThreadWithTask:(CDUnknownBlockType)arg1;
- (id)initWithParentContext:(id)arg1 continuation:(CDUnknownBlockType)arg2;
- (id)initWithExecutionQueue:(id)arg1;

@end

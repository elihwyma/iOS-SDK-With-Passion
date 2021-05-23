/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@protocol NSObject;

@interface CKAsyncTransactionOperation : NSObject

{
    CDUnknownBlockType _operationCompletionBlock;
    id <NSObject> _value;
}

@property (copy, nonatomic) CDUnknownBlockType operationCompletionBlock;
@property (retain) id <NSObject> value;

- (void)dealloc;
- (id)initWithOperationCompletionBlock:(CDUnknownBlockType)arg1;
- (void)callAndReleaseCompletionBlock:(_Bool)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSMutableArray;

@interface PKAsyncUnaryOperationComposer : NSObject

{
    struct os_unfair_lock_s _lock;
    NSMutableArray *_operations;
}

+ (id)_evaluateOperations:(id)arg1 withInput:(id)arg2 completion:(CDUnknownBlockType)arg3;

- (id)init;
- (void)addOperation:(CDUnknownBlockType)arg1;
- (id)evaluateWithInput:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

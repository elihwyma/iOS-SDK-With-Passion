/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AMSPromiseCompletionBlocks : NSObject

{
    NSMutableArray *_completionBlocks;
    _Bool _shouldCallImmediately;
}

- (id)init;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (void)addErrorBlock:(CDUnknownBlockType)arg1;
- (void)callErrorBlock:(CDUnknownBlockType)arg1 withPromiseResult:(id)arg2;
- (void)callCompletionBlock:(CDUnknownBlockType)arg1 withPromiseResult:(id)arg2;
- (void)callSuccessBlock:(CDUnknownBlockType)arg1 withPromiseResult:(id)arg2;
- (void)flushCompletionBlocksWithPromiseResult:(id)arg1;

@end

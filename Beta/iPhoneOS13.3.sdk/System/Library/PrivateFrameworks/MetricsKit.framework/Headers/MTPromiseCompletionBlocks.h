/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface MTPromiseCompletionBlocks : NSObject

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

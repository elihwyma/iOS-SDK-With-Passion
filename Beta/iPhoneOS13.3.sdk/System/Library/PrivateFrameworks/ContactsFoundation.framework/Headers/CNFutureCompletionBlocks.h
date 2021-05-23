/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface CNFutureCompletionBlocks : NSObject

{
    NSMutableArray *_completionBlocks;
    _Bool _shouldCallImmediately;
}

- (id)init;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1 orCallWithFutureResult:(id)arg2;
- (_Bool)shouldCallImmediately;
- (void)setShouldCallImmediately:(_Bool)arg1;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1 orCallWithFutureResult:(id)arg2;
- (void)addFailureBlock:(CDUnknownBlockType)arg1 orCallWithFutureResult:(id)arg2;
- (void)flushCompletionBlocksWithFutureResult:(id)arg1;

@end

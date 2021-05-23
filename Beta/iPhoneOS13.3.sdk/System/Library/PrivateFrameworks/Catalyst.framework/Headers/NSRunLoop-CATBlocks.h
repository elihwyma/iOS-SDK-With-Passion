/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSRunLoop.h>

@interface NSRunLoop (CATBlocks)

+ (void)cat_performBlockOnMainRunLoop:(CDUnknownBlockType)arg1;
+ (void)cat_performBlock:(CDUnknownBlockType)arg1;

- (void)cat_performBlock:(CDUnknownBlockType)arg1;
- (void)cat_performInModes:(id)arg1 block:(CDUnknownBlockType)arg2;

@end

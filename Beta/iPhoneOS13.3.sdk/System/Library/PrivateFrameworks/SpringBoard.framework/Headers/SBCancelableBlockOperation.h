/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSOperation.h>

@class NSMutableArray;

@interface SBCancelableBlockOperation : NSOperation

{
    NSMutableArray *_blocks;
}

- (id)init;
- (void)main;
- (void)addBlock:(CDUnknownBlockType)arg1;

@end

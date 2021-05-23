/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol CalAsyncBlockPerformer;

@interface CalAsyncBlockQueue : NSObject

{
    id <CalAsyncBlockPerformer> _blockPerformer;
    NSMutableSet *_pendingBlocks;
}

@property (nonatomic, readonly) id <CalAsyncBlockPerformer> blockPerformer;
@property (nonatomic, readonly) NSMutableSet *pendingBlocks;

- (void)performAsync:(CDUnknownBlockType)arg1;
- (void)performAfterDelay:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)initWithBlockPerformer:(id)arg1;
- (void)cancelAllPendingBlocks;

@end

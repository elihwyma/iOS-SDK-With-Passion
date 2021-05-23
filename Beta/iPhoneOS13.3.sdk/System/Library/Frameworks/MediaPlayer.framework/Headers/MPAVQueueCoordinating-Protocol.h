/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/Swift-Protocol.h>

@class MPAVItem, NSArray;

@protocol MPAVQueueCoordinating <Swift>

@property (nonatomic, readonly) MPAVItem *currentItem;
@property (nonatomic) _Bool shouldExpectEmptyQueue;
@property (nonatomic) _Bool shouldDeferItemLoading;
@property (nonatomic, readonly) NSArray *items;

- (unsigned short)reset;
- (unsigned short)reloadItemsKeepingCurrentItem: /* Error: Ran out of types for this method. */;

@end

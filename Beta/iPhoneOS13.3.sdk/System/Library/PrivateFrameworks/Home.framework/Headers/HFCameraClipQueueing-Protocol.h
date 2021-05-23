/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/Swift-Protocol.h>

@class NSArray;

@protocol HFCameraClipQueueing <Swift>

@property (nonatomic, readonly) NSArray *queuableItems;

- (unsigned short)removeQueueableItem: /* Error: Ran out of types for this method. */;
- (unsigned short)createQueueableItemForClipManager:clip: /* Error: Ran out of types for this method. */;
- (unsigned short)insertQueueableItem:afterItem: /* Error: Ran out of types for this method. */;
- (unsigned short)seekToOffset:inItem: /* Error: Ran out of types for this method. */;

@end

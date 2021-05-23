/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFTransformItem.h>

@class HFRoomItem;

@interface HFSelectableRoomTransformItem : HFTransformItem

@property (nonatomic, readonly) HFRoomItem *roomItem;

- (id)initWithRoomItem:(id)arg1 accessoryVendor:(id)arg2;
- (id)initWithSourceItem:(id)arg1 updateOptionsTransformBlock:(CDUnknownBlockType)arg2 resultsTransformBlock:(CDUnknownBlockType)arg3;

@end

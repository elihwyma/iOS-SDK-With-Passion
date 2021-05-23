/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

@class HFRoomBuilder;

@interface HFRoomBuilderItem : HFItem

{
    HFRoomBuilder *_roomBuilder;
}

@property (nonatomic, readonly) HFRoomBuilder *roomBuilder;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithRoomBuilder:(id)arg1;

@end

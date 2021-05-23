/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

@class HMRoom;

@interface HFCurrentZonesItem : HFItem

{
    HMRoom *_room;
}

@property (nonatomic, readonly) HMRoom *room;

- (id)init;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithRoom:(id)arg1;

@end

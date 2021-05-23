/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

@class HMHome, HMRoom;

@interface HFActionSetListItem : HFItem

{
    _Bool _onlyShowsFavorites;
    HMHome *_home;
    HMRoom *_room;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HMRoom *room;
@property (nonatomic) _Bool onlyShowsFavorites;

- (id)init;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithHome:(id)arg1 room:(id)arg2;

@end

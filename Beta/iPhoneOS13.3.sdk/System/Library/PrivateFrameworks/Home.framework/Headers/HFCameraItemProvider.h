/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class HMHome, HMRoom, NSMutableSet;

@interface HFCameraItemProvider : HFItemProvider

{
    _Bool _onlyShowsFavorites;
    CDUnknownBlockType _filter;
    HMHome *_home;
    HMRoom *_room;
    NSMutableSet *_cameraItems;
}

@property (retain, nonatomic) NSMutableSet *cameraItems;
@property (copy, nonatomic) CDUnknownBlockType filter;
@property (nonatomic, readonly) HMHome *home;
@property (retain, nonatomic) HMRoom *room;
@property (nonatomic) _Bool onlyShowsFavorites;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)items;
- (id)initWithHome:(id)arg1;
- (id)reloadItems;
- (id)invalidationReasons;
- (CDUnknownBlockType)_roomFilter;
- (CDUnknownBlockType)_favoriteFilter;

@end

/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class HFItem, HMHome, HMRoom, NSMutableSet;

@protocol HFCharacteristicValueSource, HFServiceLikeItem;

@interface HFActionSetItemProvider : HFItemProvider

{
    _Bool _onlyShowsFavorites;
    HMHome *_home;
    HMRoom *_room;
    CDUnknownBlockType _filter;
    unsigned long long _actionSetItemStyle;
    HFItem<HFServiceLikeItem> *_serviceLikeItem;
    NSMutableSet *_actionSetItems;
    id <HFCharacteristicValueSource> _overrideValueSource;
}

@property (retain, nonatomic) NSMutableSet *actionSetItems;
@property (retain, nonatomic) id <HFCharacteristicValueSource> overrideValueSource;
@property (nonatomic, readonly) HMHome *home;
@property (retain, nonatomic) HMRoom *room;
@property (nonatomic) _Bool onlyShowsFavorites;
@property (copy, nonatomic) CDUnknownBlockType filter;
@property (nonatomic, readonly) unsigned long long actionSetItemStyle;
@property (retain, nonatomic) id <HFCharacteristicValueSource> valueSource;
@property (copy, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)items;
- (id)initWithHome:(id)arg1;
- (id)reloadItems;
- (id)invalidationReasons;
- (id)initWithHome:(id)arg1 actionSetItemStyle:(unsigned long long)arg2;
- (CDUnknownBlockType)_roomFilter;
- (CDUnknownBlockType)_favoriteFilter;

@end

/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItemProvider.h>

@class HFItemBuilder, HFRoomBuilderItem, HMHome;

@protocol HFServiceLikeBuilder;

@interface HFSelectedRoomItemProvider : HFItemProvider

{
    CDUnknownBlockType _filter;
    HMHome *_home;
    HFItemBuilder<HFServiceLikeBuilder> *_serviceLikeBuilder;
    HFRoomBuilderItem *_roomBuilderItem;
}

@property (retain, nonatomic) HFItemBuilder<HFServiceLikeBuilder> *serviceLikeBuilder;
@property (retain, nonatomic) HFRoomBuilderItem *roomBuilderItem;
@property (copy, nonatomic) CDUnknownBlockType filter;
@property (nonatomic, readonly) HMHome *home;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)items;
- (id)reloadItems;
- (id)invalidationReasons;
- (id)initWithHome:(id)arg1 serviceLikeBuilder:(id)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Home/HFItemManager.h>

@class HFItem;

@protocol HFServiceLikeItem;

@interface HUAccessorySceneListItemManager : HFItemManager

{
    HFItem<HFServiceLikeItem> *_serviceLikeItem;
    HFItem *_existingScenesContentItem;
    HFItem *_suggestedScenesContentItem;
}

@property (copy, nonatomic, readonly) HFItem<HFServiceLikeItem> *serviceLikeItem;
@property (nonatomic, readonly) HFItem *existingScenesContentItem;
@property (nonatomic, readonly) HFItem *suggestedScenesContentItem;

- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithDelegate:(id)arg1 serviceLikeItem:(id)arg2;

@end

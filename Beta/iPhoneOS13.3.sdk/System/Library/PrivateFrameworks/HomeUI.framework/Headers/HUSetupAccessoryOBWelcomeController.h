/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUCenterFillOBWelcomeController.h>

@class HFItem, HUHomeAccessoryTileView;

@protocol HFServiceLikeItem;

@interface HUSetupAccessoryOBWelcomeController : HUCenterFillOBWelcomeController

{
    HUHomeAccessoryTileView *_homeAccessoryTileView;
}

@property (nonatomic, readonly) HUHomeAccessoryTileView *homeAccessoryTileView;
@property (nonatomic, readonly) HFItem<HFServiceLikeItem> *item;

- (double)_contentAspectRatio;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentView:(id)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 item:(id)arg4;

@end

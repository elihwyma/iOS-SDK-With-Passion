/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUQuickControlSingleControlViewController.h>

@class HFControlItem, HUQuickControlValveToggleView;

@protocol HFPrimaryStateWriter;

@interface HUQuickControlValveToggleViewController : HUQuickControlSingleControlViewController

{
    HUQuickControlValveToggleView *_controlView;
}

@property (nonatomic, readonly) HFControlItem<HFPrimaryStateWriter> *controlItem;
@property (retain, nonatomic) HUQuickControlValveToggleView *controlView;

+ (id)controlItemPredicate;
+ (Class)controlItemClass;

- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (id)controlToViewValueTransformer;

@end

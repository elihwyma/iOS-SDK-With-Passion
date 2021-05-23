/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUQuickControlSingleControlViewController.h>

@class HFRangeControlItem, HUQuickControlSliderViewProfile;

@interface HUQuickControlRangeViewController : HUQuickControlSingleControlViewController

@property (nonatomic, readonly) HFRangeControlItem *controlItem;
@property (nonatomic, readonly) HUQuickControlSliderViewProfile *viewProfile;

+ (Class)controlItemClass;

- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (id)controlToViewValueTransformer;

@end

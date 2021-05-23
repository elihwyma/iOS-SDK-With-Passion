/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUQuickControlSingleControlViewController.h>

@class HFIncrementalStateControlItem, HUQuickControlRingSliderView, HUQuickControlRingSliderViewProfile, NSString;

@interface HUQuickControlRingSliderIncrementalStateViewController : HUQuickControlSingleControlViewController

{
    HUQuickControlRingSliderView *_ringSliderView;
}

@property (nonatomic, readonly) HFIncrementalStateControlItem *controlItem;
@property (nonatomic, readonly) HUQuickControlRingSliderViewProfile *viewProfile;
@property (retain, nonatomic) HUQuickControlRingSliderView *ringSliderView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)controlItemClass;

- (id)createInteractionCoordinator;

@end

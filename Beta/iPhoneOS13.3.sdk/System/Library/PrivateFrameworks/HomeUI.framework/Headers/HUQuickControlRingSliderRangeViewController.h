/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUQuickControlSingleControlViewController.h>

@class HFRangeControlItem, HUQuickControlRingSliderView, HUQuickControlRingSliderViewProfile, NSString;

@interface HUQuickControlRingSliderRangeViewController : HUQuickControlSingleControlViewController

{
    HUQuickControlRingSliderView *_ringSliderView;
}

@property (nonatomic, readonly) HFRangeControlItem *controlItem;
@property (nonatomic, readonly) HUQuickControlRingSliderViewProfile *viewProfile;
@property (retain, nonatomic) HUQuickControlRingSliderView *ringSliderView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)controlItemPredicate;
+ (Class)controlItemClass;

- (void)quickControlItemUpdater:(id)arg1 didUpdateResultsForControlItems:(id)arg2;
- (void)invalidateViewProfile;
- (void)interactionCoordinator:(id)arg1 viewValueDidChange:(id)arg2;
- (id)createInteractionCoordinator;
- (id)createViewProfile;
- (id)controlToViewValueTransformer;
- (void)updateMainStatusStringWithValue:(id)arg1;
- (void)updateSupplementaryValue;
- (void)_getTemperatureThresholdControlItemStateString:(out id *)arg1 temperatureString:(out id *)arg2 withRangeControlItemValue:(id)arg3;
- (void)_getHeaterCoolerThresholdControlItemStateString:(out id *)arg1 temperatureString:(out id *)arg2 withRangeControlItemValue:(id)arg3;
- (void)modelValueDidChange;

@end

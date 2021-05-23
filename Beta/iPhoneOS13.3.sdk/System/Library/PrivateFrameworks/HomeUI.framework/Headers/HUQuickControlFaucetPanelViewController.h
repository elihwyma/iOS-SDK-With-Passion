/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUQuickControlViewController.h>

@class HFChildServiceControlItem, HFControlItem, HFTemperatureThresholdControlItem, HUQuickControlCollectionViewController;

@protocol HFPrimaryStateWriter;

@interface HUQuickControlFaucetPanelViewController : HUQuickControlViewController

{
    HUQuickControlCollectionViewController *_collectionViewController;
}

@property (nonatomic, readonly) HUQuickControlCollectionViewController *collectionViewController;
@property (nonatomic, readonly) HFControlItem<HFPrimaryStateWriter> *primaryStateControlItem;
@property (nonatomic, readonly) HFTemperatureThresholdControlItem *temperatureControlItem;
@property (nonatomic, readonly) HFChildServiceControlItem *childValvesControlItem;

+ (id)controlItemPredicate;
+ (id)_primaryStatePredicate;
+ (id)_temperaturePredicate;
+ (id)_childValvesPredicate;

- (void)viewDidLoad;
- (id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3;
- (id)childQuickControlContentViewControllers;
- (id)overrideStatusText;
- (id)_controlItemMatchingPredicate:(id)arg1;

@end

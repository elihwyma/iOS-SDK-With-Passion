/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <HeartRhythmUI/HRFeatureRegulatoryPanelViewController.h>

@class NSArray;

@interface HRAtrialFibrillationRegulatoryPanelViewController : HRFeatureRegulatoryPanelViewController

{
    NSArray *_displayableItems;
    long long _reenableFeatureSection;
}

@property (nonatomic) long long reenableFeatureSection;

- (void)viewDidLoad;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)displayableItems;
- (void)receivedHeartRhythmAvailabilityNotification;
- (id)_displayableItemsForFeatureName;
- (id)_displayableItemsForPhone;
- (_Bool)_shouldDisplayItemsForWatch;
- (id)_displayableItemsForWatch;
- (id)_displayableItemsForInstructionManual;
- (id)_displayableItemsForReenableFeature;
- (id)_displayableItemsForContactSupport;

@end

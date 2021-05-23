/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <HealthUI/HKTableViewController.h>

@class HKHeartRhythmAvailability, NSArray, NSString, UINavigationController, UIViewController;

@protocol HRFeatureRegulatoryReenableFeatureActionDelegate;

@interface HRFeatureRegulatoryPanelViewController : HKTableViewController

{
    NSArray *_displayableItems;
    HKHeartRhythmAvailability *_heartRhythmAvailability;
    UIViewController<HRFeatureRegulatoryReenableFeatureActionDelegate> *_delegate;
    UINavigationController *_onboardingNavigationController;
}

@property (retain, nonatomic) HKHeartRhythmAvailability *heartRhythmAvailability;
@property (weak, nonatomic) UIViewController<HRFeatureRegulatoryReenableFeatureActionDelegate> *delegate;
@property (retain, nonatomic) UINavigationController *onboardingNavigationController;
@property (nonatomic, readonly) NSArray *displayableItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)protectedDataDidBecomeAvailable:(id)arg1;
- (id)initWithHealthStore:(id)arg1 delegate:(id)arg2;
- (void)heartRhythmAvailabilityDidUpdate;
- (void)didSelectReenableFeatureForProductName:(id)arg1;
- (void)receivedHeartRhythmAvailabilityNotification;

@end

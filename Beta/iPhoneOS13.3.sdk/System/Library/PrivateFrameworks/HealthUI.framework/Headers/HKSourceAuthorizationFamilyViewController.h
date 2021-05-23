/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKTableViewController.h>

@class HKClinicalSourceAuthorizationController, HKHealthStore, HKSource, HKSourceAuthorizationController, UIViewController;

@interface HKSourceAuthorizationFamilyViewController : HKTableViewController

{
    HKSource *_source;
    HKClinicalSourceAuthorizationController *_clinicalAuthorizationController;
    HKSourceAuthorizationController *_healthDataAuthorizationController;
    UIViewController *_clinicalAuthorizationSettingsViewController;
    UIViewController *_healthDataAuthorizationSettingsViewController;
    HKHealthStore *_healthStore;
}

@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (copy, nonatomic, readonly) HKSource *source;
@property (retain, nonatomic) HKClinicalSourceAuthorizationController *clinicalAuthorizationController;
@property (retain, nonatomic) HKSourceAuthorizationController *healthDataAuthorizationController;
@property (retain, nonatomic) UIViewController *clinicalAuthorizationSettingsViewController;
@property (retain, nonatomic) UIViewController *healthDataAuthorizationSettingsViewController;

- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithHealthStore:(id)arg1 source:(id)arg2;
- (void)_reloadAuthorizationSettings;
- (id)_createFamilyCell;
- (id)_valueStringForAnyCategoryEnabled:(_Bool)arg1;

@end

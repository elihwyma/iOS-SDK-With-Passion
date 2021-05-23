/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Preferences/PSListController.h>

@class HKHealthStore, UIProgressHUD;

@interface HKHealthManageStorageViewController : PSListController

{
    long long _status;
    UIProgressHUD *_spinnerView;
    HKHealthStore *_healthStore;
}

@property (nonatomic, readonly) HKHealthStore *healthStore;

- (id)init;
- (void)viewWillAppear:(_Bool)arg1;
- (id)specifiers;
- (void)showSpinnerMessage:(id)arg1;
- (void)hideSpinner;
- (void)_loadCloudSyncStorageStatus;
- (void)confirmDisable:(id)arg1;
- (void)_disableAndDelete:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKTableViewController.h>

@class HKHealthStore, HKSample, NSArray, UIFont;

__attribute__((visibility("hidden")))
@interface WDAppAccessListViewController : HKTableViewController

{
    HKHealthStore *_healthStore;
    NSArray *_allowedApps;
    NSArray *_disallowedApps;
    HKSample *_sample;
    UIFont *_bodyFont;
}

@property (retain, nonatomic) NSArray *allowedApps;
@property (retain, nonatomic) NSArray *disallowedApps;
@property (retain, nonatomic) HKSample *sample;
@property (retain, nonatomic) UIFont *bodyFont;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_sourceForIndexPath:(id)arg1;
- (void)_handleReturnedImage:(id)arg1 forSource:(id)arg2 cell:(id)arg3 tableView:(id)arg4 fetchError:(id)arg5;
- (id)initWithSample:(id)arg1 healthStore:(id)arg2;
- (void)_refreshAppAuthorizationData;
- (id)_identifierForCellInSection:(long long)arg1;
- (id)_textForCellAtIndexPath:(id)arg1;
- (void)_loadIconForSource:(id)arg1 onCell:(id)arg2 ofTableView:(id)arg3;
- (void)resetAccess;

@end

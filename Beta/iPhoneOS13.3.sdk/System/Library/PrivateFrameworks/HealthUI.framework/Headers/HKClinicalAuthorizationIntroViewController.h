/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKViewController.h>

@class HKClinicalAuthorizationHeaderView, HKClinicalAuthorizationSequenceContext, NSString, UITableView;

@protocol HKHealthPrivacyServicePromptControllerDelegate;

@interface HKClinicalAuthorizationIntroViewController : HKViewController

{
    id <HKHealthPrivacyServicePromptControllerDelegate> _delegate;
    HKClinicalAuthorizationSequenceContext *_context;
    UITableView *_tableView;
    HKClinicalAuthorizationHeaderView *_headerView;
}

@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic, readonly) HKClinicalAuthorizationHeaderView *headerView;
@property (weak, nonatomic) id <HKHealthPrivacyServicePromptControllerDelegate> delegate;
@property (nonatomic, readonly) HKClinicalAuthorizationSequenceContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithContext:(id)arg1;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_updateForCurrentContentSizeCategory;
- (void)_finishWithError:(id)arg1;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_configureNavigationItem;
- (void)_nextButtonPressed:(id)arg1;
- (void)_configureTableView;
- (id)_createFooterView;
- (void)_configureHeaderViewWithSource:(id)arg1;
- (_Bool)_indexPathIsValidRow:(id)arg1;
- (long long)_rowFromIndexPath:(id)arg1;
- (id)_cellForDetailsAtIndexPath:(id)arg1;
- (id)_cellForViewHealthRecordsAtIndexPath:(id)arg1;
- (void)_viewHealthRecordsCellTapped:(id)arg1;

@end

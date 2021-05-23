/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKViewController.h>

@class HKClinicalAuthorizationDisplayController, HKClinicalAuthorizationSequenceContext, NSString, UITableView;

@protocol HKHealthPrivacyServicePromptControllerDelegate;

@interface HKClinicalAuthorizationNewRecordsViewController : HKViewController

{
    HKClinicalAuthorizationSequenceContext *_context;
    id <HKHealthPrivacyServicePromptControllerDelegate> _delegate;
    UITableView *_tableView;
    HKClinicalAuthorizationDisplayController *_displayController;
    long long _authorizationMode;
}

@property (nonatomic, readonly) UITableView *tableView;
@property (nonatomic, readonly) HKClinicalAuthorizationDisplayController *displayController;
@property (nonatomic) long long authorizationMode;
@property (nonatomic, readonly) HKClinicalAuthorizationSequenceContext *context;
@property (weak, nonatomic) id <HKHealthPrivacyServicePromptControllerDelegate> delegate;
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
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_updateForCurrentContentSizeCategory;
- (void)_finishWithError:(id)arg1;
- (void)_doneButtonPressed:(id)arg1;
- (void)_configureNavigationItem;
- (void)_configureTableView;
- (long long)_shareAuthorizationModeForIndexPath:(id)arg1;
- (id)_visibleShareAuthorizationModeCellForMode:(long long)arg1;
- (void)_updateShareAuthorizationModeSectionFooter;
- (id)_indexPathForShareAuthorizationMode:(long long)arg1;
- (id)_formatStringForShareAuthorizationModeFooterWithMode:(long long)arg1;
- (id)_shareAuthorizationModeCellForIndexPath:(id)arg1;
- (id)_titleForShareAuthorizationModeFooter;
- (void)_shareAuthorizationModeCellPressed:(id)arg1;
- (id)_createHeaderView;
- (id)_createFooterView;
- (_Bool)_indexPathIsValidRow:(id)arg1;

@end

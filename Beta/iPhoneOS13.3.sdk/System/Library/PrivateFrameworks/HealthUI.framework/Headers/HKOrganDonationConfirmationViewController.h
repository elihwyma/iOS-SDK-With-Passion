/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKViewController.h>

@class HKOrganDonationConnectionManager, HKOrganDonationRegistrant, NSArray, NSString, UIActivityIndicatorView, UIButton, UIFont, UITableView, UIView, UIVisualEffectView, _HKMedicalIDData;

@interface HKOrganDonationConfirmationViewController : HKViewController

{
    HKOrganDonationConnectionManager *_connectionManager;
    HKOrganDonationRegistrant *_registrant;
    UIView *_headerView;
    UIVisualEffectView *_footerView;
    UIFont *_bodyFont;
    NSString *_completionButtonTitle;
    CDUnknownBlockType _registrationCompletionHandler;
    UITableView *_tableView;
    UIActivityIndicatorView *_loadingIndicator;
    _HKMedicalIDData *_medicalIDData;
    NSArray *_dataEntryItems;
    UIButton *_submitButton;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIActivityIndicatorView *loadingIndicator;
@property (retain, nonatomic) _HKMedicalIDData *medicalIDData;
@property (retain, nonatomic) NSArray *dataEntryItems;
@property (retain, nonatomic) UIButton *submitButton;
@property (retain, nonatomic) NSString *completionButtonTitle;
@property (copy, nonatomic) CDUnknownBlockType registrationCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)_createTableHeaderView;
- (id)_createTableFooterView;
- (id)initWithRegistrant:(id)arg1 medicalIDData:(id)arg2 connectionManager:(id)arg3;
- (void)titledBuddyHeaderViewDidTapLinkButton:(id)arg1;
- (void)submitButtonTapped:(id)arg1;
- (void)confirmSubmissionIfNecessaryWithConfirmHandler:(CDUnknownBlockType)arg1 andCancelHandler:(CDUnknownBlockType)arg2;

@end

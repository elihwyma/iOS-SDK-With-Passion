/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewController.h>

@class HKHealthStore, HKOrganDonationConnectionManager, HKOrganDonationRegistrant, NSArray, NSString, UIActivityIndicatorView, UIBarButtonItem, UIButton, UIFont, UIView, _HKMedicalIDData;

@interface HKOrganDonationRegisterViewController : UITableViewController

{
    HKOrganDonationConnectionManager *_connectionManager;
    HKHealthStore *_healthStore;
    UIButton *_continueButton;
    UIActivityIndicatorView *_loadingIndicator;
    UIBarButtonItem *_loadingIndicatorBarButtonItem;
    UIBarButtonItem *_updateBarButtonItem;
    UIView *_headerView;
    UIView *_footerView;
    _Bool _isLoading;
    _Bool _isUpdate;
    UIFont *_bodyFont;
    _HKMedicalIDData *_medicalIDData;
    HKOrganDonationRegistrant *_registrant;
    NSString *_completionButtonTitle;
    CDUnknownBlockType _registrationCompletionHandler;
    NSArray *_dataEntryItems;
    UIBarButtonItem *_nextButton;
}

@property (retain, nonatomic) NSArray *dataEntryItems;
@property (retain, nonatomic) HKOrganDonationRegistrant *registrant;
@property (retain, nonatomic) UIBarButtonItem *nextButton;
@property (retain, nonatomic) _HKMedicalIDData *medicalIDData;
@property (retain, nonatomic) NSString *completionButtonTitle;
@property (copy, nonatomic) CDUnknownBlockType registrationCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)cancelButtonTapped:(id)arg1;
- (id)_createTableHeaderView;
- (id)_createTableFooterView;
- (void)focusItemAtIndex:(long long)arg1;
- (void)dataEntryItemDonePressed:(id)arg1;
- (void)dataEntryItemPrevPressed:(id)arg1;
- (void)dataEntryItemNextPressed:(id)arg1;
- (void)updateButtonTapped:(id)arg1;
- (void)_loadRegistrantInformationIfAvailableAndSetupRegisterView;
- (void)_handleAppWillEnterForegroundNotification:(id)arg1;
- (void)nextButtonTapped:(id)arg1;
- (void)_setupRegisterViewWithRegistrant:(id)arg1 demographicsInformation:(id)arg2;
- (void)_toggleLoadingStatusIsLoading:(_Bool)arg1;
- (void)_toggleNextButtonEnabledState;
- (void)_reloadRegistrantInformationFromServer;
- (void)_setupRegisterViewWithDefaultDemographicsInformation;
- (void)_setupRegisterViewWithRegistrant:(id)arg1;
- (_Bool)_registrantIsUnderAge;
- (void)_handleResponse:(id)arg1 status:(long long)arg2;
- (void)organDonationRegistrantDidUpdateValue:(id)arg1;
- (void)organDonationConnectionManagerDidStoreCredential:(id)arg1;
- (void)organDonationConnectionManagerDidRemoveCredential:(id)arg1;
- (void)_headerTapped:(id)arg1;

@end

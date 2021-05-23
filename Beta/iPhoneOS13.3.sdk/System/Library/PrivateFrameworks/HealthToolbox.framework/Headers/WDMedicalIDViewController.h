/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <UIKit/UITableViewController.h>

@class HKMedicalIDViewController, HKNavigationController, NSString, SOSContactsManager, UIAlertController, UIScrollView, UIStackView, WDProfile, _HKMedicalIDData;

__attribute__((visibility("hidden")))
@interface WDMedicalIDViewController : UITableViewController

{
    _HKMedicalIDData *_medicalIDData;
    _Bool _medicalIDIsNew;
    UIScrollView *_introView;
    UIStackView *_introStackView;
    _Bool _loadingMedicalID;
    int _medicalIDChangedToken;
    HKNavigationController *_medicalIDEditor;
    _Bool _shouldShowConsolidationAlert;
    _Bool _shouldReloadMedicalIDData;
    HKMedicalIDViewController *_currentMedicalIDViewController;
    UIAlertController *_consolidationAlertController;
    SOSContactsManager *_sosContactsManager;
    WDProfile *_profile;
}

@property (weak, nonatomic) HKMedicalIDViewController *currentMedicalIDViewController;
@property (weak, nonatomic) UIAlertController *consolidationAlertController;
@property (retain, nonatomic) SOSContactsManager *sosContactsManager;
@property (retain, nonatomic) WDProfile *profile;
@property (nonatomic) _Bool shouldReloadMedicalIDData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)medicalIDViewControllerDidCancel:(id)arg1;
- (void)medicalIDViewControllerDidSave:(id)arg1;
- (void)medicalIDViewControllerDidDelete:(id)arg1;
- (void)medicalIDViewControllerDidAppear:(id)arg1;
- (void)applyChangeActivity:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;
- (id)uniqueUserActivityType;
- (void)_updateActivityForViewDidAppear;
- (void)_loadMedicalIDDataIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateNavigationbar;
- (void)_showContactsConsolidationAlert;
- (void)_assertViewStateWhenViewDidAppear;
- (void)_organDonationSignupButtonTapped:(id)arg1;
- (void)_handleFetchedMedicalIDData:(id)arg1;
- (void)_showMedicalIDView;
- (void)_consolidateSOSContactsWithMedicalIDContacts;
- (id)_createMedicalIDDataFromMeCardAndHealthKit;
- (void)_showMedicalIDEditor;
- (void)_createMedicalIDTapped:(id)arg1;
- (id)medicalIDViewControllerInEditMode:(_Bool)arg1;
- (void)_dismissMedicalIDEditor;
- (void)_pushAndSetCurrentMedicalIDViewController:(id)arg1;
- (void)_checkForEmergencyContactConsolidationNeeds;
- (void)_dismissMedicalIDView;

@end

/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewController.h>

@class HKEmergencyCardContactsTableItem, HKEmergencyCardGroupTableItem, HKEmergencyCardNameAndPictureTableItem, HKHealthStore, HKNavigationController, NSArray, NSString, _HKMedicalIDData;

@protocol HKMedicalIDViewControllerDelegate;

@interface HKMedicalIDViewController : UITableViewController

{
    NSArray *_presentableTableItems;
    NSArray *_footers;
    HKEmergencyCardGroupTableItem *_groupItem;
    HKEmergencyCardNameAndPictureTableItem *_nameAndPictureItem;
    HKEmergencyCardContactsTableItem *_contactsItem;
    long long _tableViewStyle;
    _Bool _inBuddy;
    NSArray *_localeItems;
    NSArray *_accumulatedNumberOfRowsForItems;
    int _medicalIDChangedToken;
    HKNavigationController *_medicalIDEditor;
    NSArray *_organDonationItems;
    _Bool _organDonationSignupAvailable;
    _Bool _allowsEditing;
    _Bool _showsDismissButton;
    _Bool _showsDeleteButton;
    _Bool _modernAppearance;
    _Bool _shouldShowHints;
    _Bool _inEditMode;
    _HKMedicalIDData *_medicalID;
    HKHealthStore *_healthStore;
    id <HKMedicalIDViewControllerDelegate> _delegate;
    NSArray *_tableItems;
}

@property (retain, nonatomic) NSArray *tableItems;
@property (nonatomic) _Bool inEditMode;
@property (retain, nonatomic) _HKMedicalIDData *medicalID;
@property (nonatomic) _Bool allowsEditing;
@property (nonatomic) _Bool showsDismissButton;
@property (nonatomic) _Bool showsDeleteButton;
@property (nonatomic) _Bool modernAppearance;
@property (nonatomic) _Bool shouldShowHints;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (weak, nonatomic) id <HKMedicalIDViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isSupportedOnThisDevice;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)_editable;
- (_Bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (void)localeDidChange:(id)arg1;
- (void)medicalIDViewControllerDidCancel:(id)arg1;
- (void)medicalIDViewControllerDidSave:(id)arg1;
- (void)medicalIDViewControllerDidDelete:(id)arg1;
- (id)initInEditMode:(_Bool)arg1;
- (void)_doneTapped:(id)arg1;
- (void)_contactStoreDidChange:(id)arg1;
- (void)_nextButtonTapped:(id)arg1;
- (void)editButtonTapped:(id)arg1;
- (id)initInEditMode:(_Bool)arg1 inBuddy:(_Bool)arg2 organDonationSignupAvailable:(_Bool)arg3;
- (void)_dismissMedicalIDEditor;
- (void)_fetchDemographicInformation;
- (void)timeZoneDidChange:(id)arg1;
- (void)updateNavigationBar;
- (void)_buildTableItems;
- (void)_cancelEditingTapped:(id)arg1;
- (void)_doneEditingTapped:(id)arg1;
- (void)_reloadTableWithMedicalIDData:(id)arg1;
- (void)_forceDisableBiometricIfDeviceLocked;
- (void)_updateMedicalIDNameWithDemographicsInformation:(id)arg1;
- (void)_buildPresentableTableItems;
- (void)_refreshEmergencyContactsAndReload:(_Bool)arg1;
- (_Bool)_shouldShowOrganDonation;
- (void)editMedicalID:(id)arg1;
- (void)editOrganDonation:(id)arg1;
- (void)_showMedicalIDPreviewAsNext;
- (void)_buildEditModeTableItems;
- (void)_buildViewModeTableItems;
- (id)_newViewForFooterInSection:(long long)arg1;
- (long long)_preferredOrganDonationOrganization;
- (id)_tableItemForIndexPath:(id)arg1;
- (long long)_rowIndexForTableItem:(id)arg1 atIndexPath:(id)arg2;
- (void)_adjustTableViewContentOffsetForVisibleView:(id)arg1 visibleRect:(struct CGRect)arg2 animated:(_Bool)arg3;
- (void)deletionTableItemDidTapDelete:(id)arg1;
- (void)tableItem:(id)arg1 heightDidChangeForRowIndex:(long long)arg2 keepRectVisible:(struct CGRect)arg3 inView:(id)arg4;
- (void)tableItemDidBeginEditing:(id)arg1 keepRectVisible:(struct CGRect)arg2 inView:(id)arg3;
- (void)tableItemDidChangeSelection:(id)arg1 keepRectVisible:(struct CGRect)arg2 inView:(id)arg3;
- (void)updateEmergencyContactTableItem;

@end

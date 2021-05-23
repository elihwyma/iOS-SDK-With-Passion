/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STPINListViewController.h>

@class CNUIFamilyMemberContactsController, NSString, PSSpecifier, STCommunicationLimits;

__attribute__((visibility("hidden")))
@interface STCommunicationLimitsListController : STPINListViewController

{
    _Bool _syncingiCloudContacts;
    PSSpecifier *_duringScreenTimeSpecifier;
    PSSpecifier *_duringDowntimeSpecifier;
    PSSpecifier *_manageContactsGroupSpecifier;
    PSSpecifier *_manageContactsSpecifier;
    PSSpecifier *_iCloudContactsSpecifier;
    STCommunicationLimits *_communicationLimits;
    CNUIFamilyMemberContactsController *_familyMemberContactsController;
}

@property (retain) PSSpecifier *duringScreenTimeSpecifier;
@property (retain) PSSpecifier *duringDowntimeSpecifier;
@property (retain) PSSpecifier *manageContactsGroupSpecifier;
@property (retain) PSSpecifier *manageContactsSpecifier;
@property (retain) PSSpecifier *iCloudContactsSpecifier;
@property (retain) STCommunicationLimits *communicationLimits;
@property (retain) CNUIFamilyMemberContactsController *familyMemberContactsController;
@property _Bool syncingiCloudContacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLoad;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)presentViewController:(id)arg1;
- (void)setCoordinator:(id)arg1;
- (id)specifiers;
- (void)familyMemberContactsDidChange;
- (void)dismissPresentedViewController:(id)arg1;
- (void)_communicationLimitsDidChangeFrom:(id)arg1 to:(id)arg2;
- (id)initWithRootViewModelCoordinator:(id)arg1;
- (void)_indicateiCloudContactsSyncingStatus;
- (void)_startSyncingiCloudContacts;
- (id)_manageContactsGroupFooterText;
- (void)_setManageContacts:(id)arg1 specifier:(id)arg2;
- (id)_manageContacts:(id)arg1;
- (id)_statusPendingDetailText:(id)arg1;
- (id)_totaliCloudContactsDetailText:(id)arg1;
- (void)_setAllowContactEditing:(id)arg1 specifier:(id)arg2;
- (id)_allowContactEditing:(id)arg1;
- (void)_didCancelSyncingiCloudContacts;
- (void)_updateAllowContactEditing:(id)arg1;
- (void)_didFinishSyncingiCloudContacts;
- (void)_didStartSyncingiCloudContacts;
- (void)_updateManageContactsGroupFooterView;

@end

/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Preferences/PSListController.h>

@class CNUIFamilyMemberWhitelistedContactsController, NSMutableArray, NSString, PSSpecifier, STCommunicationLimits;

__attribute__((visibility("hidden")))
@interface STCommunicationLimitsDowntimeDetailListController : PSListController

{
    _Bool _syncingWhitelistedContacts;
    PSSpecifier *_allowedCommunicationGroupSpecifier;
    PSSpecifier *_allowEveryoneSpecifier;
    PSSpecifier *_allowContactsOnlySpecifier;
    PSSpecifier *_allowContactsWithIntroductionsSpecifier;
    PSSpecifier *_allowSpecificContactsSpecifier;
    PSSpecifier *_allowedContactsGroupSpecifier;
    PSSpecifier *_addContactsSpecifier;
    NSMutableArray *_allowedContactsSpecifiers;
    STCommunicationLimits *_communicationLimits;
    CNUIFamilyMemberWhitelistedContactsController *_whitelistedContactsController;
}

@property (retain) PSSpecifier *allowedCommunicationGroupSpecifier;
@property (retain) PSSpecifier *allowEveryoneSpecifier;
@property (retain) PSSpecifier *allowContactsOnlySpecifier;
@property (retain) PSSpecifier *allowContactsWithIntroductionsSpecifier;
@property (retain) PSSpecifier *allowSpecificContactsSpecifier;
@property (retain) PSSpecifier *allowedContactsGroupSpecifier;
@property (retain) PSSpecifier *addContactsSpecifier;
@property (retain) NSMutableArray *allowedContactsSpecifiers;
@property (retain) STCommunicationLimits *communicationLimits;
@property (retain) CNUIFamilyMemberWhitelistedContactsController *whitelistedContactsController;
@property _Bool syncingWhitelistedContacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)willResignActive;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)presentViewController:(id)arg1;
- (id)specifiers;
- (void)familyMemberContactsDidChange;
- (void)dismissPresentedViewController:(id)arg1;
- (void)_selectLeastRestrictiveOptionIfNecessary;
- (void)_didFinishEditingCommunicationLimit;
- (long long)_downtimeCommunicationLimitForSpecifier:(id)arg1;
- (id)_allowedContactsSpecifiers;
- (id)_allowedContactDetailLabelText:(id)arg1;
- (void)_didFinishSyncingWhitelistedContacts;
- (void)_updateAllowedCommunicationGroupFooterText:(_Bool)arg1;
- (void)_startSyncingWhitelistedContacts;

@end

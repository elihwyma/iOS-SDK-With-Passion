/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <Preferences/PSListController.h>

@class CNFRegController, NSString;

@interface CNFRegListController : PSListController

{
    CDUnknownBlockType _appearBlock;
    _Bool _appeared;
    _Bool _showingChildController;
    _Bool _shouldRerootPreferences;
    CNFRegController *_regController;
}

@property (copy, nonatomic) CDUnknownBlockType appearBlock;
@property (nonatomic) _Bool showingChildController;
@property (nonatomic) _Bool shouldRerootPreferences;
@property (nonatomic, readonly) _Bool appeared;
@property (nonatomic, readonly) long long currentAppearanceStyle;
@property (retain, nonatomic) CNFRegController *regController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)handleURL:(id)arg1;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)applicationDidResume;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)_updateTitle;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidBecomeActive;
- (void)systemApplicationWillResignActive;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationDidResume;
- (id)specifiers;
- (void)setSpecifier:(id)arg1;
- (_Bool)shouldSelectResponderOnAppearance;
- (id)initWithParentController:(id)arg1;
- (id)logName;
- (id)customTitle;
- (void)changePasswordControllerDidCancel:(id)arg1;
- (void)changePasswordControllerDidFinish:(id)arg1 withAppleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)authorizationController:(id)arg1 authorizedAccount:(_Bool)arg2;
- (id)initWithRegController:(id)arg1;
- (id)_existingLabelForSpecifier:(id)arg1 header:(_Bool)arg2;
- (id)specifierList;
- (void)_performAppearBlock;
- (_Bool)wantsWiFiChooser;
- (_Bool)_handleURLDictionary:(id)arg1;
- (void)_updateExistingLabelForSpecifier:(id)arg1 header:(_Bool)arg2;
- (id)_existingLabelForSection:(long long)arg1 header:(_Bool)arg2;
- (void)_updateTableLabel:(id)arg1 withTableView:(id)arg2 isTopMostHeader:(_Bool)arg3;
- (void)removeAllHandlers;
- (_Bool)_showWiFiAlertIfNecessary;
- (void)_setSpecifierEnabled:(id)arg1 enabled:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_setFieldsEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setLabel:(id)arg1 forSpecifier:(id)arg2 header:(_Bool)arg3;
- (void)_setupEventHandlers;

@end

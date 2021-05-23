/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <CommunicationsSetupUI/CNFRegFirstRunController.h>

@class NSArray, NSString, NSTimer, PSSpecifier;

@interface CNFRegEmailController : CNFRegFirstRunController

{
    PSSpecifier *_emailSpecifier;
    PSSpecifier *_actionGroupSpecifier;
    PSSpecifier *_currentActionSpecifier;
    NSArray *_checkMailSpecifiers;
    NSTimer *_validationTimeoutTimer;
    NSString *_pendingAlias;
    _Bool _validating;
}

@property (copy, nonatomic) NSString *pendingAlias;

- (void)dealloc;
- (id)bundle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)timeoutDuration;
- (id)titleString;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationWillEnterForeground;
- (void)_updateUI;
- (id)logName;
- (id)selectedAliases;
- (id)specifierList;
- (void)_setFieldsEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setupEventHandlers;
- (void)_stopValidationModeAnimated:(_Bool)arg1;
- (void)_buildSpecifierCache:(id)arg1;
- (id)aliasSpecifiers;
- (void)setAliasSelected:(id)arg1;
- (void)_returnKeyPressed;
- (id)_rightButtonItem;
- (void)_handleValidationModeCancelled;
- (void)_updateControllerState;
- (void)_finishValidation;
- (void)_failValidationWithError:(id)arg1;
- (void)stopValidationTimeoutTimer;
- (_Bool)shouldShowAllVettedAliases;
- (_Bool)_phoneNumberInAliases:(id)arg1;
- (id)_createSpecifierForAlias:(id)arg1;
- (void)nextTapped;
- (void)_showCheckMailButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)startValidationTimeoutTimer;
- (id)emailTextField;
- (_Bool)emailFieldIsEmpty;
- (void)_refreshEnabledStateOfAliasSpecifiers;
- (void)validationTimeout:(id)arg1;
- (void)_buildEmailSpecifierCache:(id)arg1;
- (void)_buildCheckMailSpecifierCache:(id)arg1;
- (void)_buildActionGroupSpecifierCache:(id)arg1;
- (_Bool)showActionSpecifier:(id)arg1 animated:(_Bool)arg2;
- (_Bool)onlyLocalPhoneNumberSentinelAliasIsSelected;
- (void)checkMailTapped:(id)arg1;
- (void)emailFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2;
- (id)pendingAliasForSpecifier:(id)arg1;
- (void)setPendingAlias:(id)arg1 forSpecifier:(id)arg2;

@end

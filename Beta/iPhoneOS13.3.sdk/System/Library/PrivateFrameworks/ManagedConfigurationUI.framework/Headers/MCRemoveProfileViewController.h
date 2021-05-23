/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <ManagedConfigurationUI/MCInstallProfileViewController.h>

@class MCProfile, NSString, UIAlertView, UITextField;

__attribute__((visibility("hidden")))
@interface MCRemoveProfileViewController : MCInstallProfileViewController

{
    _Bool _profileWantsToReEnroll;
    _Bool _actionButtonHidden;
    UIAlertView *_activeAlert;
    CDStruct_8422b130 _configurationFlags;
    MCProfile *_updatingProfile;
    UITextField *_passwordField;
}

@property (retain, nonatomic) MCProfile *updatingProfile;
@property (retain, nonatomic) UITextField *passwordField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithProfile:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (void)setInstallState:(int)arg1 animated:(_Bool)arg2;
- (void)_cancelActiveAlertController:(_Bool)arg1;
- (void)updateTitleForProfileInstallationState:(int)arg1;
- (void)updateBarButtonItemsForProfileInstallationState:(int)arg1 animated:(_Bool)arg2;
- (void)_profileRemovalDidFinish;
- (_Bool)_isProfileInstalled;
- (void)profileViewControllerDidSelectRemoveProfile:(id)arg1;
- (void)profileViewControllerDidSelectUpdateProfile:(id)arg1;
- (_Bool)_signatureForProfile:(id)arg1 matchesProfileB:(id)arg2;
- (void)_profileListChanged:(id)arg1;
- (void)_removeProfile;
- (void)_updateProfile;
- (void)_showRemovalWarningAfterPINVerification;
- (void)_showLeaveRemoteManagementAlert;
- (void)_showRemovalWarningAlert;
- (void)_showRemovalWarningActionSheet;
- (void)_performReEnroll;
- (void)_performReEnrollAfterPINVerification;
- (void)_showWrongRemovalPasswordAlert;
- (void)_showEraseDeviceAlert;
- (void)_leaveRemoteManagementAndErase;
- (void)_resetWithMode:(int)arg1;
- (id)_mdmProfileRemovalAlertBody;
- (void)_clearCachedTableCells;
- (void)_cancelActiveAlert:(_Bool)arg1;

@end

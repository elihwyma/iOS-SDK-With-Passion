/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesUI/ICSharedPasswordUtilities.h>

@class NSString, UIAlertController;

@interface ICPasswordUtilities : ICSharedPasswordUtilities

{
    _Bool _authenticationInProgress;
    UIAlertController *_displayedAlertController;
    NSString *_divergedAccountPassword;
}

@property (nonatomic) _Bool authenticationInProgress;
@property (weak, nonatomic) UIAlertController *displayedAlertController;
@property (retain, nonatomic) NSString *divergedAccountPassword;

+ (id)sharedInstance;
+ (_Bool)biometricIDIsEnrolled;
+ (_Bool)deviceSupportsTouchID;
+ (_Bool)deviceSupportsFaceID;
+ (void)showFirstTimePasswordProtectNoteAlertForDisplayWindow:(id)arg1;
+ (_Bool)faceIDIsEnrolled;
+ (_Bool)faceIDAccessAllowedViaTCC;
+ (_Bool)touchIDIsEnrolled;
+ (_Bool)faceIDEnabledForSharedPassword;
+ (_Bool)touchIDEnabledForSharedPassword;
+ (void)setTouchIDEnabledForSharedPassword:(_Bool)arg1;
+ (void)setFaceIDEnabledForSharedPassword:(_Bool)arg1;
+ (unsigned long long)faceIDAccess;
+ (void)authenticateForMovingNotes:(id)arg1 toNoteContainer:(id)arg2 displayWindow:(id)arg3 authenticateFailureHandler:(CDUnknownBlockType)arg4 movingBlock:(CDUnknownBlockType)arg5;
+ (void)requestAllowFaceIDIfRequired:(CDUnknownBlockType)arg1;
+ (_Bool)biometricIDEnabledForSharedPassword;
+ (id)faceIDFailurePrompt;
+ (_Bool)deviceHasPasscode;
+ (void)authenticateiCloudPasswordFromRootViewController:(id)arg1 account:(id)arg2 confirmButtonTitle:(id)arg3 reason:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (_Bool)authenticateDevicePasscodeIfNecessaryWithReason:(id)arg1;
+ (struct UIImage *)imageForCurrentDecryptedStatusForNote:(id)arg1;
+ (_Bool)biometricIDHardwareIsAvailable;
+ (void)warnUserCannotPasswordProtectNoteDueToUnsupportedAttachmentsInViewController:(id)arg1;
+ (void)warnUserCannotPasswordProtectNoteDueToSharedNoteInViewController:(id)arg1;
+ (void)warnUserCannotPasswordProtectDueToManagedAppleIDInViewController:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)showPasswordSetUpSheetForAccount:(id)arg1 displayWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)showPasswordEntrySheetWithIntent:(unsigned long long)arg1 note:(id)arg2 displayWindow:(id)arg3 failedAttemptHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)authenticateForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticateUsingAlternateMethodForDeletingNotes:(id)arg1 displayWindow:(struct UIWindow *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticateIfNecessaryForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticatePasswordForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)keychainContainsValidItemForAccount:(id)arg1;
- (_Bool)keychainContainsValidItemForNote:(id)arg1;
- (void)authenticateWithBiometricIDWithReason:(id)arg1 intent:(unsigned long long)arg2 note:(id)arg3 displayWindow:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)authenticatePasswordWithIntent:(unsigned long long)arg1 note:(id)arg2 displayWindow:(id)arg3 failedAttemptHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_authenticatePasswordWithIntent:(unsigned long long)arg1 note:(id)arg2 incorrectAttempts:(long long)arg3 passwordDiverged:(_Bool)arg4 wrongAccountName:(id)arg5 displayWindow:(id)arg6 failedAttemptHandler:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)addTitleAndMessageToAlert:(id)arg1 intent:(unsigned long long)arg2 note:(id)arg3 incorrectAttempts:(long long)arg4 passwordDiverged:(_Bool)arg5 wrongAccountName:(id)arg6;
- (void)accessibilityAnnounceAuthSuccessForIntent:(unsigned long long)arg1 withNote:(id)arg2;
- (void)showUpdateDivergedPasswordForAccountPassword:(id)arg1 oldPassword:(id)arg2 account:(id)arg3 displayWindow:(id)arg4;
- (_Bool)_keychainContainsValidItemForSyncingObject:(id)arg1;
- (void)authenticateWithBiometricIDForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_authenticatePasswordForDeletingNotes:(id)arg1 incorrectAttempts:(long long)arg2 displayWindow:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)showChangePasswordDialogueFromDisplayWindow:(id)arg1 account:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

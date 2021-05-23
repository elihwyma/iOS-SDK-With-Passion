/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Preferences/PSDetailController.h>

@class NSDictionary, NSNumber, NSString, UIBarButtonItem;

@protocol DevicePINControllerDelegate;

@interface DevicePINController : PSDetailController

{
    int _mode;
    int _substate;
    NSString *_oldPassword;
    NSString *_lastEntry;
    _Bool _success;
    id _pinDelegate;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_nextButton;
    UIBarButtonItem *_doneButton;
    NSString *_error1;
    NSString *_error2;
    _Bool _hasBeenDismissed;
    long long _sepOnceToken;
    NSDictionary *_sepLockInfo;
    _Bool _useSEPLockInfo;
    NSNumber *_requiresKeyboard;
    NSNumber *_pinLength;
    NSNumber *_simplePIN;
    NSNumber *_numericPIN;
    _Bool _hidesNavigationButtons;
    _Bool _hidesCancelButton;
    _Bool _shouldDismissWhenDone;
    _Bool _allowOptionsButton;
    NSString *_doneButtonTitle;
    NSString *_passcodeOptionsTitle;
    CDUnknownBlockType _passcodeOptionsHandler;
}

@property (copy, nonatomic) NSString *passcodeOptionsTitle;
@property (copy, nonatomic) CDUnknownBlockType passcodeOptionsHandler;
@property (weak, nonatomic) id <DevicePINControllerDelegate> pinDelegate;
@property (nonatomic) _Bool hidesNavigationButtons;
@property (nonatomic) _Bool hidesCancelButton;
@property (nonatomic) _Bool shouldDismissWhenDone;
@property (copy, nonatomic) NSString *doneButtonTitle;
@property (nonatomic) _Bool requiresKeyboard;
@property (nonatomic) int pinLength;
@property (nonatomic) _Bool simplePIN;
@property (nonatomic, getter=isNumericPIN) _Bool numericPIN;
@property (nonatomic) _Bool allowOptionsButton;

+ (_Bool)settingEnabled;

- (id)init;
- (void)dealloc;
- (void)setMode:(int)arg1;
- (void)suspend;
- (id)title;
- (int)mode;
- (_Bool)isBlocked;
- (_Bool)success;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_dismiss;
- (void)setSuccess:(_Bool)arg1;
- (void)setSpecifier:(id)arg1;
- (void)willUnlock;
- (void)setPane:(id)arg1;
- (_Bool)useProgressiveDelays;
- (void)_rereadBlockedState;
- (void)_updateUI;
- (struct __CFString *)defaultsID;
- (struct CGSize)overallContentSizeForViewInPopover;
- (_Bool)validatePIN:(id)arg1;
- (id)_createAndShowAnimatedNavBarSpinner;
- (_Bool)isCreatingPasscode;
- (int)_getScreenType;
- (int)_simplePasscodeType;
- (struct __CFString *)failedAttemptsKey;
- (struct __CFString *)blockTimeIntervalKey;
- (struct __CFString *)blockedStateKey;
- (id)_sepLockInfo;
- (_Bool)_useSEPLockInfo;
- (void)_invalidateSEPLockInfo;
- (double)blockedTimeRemaining;
- (double)unblockTime;
- (long long)numberOfFailedAttempts;
- (void)_setNumberOfFailedAttempts:(long long)arg1;
- (double)_secondsToBlockForFailedAttempts:(long long)arg1;
- (void)_setUnblockTime:(double)arg1;
- (void)_clearBlockedState;
- (void)_adjustUnblockTime;
- (id)stringsBundle;
- (id)stringsTable;
- (void)_showFailedAttempts;
- (void)_updateErrorTextAndFailureCount:(_Bool)arg1;
- (void)cancelButtonTapped;
- (_Bool)showSimplePINCancelButtonOnLeft;
- (void)adjustButtonsForPasswordLength:(unsigned long long)arg1;
- (id)pinPane;
- (_Bool)_shouldShowOptionsButton;
- (void)_updatePINButtons;
- (_Bool)pinIsAcceptable:(id)arg1 outError:(id *)arg2;
- (void)setLastEntry:(id)arg1;
- (void)_slidePasscodeFieldLeft:(_Bool)arg1;
- (void)_showUnacceptablePINError:(id)arg1 password:(id)arg2;
- (_Bool)completedInputIsValid:(id)arg1;
- (void)performActionAfterPINSet;
- (_Bool)_asyncSetPinCompatible;
- (void)setPIN:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setPIN:(id)arg1;
- (void)_showPINConfirmationError;
- (_Bool)attemptValidationWithPIN:(id)arg1;
- (void)setOldPassword:(id)arg1;
- (void)_removePinWithOldPassword:(id)arg1;
- (void)performActionAfterPINEntry;
- (void)_preflightPasswordForWeakness:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)performActionAfterPINRemove;
- (_Bool)_shouldCheckForWeakness;
- (id)passcodeOptionsAlertController;
- (void)_setPINPaneToSimple:(_Bool)arg1 simpleLength:(int)arg2 numeric:(_Bool)arg3 requiresKeyboard:(int)arg4;
- (void)showPasscodeOptions:(id)arg1;
- (void)pinEntered:(id)arg1;
- (id)pinInstructionsPrompt;
- (id)pinInstructionsPromptFont;

@end

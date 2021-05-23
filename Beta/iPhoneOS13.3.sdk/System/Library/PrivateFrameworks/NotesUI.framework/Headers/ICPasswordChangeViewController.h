/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIViewController.h>

@class ICAccount, ICLearnMoreTextView, ICPasswordUtilities, ICScrollViewKeyboardResizer, NSArray, NSLayoutConstraint, NSString, UIBarButtonItem, UILabel, UIScrollView, UISwitch, UITextField, UIView;

@interface ICPasswordChangeViewController : UIViewController

{
    _Bool _isSetupForChangePassword;
    _Bool _isInSettings;
    _Bool _isSettingInitialPassword;
    _Bool _didAttemptToSubmitWithoutHint;
    _Bool _usingLargerAXSizes;
    ICAccount *_account;
    NSArray *_textBackgroundViews;
    UIView *_headerBackground;
    ICScrollViewKeyboardResizer *_scrollViewResizer;
    UIScrollView *_scrollView;
    ICPasswordUtilities *_passwordUtilities;
    UILabel *_headerLabel;
    UILabel *_oldPasswordLabel;
    UILabel *_passwordLabel;
    UILabel *_verifyLabel;
    UILabel *_hintLabel;
    UILabel *_warningLabel;
    ICLearnMoreTextView *_disclaimerLabel;
    UITextField *_oldPasswordTextField;
    UITextField *_passwordTextField;
    UITextField *_verifyTextField;
    UITextField *_hintTextField;
    NSArray *_orderedTextFields;
    UILabel *_useBiometricIDLabel;
    UISwitch *_useBiometricIDSwitch;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_cancelButton;
    NSLayoutConstraint *_oldPasswordHeightConstraint;
    NSLayoutConstraint *_disclaimerHeightConstraint;
    NSLayoutConstraint *_biometricIDZeroHeightConstraint;
    NSLayoutConstraint *_biometricIDTopConstraint;
    long long _incorrectPasswordAttempts;
    UIView *_biometricIDContainer;
    CDUnknownBlockType _completionHandler;
    NSArray *_defaultConstraints;
    NSArray *_alternateConstraintsForAXLargerTextSizes;
}

@property (retain, nonatomic) ICAccount *account;
@property (retain, nonatomic) NSArray *textBackgroundViews;
@property (weak, nonatomic) UIView *headerBackground;
@property (retain, nonatomic) ICScrollViewKeyboardResizer *scrollViewResizer;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) ICPasswordUtilities *passwordUtilities;
@property (weak, nonatomic) UILabel *headerLabel;
@property (weak, nonatomic) UILabel *oldPasswordLabel;
@property (weak, nonatomic) UILabel *passwordLabel;
@property (weak, nonatomic) UILabel *verifyLabel;
@property (weak, nonatomic) UILabel *hintLabel;
@property (weak, nonatomic) UILabel *warningLabel;
@property (weak, nonatomic) ICLearnMoreTextView *disclaimerLabel;
@property (weak, nonatomic) UITextField *oldPasswordTextField;
@property (weak, nonatomic) UITextField *passwordTextField;
@property (weak, nonatomic) UITextField *verifyTextField;
@property (weak, nonatomic) UITextField *hintTextField;
@property (retain, nonatomic) NSArray *orderedTextFields;
@property (weak, nonatomic) UILabel *useBiometricIDLabel;
@property (weak, nonatomic) UISwitch *useBiometricIDSwitch;
@property (weak, nonatomic) UIBarButtonItem *doneButton;
@property (weak, nonatomic) UIBarButtonItem *cancelButton;
@property (weak, nonatomic) NSLayoutConstraint *oldPasswordHeightConstraint;
@property (weak, nonatomic) NSLayoutConstraint *disclaimerHeightConstraint;
@property (weak, nonatomic) NSLayoutConstraint *biometricIDZeroHeightConstraint;
@property (weak, nonatomic) NSLayoutConstraint *biometricIDTopConstraint;
@property (nonatomic) _Bool isSetupForChangePassword;
@property (nonatomic) long long incorrectPasswordAttempts;
@property (weak, nonatomic) UIView *biometricIDContainer;
@property (nonatomic, readonly) _Bool passwordAndVerifyTextFieldsMatch;
@property (nonatomic) _Bool didAttemptToSubmitWithoutHint;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic) _Bool usingLargerAXSizes;
@property (retain, nonatomic) NSArray *defaultConstraints;
@property (retain, nonatomic) NSArray *alternateConstraintsForAXLargerTextSizes;
@property (nonatomic) _Bool isInSettings;
@property (nonatomic) _Bool isSettingInitialPassword;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)updateFonts;
- (void)contentSizeCategoryDidChange;
- (void)doneButtonPressed:(id)arg1;
- (_Bool)validateInput;
- (double)consumedBottomAreaForResizer:(id)arg1;
- (double)topInsetForResizer:(id)arg1;
- (id)keyboardResizerScrollView;
- (void)resetTextFields;
- (void)setUpNavigationBar;
- (id)disclaimerAttributedString;
- (void)showOldPasswordIsNotCorrectAlert;
- (void)showEnterAPasswordAlert;
- (void)showPasswordsDoNotMatchAlert;
- (void)dismissKeyboardIfNeeded;
- (void)showUnableToSetPasswordAlert;
- (void)showSimpleAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)setupAccessibility;
- (void)setUpForInitialPasswordWithAccount:(id)arg1;
- (void)setUpForChangePasswordWithAccount:(id)arg1;

@end

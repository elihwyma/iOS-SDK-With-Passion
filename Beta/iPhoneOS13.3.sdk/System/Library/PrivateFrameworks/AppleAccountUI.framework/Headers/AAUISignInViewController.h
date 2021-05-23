/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <UIKit/UIViewController.h>

#import <AppleAccountUI/Swift-Protocol.h>

@class AAUIBuddyView, AAUIHeaderView, NSArray, NSString, UILabel, UITableView, UITableViewCell, UITableViewHeaderFooterView, UMUserPersona, UMUserPersonaContext;

@protocol AAUISignInViewControllerDelegate;

@interface AAUISignInViewController : UIViewController <Swift>

{
    UITableView *_tableView;
    UITableViewCell *_usernameCell;
    UITableViewCell *_passwordCell;
    UITableViewHeaderFooterView *_tableHeaderView;
    AAUIHeaderView *_accountsHeaderView;
    UITableViewHeaderFooterView *_tableFooterView;
    NSArray *_compactConstraints;
    NSArray *_expandedConstraints;
    CDUnknownBlockType _passwordHandler;
    UMUserPersona *_originalPersona;
    UMUserPersonaContext *_originalPersonaContext;
    _Bool _shouldAnticipatePiggybacking;
    _Bool _allowsAccountCreation;
    _Bool _showServiceIcons;
    _Bool _canEditUsername;
    long long _akServiceType;
    id <AAUISignInViewControllerDelegate> _delegate;
    NSString *_username;
}

@property (retain, nonatomic) AAUIBuddyView *view;
@property (nonatomic, setter=_setShouldAnticipatePiggybacking:) _Bool _shouldAnticipatePiggybacking;
@property (nonatomic, setter=_setAkServiceType:) long long _akServiceType;
@property (weak, nonatomic) id <AAUISignInViewControllerDelegate> delegate;
@property (nonatomic) _Bool allowsAccountCreation;
@property (nonatomic) _Bool showServiceIcons;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UILabel *messageLabel;
@property (copy, nonatomic) NSString *username;
@property (nonatomic) _Bool canEditUsername;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)phoneNumberSupportedWithCompletion:(CDUnknownBlockType)arg1;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)_setEnabled:(_Bool)arg1;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)_cancelBarButtonItem;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)_tableView;
- (id)_tableHeaderView;
- (id)_tableFooterView;
- (void)_keyboardWillShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2;
- (_Bool)_hasValidCredentials;
- (void)_cancelPasswordDelegateIfNecessary;
- (void)context:(id)arg1 needsPasswordWithCompletion:(CDUnknownBlockType)arg2;
- (_Bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)sizeCategoryDidChange:(id)arg1;
- (id)authenticationContext;
- (void)_cancelButtonSelected:(id)arg1;
- (id)_passwordCell;
- (void)_textFieldDidChange:(id)arg1;
- (id)_nextBarButtonItem;
- (void)_updateConstraintsForTraitCollection:(id)arg1;
- (void)_beginObservingTextFieldDidChangeNotifications;
- (void)_beginObservingKeyboardWillShowNotifications;
- (void)_beginObservingSizeCategoryNotification;
- (id)_usernameCell;
- (void)_updateContentInsetWithHeight:(double)arg1;
- (void)_endObservingSizeCategoryNotification;
- (void)_endObservingTextFieldDidChangeNotifications;
- (void)_endObservingKeyboardWillShowNotifications;
- (id)_accountsHeaderView;
- (void)_nextButtonSelected:(id)arg1;
- (void)constrainView:(id)arg1 toFillHeaderFooterView:(id)arg2;
- (void)_actionButtonSelected:(id)arg1;
- (id)_stringForFooter;
- (_Bool)_showOnlyPassword;
- (_Bool)_isGreenTeaCapable;
- (void)_setUsernameCellWaiting:(_Bool)arg1;
- (void)_delegate_signInViewControllerDidCancel;
- (void)_attemptAuthentication;
- (void)_prewarmSignInFlowIfApplicable;
- (void)_presentForgotAppleIDPane;
- (void)_presentCreateAppleIDPane;
- (void)_attemptAuthenticationWithContext:(id)arg1;
- (_Bool)_isPasswordFieldVisible;
- (void)_repairCloudAccountWithAuthenticationResults:(id)arg1;
- (void)_delegate_signInViewControllerDidCompleteWithAuthenticationResults:(id)arg1;
- (id)_authorizationValueForAuthenticationResults:(id)arg1;
- (id)_passwordFieldIndexPath;
- (void)_setPasswordFieldHidden:(_Bool)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <AccountsUI/ACUIViewController.h>

@class NSArray, NSString, PSSpecifier, UIButton, UIView, VSCredentialEntryPicker, VSCredentialEntryViewModel, VSIdentityProviderLogoView, VSViewModel;

@protocol VSAuthenticationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSCredentialEntryViewController_iOS : ACUIViewController

{
    _Bool _cancellationAllowed;
    VSCredentialEntryViewModel *_viewModel;
    id <VSAuthenticationViewControllerDelegate> _delegate;
    VSIdentityProviderLogoView *_logoView;
    UIButton *_linkButton;
    NSArray *_buttons;
    UIView *_buttonView;
    NSArray *_fieldSpecifiers;
    double _keyboardHeight;
    id _textFieldTextDidChangeObserver;
    id _keyboardWillShowObserver;
    id _keyboardWillHideObserver;
    id _weakTarget;
    PSSpecifier *_pickerButtonSpecifier;
    PSSpecifier *_pickerSpecifier;
    VSCredentialEntryPicker *_picker;
}

@property (retain, nonatomic) VSIdentityProviderLogoView *logoView;
@property (retain, nonatomic) UIButton *linkButton;
@property (retain, nonatomic) NSArray *buttons;
@property (retain, nonatomic) UIView *buttonView;
@property (retain, nonatomic) NSArray *fieldSpecifiers;
@property (nonatomic) double keyboardHeight;
@property (weak, nonatomic) id textFieldTextDidChangeObserver;
@property (weak, nonatomic) id keyboardWillShowObserver;
@property (weak, nonatomic) id keyboardWillHideObserver;
@property (retain, nonatomic) id weakTarget;
@property (retain, nonatomic) PSSpecifier *pickerButtonSpecifier;
@property (retain, nonatomic) PSSpecifier *pickerSpecifier;
@property (retain, nonatomic) VSCredentialEntryPicker *picker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <VSAuthenticationViewControllerDelegate> delegate;
@property (nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed;
@property (nonatomic, readonly) VSViewModel *viewModel;
@property (nonatomic, readonly) struct CGSize preferredLogoSize;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)_linkURL;
- (void)cancelButtonTapped:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)_linkButtonTapped:(id)arg1;
- (void)doneButtonPressed:(id)arg1;
- (void)_presentError:(id)arg1;
- (void)_startObservingViewModel:(id)arg1;
- (void)_stopObservingViewModel:(id)arg1;
- (void)_startValidation;
- (long long)pickerViewCellInitialSelectedRow:(id)arg1;
- (id)pickerViewCell:(id)arg1 titleForRow:(long long)arg2;
- (long long)pickerViewCellNumberOfRows:(id)arg1;
- (void)pickerViewCell:(id)arg1 didSelectRow:(long long)arg2;
- (id)_specifierForTextField:(id)arg1;
- (void)_setText:(id)arg1 forSpecifier:(id)arg2;
- (void)_updateLinkButtonLayout;
- (id)_textFieldForSpecifier:(id)arg1;
- (id)_credentialEntryFieldForSpecifier:(id)arg1;
- (id)_textForSpecifier:(id)arg1;
- (id)_createSpecifierForField:(id)arg1;
- (id)pickerTitle;
- (void)pickerButtonSelected;
- (void)_jsButtonTapped:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <AuthKitUI/AKAuthorizationSubPane.h>

@class AKAuthorizationButton, AKAuthorizationPaneContext, LAUIAuthenticationView, NSObject, NSString, UILabel, UIStackView, UIView;

@protocol AKAuthorizationSubPaneConfirmButtonDelegate, OS_dispatch_group;

@interface AKAuthorizationSubPaneConfirmButton : AKAuthorizationSubPane

{
    CDUnknownBlockType _processingStateCompletionHandler;
    NSObject<OS_dispatch_group> *_processingStateGroup;
    _Bool _hasTouchIDOnly;
    _Bool _canPerformBiometricValidation;
    NSString *_bioTextForInactiveState;
    AKAuthorizationButton *_authorizationButton;
    id <AKAuthorizationSubPaneConfirmButtonDelegate> _delegate;
    AKAuthorizationPaneContext *_context;
    UIStackView *_mainStackView;
    UIView *_authorizationButtonContainer;
    UILabel *_bioLabel;
    LAUIAuthenticationView *_bioView;
}

@property (retain, nonatomic) AKAuthorizationPaneContext *context;
@property (retain, nonatomic) UIStackView *mainStackView;
@property (nonatomic, readonly) UIView *authorizationButtonContainer;
@property _Bool hasTouchIDOnly;
@property _Bool canPerformBiometricValidation;
@property (retain, nonatomic) UILabel *bioLabel;
@property (retain, nonatomic) LAUIAuthenticationView *bioView;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *bioTextForInactiveState;
@property (nonatomic, readonly) AKAuthorizationButton *authorizationButton;
@property (weak, nonatomic) id <AKAuthorizationSubPaneConfirmButtonDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_createMainStackView;

- (id)init;
- (void)enableAuthorizationCapability:(_Bool)arg1;
- (void)setUpButtonToPaneContext:(id)arg1;
- (void)bioAuthFailWithAlertString:(id)arg1;
- (void)showAlertAndContinueWithPassword:(_Bool)arg1;
- (void)finishProcessingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)invalidateProcessingState;
- (void)addToStackView:(id)arg1 context:(id)arg2;
- (void)addToConstraints:(id)arg1 context:(id)arg2;
- (id)initWithButtonText:(id)arg1;
- (void)_authorizationButtonSkipBioSelected:(id)arg1;
- (id)_passwordButtonTitle;
- (void)_authorizationButtonWithAccountPasswordSelected:(id)arg1;
- (void)_authorizationButtonBioSelected:(id)arg1;
- (id)_passcodeButtonTitle;
- (void)_authorizationWithPasscodeButtonSelected:(id)arg1;
- (_Bool)_delegate_validateReadyForAuthorization;
- (void)_switchToBioView:(_Bool)arg1 withEnabled:(_Bool)arg2 showAlert:(_Bool)arg3 alertString:(id)arg4;
- (void)_performPasscodeValidations:(CDUnknownBlockType)arg1;
- (void)_enableLAUIAuthMechanism;
- (void)_disableBioView;
- (void)_addArrangedSpaceToMainStackView:(double)arg1;
- (void)_setupAlertImageWithConstraints:(id)arg1;
- (void)_setupLabelWithTitle:(id)arg1 withConstraints:(id)arg2 animated:(_Bool)arg3;
- (void)_setupBioButtonWithConstraints:(id)arg1;
- (id)_spaceWithConstant:(double)arg1;
- (void)_updateLabelWithTitle:(id)arg1;
- (void)_switchToPasscode;
- (void)_enterProcessingStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_hasTouchIDOnly;
- (void)_waitForTimeInterval:(double)arg1 withGroup:(id)arg2;
- (void)_setGlyphViewGestureRecognizerEnabled:(_Bool)arg1;
- (void)authenticationResult:(id)arg1 error:(id)arg2 context:(id)arg3;
- (void)processBiometricMatchWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

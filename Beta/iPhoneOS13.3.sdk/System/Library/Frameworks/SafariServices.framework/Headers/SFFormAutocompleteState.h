/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, SFFormAutoFillFrameHandle, UIView, WBSFormAutoFillMetadataCorrector, WBSFormControlMetadata, WBSFormMetadata, WBSMultiRoundAutoFillManager, _ASPasswordCredentialAuthenticationViewController, _SFFormAutoFillController, _SFFormAutoFillInputSession, _SFFormDataController;

__attribute__((visibility("hidden")))
@interface SFFormAutocompleteState : NSObject

{
    long long _action;
    _SFFormAutoFillController *_autoFillController;
    _SFFormDataController *_dataController;
    UIView *_emptyInputView;
    WBSFormMetadata *_formMetadata;
    unsigned long long _formType;
    NSDictionary *_formValues;
    SFFormAutoFillFrameHandle *_frame;
    _Bool _gatheringFormValues;
    _Bool _hasNotedThatTextDidChangeInPasswordField;
    _SFFormAutoFillInputSession *_inputSession;
    WBSMultiRoundAutoFillManager *_multiRoundAutoFillManager;
    NSString *_prefixForSuggestions;
    WBSFormControlMetadata *_textFieldMetadata;
    NSArray *_cachedCredentialMatches;
    NSArray *_cachedRelatedCredentialMatches;
    CDUnknownBlockType _credentialMatchesCompletionHandler;
    _Bool _fetchingLoginCredentialSuggestions;
    _Bool _invalidated;
    _Bool _hasDeterminedIfURLIsAllowedByWhiteList;
    _Bool _URLIsAllowedByWhiteList;
    CDUnknownBlockType _displayOtherContactsCompletionHandler;
    CDUnknownBlockType _customAutoFillContactCompletionHandler;
    CDUnknownBlockType _creditCardCaptureCompletionHandler;
    WBSFormAutoFillMetadataCorrector *_metadataCorrector;
    NSArray *_cachedExternalCredentialIdentities;
    _ASPasswordCredentialAuthenticationViewController *_externalCredentialViewController;
    CDUnknownBlockType _externalCredentialListCompletionHandler;
    _Bool _submitExternalCredential;
}

@property (nonatomic, readonly) long long action;
@property (nonatomic, readonly) _SFFormAutoFillInputSession *inputSession;
@property (nonatomic, readonly) _Bool shouldOfferToAutoFillCreditCardData;
@property (nonatomic, readonly) NSString *titleOfAutoFillButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)_getMatchesFromFormProtectionSpace:(id)arg1 matchesFromOtherProtectionSpaces:(id)arg2 withFormURL:(id)arg3 credentialMatches:(id)arg4 lastGeneratedPassword:(id)arg5 currentUser:(id)arg6 currentPassword:(id)arg7 forUserNamesOnly:(_Bool)arg8;
+ (_Bool)_shouldSaveCredentialsInProtectionSpace:(id)arg1;

- (void)dealloc;
- (void)invalidate;
- (void)_updateAutoFillButton;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (id)_viewControllerToPresentFrom;
- (void)creditCardCaptureViewControllerDidCancel:(id)arg1;
- (void)creditCardCaptureViewController:(id)arg1 didCaptureCreditCard:(id)arg2;
- (void)autoFill;
- (void)showAllPasswordsButtonTapped;
- (void)updateSuggestions;
- (id)initWithFrame:(id)arg1 form:(id)arg2 textField:(id)arg3 inputSession:(id)arg4 autoFillController:(id)arg5;
- (void)getTextSuggestionForStreamlinedAutoFillWithCredentialIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)textDidChangeInFrame:(id)arg1 form:(id)arg2 textField:(id)arg3;
- (void)updateCachedFormMetadataAfterFilling:(id)arg1;
- (void)credentialListViewController:(id)arg1 didFinishWithCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentUIForPasswordCredentialAuthenticationViewController:(id)arg1;
- (void)passwordCredentialAuthenticationViewController:(id)arg1 didFinishWithCredential:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_updateSuggestions:(unsigned long long)arg1;
- (_Bool)_shouldShowPasswordOptions;
- (void)_suggestLoginCredentialsShowingQuickTypeKey:(_Bool)arg1;
- (_Bool)_shouldOfferCreditCardDataAfterUserHasFilledCreditCardData:(id)arg1;
- (void)_showCreditCardDataSuggestionsAfterUserHasFilledCreditCardData;
- (_Bool)_canAutoFillCreditCardData;
- (void)_fillCreditCardDataAfterAuthenticationIfNeeded:(id)arg1;
- (id)_displayTextForCreditCardNumber:(id)arg1;
- (void)_updateCreditCardSuggestionsWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)_suggestUsernamesForRegistrationIfPossible:(unsigned long long)arg1;
- (void)_gatherAndShowAddressBookAutoFillSuggestionsWithCorrections;
- (void)_gatherAndShowAddressBookAutoFillSuggestions;
- (id)_correctedFormMetadata:(id)arg1;
- (id)_bestTextFieldMetadataForMetadata:(id)arg1;
- (void)_textDidChangeInForm:(id)arg1 textField:(id)arg2;
- (void)_setUpMultiRoundAutoFillManagerIfNecessary;
- (void)_performAutoFill;
- (void)_autoFillCreditCardData;
- (void)_autoFillSingleCreditCardData:(long long)arg1;
- (void)_captureCreditCardDataWithCameraAndFill;
- (void)_suggestPasswordForNewAccountOrChangePasswordForm;
- (void)_offerToAutoFillContact;
- (void)_gatherFormValuesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateCreditCardAutoFillAction;
- (_Bool)_shouldUsePasswordGenerationAssistanceForTextField;
- (long long)_passwordGenerationAssistanceAction;
- (_Bool)_textFieldIsEmptyPasswordField;
- (_Bool)_shouldAllowExternalPasswordAutoFillOnURL:(id)arg1;
- (long long)_actionForLoginForm;
- (_Bool)_shouldAllowGeneratedPassword;
- (void)_setUserAndPasswordFieldsAutoFilled:(_Bool)arg1 clearPasswordField:(_Bool)arg2;
- (void)_presentViewController:(id)arg1 presentingViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_cachedPotentialCredentialMatches;
- (void)_getLoginFormUser:(id *)arg1 password:(id *)arg2 userIsAutoFilled:(_Bool *)arg3 passwordIsAutoFilled:(_Bool *)arg4;
- (id)externalCredentialIdentities;
- (void)_fillCredentialAfterAuthenticationIfNeeded:(id)arg1 setAsDefaultCredential:(_Bool)arg2 submitForm:(_Bool)arg3;
- (void)_fillPasswordCredentialIdentity:(id)arg1 submitForm:(_Bool)arg2;
- (void)_fillCredential:(id)arg1 setAutoFilled:(_Bool)arg2 setAsDefaultCredential:(_Bool)arg3 focusFieldAfterFilling:(_Bool)arg4 submitForm:(_Bool)arg5;
- (id)_actionForPresentingPasswordManagerExtension:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_getShouldOfferForgetPassword:(_Bool *)arg1 savePassword:(_Bool *)arg2;
- (void)_offerToForgetSavedPassword:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_generateAndSuggestPasswordWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_presentCredentialListForExtension:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_textSuggestionForExternalCredentialIdentity:(id)arg1 submitForm:(_Bool)arg2;
- (id)_textSuggestionForCredentialDisplayData:(id)arg1 submitForm:(_Bool)arg2;
- (void)_getMatchingKeychainCredentialsIncludingCredentialsWithEmptyUsernames:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_fetchPotentialCredentialMatchesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_offerToAutoFillFromPotentialCredentialMatches;
- (_Bool)_hasMatchWithUser:(id)arg1 password:(id)arg2;
- (_Bool)_passwordGenerationAssistanceAutoFillButtonEnabled;
- (id)_sortedSingleCreditCardDataArray:(id)arg1;
- (void)_fillSingleCreditCardDataValue:(id)arg1 creditCardDataType:(long long)arg2;
- (void)_fillCreditCardData:(id)arg1;
- (_Bool)_textFieldLooksLikeCardSecurityCodeFieldButNotCardNumberOrCardholderField:(id)arg1;
- (void)_updateAutoFillActionToCaptureCreditCardAndFill;
- (id)_suggestionsForAutoFillDisplayData:(id)arg1;
- (void)_autoFillDisplayData:(id)arg1 setAutoFilled:(_Bool)arg2;
- (void)_autoFillWithSet:(id)arg1;
- (void)_switchToCustomInputViewWithMatches:(id)arg1 contact:(id)arg2;
- (void)_showOtherContactOptions;
- (void)_setShowingKeyboardInputView:(_Bool)arg1;
- (void)dismissCustomAutoFill;
- (void)_fillASPasswordCredential:(id)arg1 needsAuthentication:(_Bool)arg2 setAutoFilled:(_Bool)arg3 submitForm:(_Bool)arg4;
- (void)performAutoFillWithMatchSelections:(id)arg1 doNotFill:(id)arg2 contact:(id)arg3;
- (void)codesUpdatedForOneTimeCodeMonitor:(id)arg1;

@end

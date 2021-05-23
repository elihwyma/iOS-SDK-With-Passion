/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class CNContact, NSArray, NSDictionary, NSMutableIndexSet, NSMutableSet, NSSet, NSString, NSTimer, SFFormAutoFillFrameHandle, SFFormAutocompleteState, UIView, WBSCreditCardData, WBSFormMetadata, WBSOneTimeCodeMonitor, WKWebView, _SFAuthenticationContext, _SFAutoFillInputView, _SFFormAutoFillInputSession, _WKRemoteObjectInterface;

@protocol SFFormAutoFillControllerDelegate, SFFormAutoFiller, WBUFormAutoFillWebView;

@interface _SFFormAutoFillController : NSObject

{
    WKWebView<WBUFormAutoFillWebView> *_webView;
    id <SFFormAutoFillControllerDelegate> _delegate;
    _WKRemoteObjectInterface *_remoteObjectInterface;
    id <SFFormAutoFiller> _autoFiller;
    _Bool _isCurrentlyAuthenticating;
    long long _authenticationType;
    SFFormAutocompleteState *_state;
    NSTimer *_prefillTimer;
    WBSFormMetadata *_unsubmittedForm;
    SFFormAutoFillFrameHandle *_unsubmittedFormFrame;
    NSMutableIndexSet *_uniqueIDsOfFormsThatWereAutoFilled;
    NSMutableSet *_uniqueIDsOfControlsThatWereAutoFilled;
    NSString *_uniqueIDOfFocusedPasswordElementWithAutomaticPassword;
    NSArray *_uniqueIDsOfPasswordElementsForAutomaticPasswords;
    SFFormAutoFillFrameHandle *_frameHandleForAutomaticPasswords;
    _SFFormAutoFillInputSession *_inputSessionForAutomaticPasswords;
    _SFAutoFillInputView *_autoFillInputView;
    NSArray *_preservedLeadingBarButtonGroups;
    NSArray *_preservedTrailingBarButtonGroups;
    NSDictionary *_externalCredentialIdentitiesForStreamlinedAutoFill;
    _Bool _metadataCorrectionsEnabled;
    CNContact *_lastFilledContact;
    WBSCreditCardData *_lastFilledCreditCardData;
    NSSet *_lastFilledCreditCardDataTypes;
}

@property (nonatomic, readonly) UIView<WBUFormAutoFillWebView> *webView;
@property (nonatomic) _Bool metadataCorrectionsEnabled;
@property (nonatomic, readonly) _SFAuthenticationContext *authenticationContext;
@property (nonatomic, readonly) WBSOneTimeCodeMonitor *oneTimeCodeMonitor;
@property (retain, nonatomic) CNContact *lastFilledContact;
@property (retain, nonatomic) WBSCreditCardData *lastFilledCreditCardData;
@property (retain, nonatomic) NSSet *lastFilledCreditCardDataTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_filterAndSortCredentialIdentities:(id)arg1 pageURL:(id)arg2 exactMatchesOnly:(_Bool)arg3;
+ (void)_getExternalLoginCredentialSuggestionsForDomains:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)_getExternalLoginCredentialSuggestionsForDomains:(id)arg1 pageURL:(id)arg2 completion:(CDUnknownBlockType)arg3;

- (void)dealloc;
- (void)invalidate;
- (void)insertTextSuggestion:(id)arg1;
- (void)didCollectURLsForPreFilling:(id)arg1 atURL:(id)arg2;
- (void)didCollectFormMetadataForPreFilling:(id)arg1 atURL:(id)arg2 ancestorFramesOfFormToPreFill:(id)arg3;
- (void)textDidChangeInTextField:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3;
- (void)didFillGeneratedPasswordInForm:(id)arg1 inFrame:(id)arg2;
- (void)willNavigateFrame:(id)arg1 withUnsubmittedForm:(id)arg2;
- (void)autoFillDidFinishWithUpdatedFormMetadata:(id)arg1 inFrame:(id)arg2 shouldSubmit:(_Bool)arg3;
- (void)didUpdateUnsubmittedForm:(id)arg1 inFrame:(id)arg2;
- (void)didRemoveAutomaticStrongPasswordInForm:(id)arg1 inputSessionUserObject:(id)arg2 inFrame:(id)arg3;
- (void)autoFillForm:(long long)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (void)annotateForm:(long long)arg1 inFrame:(id)arg2 withValues:(id)arg3;
- (void)fillTextField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (void)setFormControls:(id)arg1 areAutoFilled:(_Bool)arg2 andClearField:(id)arg3 inFrame:(id)arg4;
- (void)autoFillOneTimeCodeFieldsInFrame:(id)arg1 withValue:(id)arg2;
- (void)_prefillTimerFired:(id)arg1;
- (void)autoFill;
- (void)updateSuggestions;
- (void)_didFocusSensitiveFormField;
- (void)_fieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)_removeUniqueIDsOfAutoFilledForm:(id)arg1;
- (void)_restoreInputAssistantItemsIfNecessary;
- (void)usernameFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)passwordFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (void)textFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4;
- (_Bool)elementIsBeingFocusedForStreamlinedLogin:(id)arg1;
- (void)_hideInputAssistantItemsIfNecessary;
- (void)_fieldFocusedWithInputSession:(id)arg1;
- (void)fieldWillFocusWithInputSession:(id)arg1;
- (void)fieldDidFocusWithInputSession:(id)arg1;
- (void)willSubmitForm:(id)arg1 inFrame:(id)arg2 submissionHandler:(CDUnknownBlockType)arg3;
- (id)_preFillDisabledHosts;
- (void)_authenticateForAutoFillForHighLevelDomain:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)_showingAutoFillInputView;
- (id)_websiteForAuthenticationPrompt;
- (void)_addUniqueIDsOfAutoFilledForm:(id)arg1;
- (void)_simulateCarriageReturnKeyEvents;
- (id)_simulatedWebEventForReturnKeyWithType:(int)arg1;
- (void)_removeAutomaticPasswordButtonInitiatedByUser:(_Bool)arg1 removeVisualTreatmentOnly:(_Bool)arg2;
- (id)_beginAutomaticPasswordInteractionWithInputSession:(id)arg1 generatedPassword:(id)arg2 ignorePreviousDecision:(_Bool)arg3;
- (id)automaticPasswordForPasswordField:(id)arg1 inForm:(id)arg2 isFrame:(id)arg3;
- (void)credentialProviderExtensionManagerExtensionListDidChange:(id)arg1;
- (void)autoFillInputViewDidSelectUseKeyboard:(id)arg1;
- (void)autoFillInputViewDidSelectMorePasswords:(id)arg1;
- (id)authenticationCustomUIProgressObserverForContext:(id)arg1;
- (id)authenticationMessageForContext:(id)arg1;
- (id)passcodePromptForContext:(id)arg1;
- (_Bool)displayMessageAsTitleForContext:(id)arg1;
- (id)initWithWebView:(id)arg1 delegate:(id)arg2;
- (void)prefillFormsSoonIfNeeded;
- (void)offerToSaveUnsubmittedFormDataIfNeeded;
- (_Bool)shouldShowIconsInPasswordPicker;
- (void)fetchMetadataForTextField:(id)arg1 inFrame:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(_Bool)arg3 focusFieldAfterFilling:(_Bool)arg4 fieldToFocus:(id)arg5 submitForm:(_Bool)arg6;
- (void)fieldFocusedWithInputSession:(id)arg1;
- (void)willSubmitFormValues:(id)arg1 userObject:(id)arg2 submissionHandler:(CDUnknownBlockType)arg3;
- (void)authenticateForAutoFillAuthenticationType:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removeAutomaticPasswordVisualTreatment;
- (void)removeAutomaticPasswordButtonInitiatedByUser:(_Bool)arg1;
- (void)automaticPasswordSheetDismissed;
- (void)prepareForShowingAutomaticStrongPasswordWithInputSession:(id)arg1;
- (void)beginAutomaticPasswordInteractionWithInputSession:(id)arg1 generatedPassword:(id)arg2;
- (id)beginAutomaticPasswordInteractionWithInputSession:(id)arg1;

@end

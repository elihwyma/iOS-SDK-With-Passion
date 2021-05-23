/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <WebUI/WBSFormMetadataController.h>

@class NSDictionary, NSString, WBSFormMetadata, WKWebProcessPlugInFrame, WKWebProcessPlugInScriptWorld, _SFWebProcessPlugInPageController;

@protocol SFFormMetadataObserver;

@interface _SFFormMetadataController : WBSFormMetadataController

{
    WKWebProcessPlugInScriptWorld *_scriptWorld;
    _SFWebProcessPlugInPageController *_pageController;
    id <SFFormMetadataObserver> _observer;
    NSDictionary *_assistedNodeMetadata;
    _Bool _shouldListenForFormChanges;
    WBSFormMetadata *_unsubmittedForm;
    WKWebProcessPlugInFrame *_unsubmittedFormFrame;
    _Bool _autoFillInProgress;
    _Bool _focusingFormForStreamlinedLogin;
}

@property (nonatomic, readonly) WKWebProcessPlugInScriptWorld *scriptWorld;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)_observer;
- (void)_webProcessPlugInBrowserContextController:(id)arg1 textDidChangeInTextField:(id)arg2 inFrame:(id)arg3 initiatedByUserTyping:(_Bool)arg4;
- (id)_webProcessPlugInBrowserContextController:(id)arg1 willSubmitForm:(id)arg2 toFrame:(id)arg3 fromFrame:(id)arg4 withValues:(id)arg5;
- (void)_webProcessPlugInBrowserContextController:(id)arg1 willSendSubmitEventToForm:(id)arg2 inFrame:(id)arg3 targetFrame:(id)arg4 values:(id)arg5;
- (_Bool)_webProcessPlugInBrowserContextControllerShouldNotifyOnFormChanges:(id)arg1;
- (id)_webProcessPlugInBrowserContextController:(id)arg1 willBeginInputSessionForElement:(id)arg2 inFrame:(id)arg3 userIsInteracting:(_Bool)arg4;
- (void)_collectFormMetadataForPreFilling:(_Bool)arg1;
- (_Bool)_formContainsAutoFilledElements:(id)arg1;
- (id)_assistedNodeMetadataWithPasswordField:(id)arg1 passwordFieldMetadata:(id)arg2 formMetadata:(id)arg3 inFrame:(id)arg4;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 fillSynchronously:(_Bool)arg3 setAutoFilled:(_Bool)arg4 focusFieldAfterFilling:(_Bool)arg5 fieldToFocus:(id)arg6 submitForm:(_Bool)arg7;
- (id)fillForm:(double)arg1 inFrame:(id)arg2 withPassword:(id)arg3;
- (void)removeAutomaticPasswordElementsInFrame:(id)arg1 focusedPasswordControlUniqueID:(id)arg2 passwordControlUniqueIDs:(id)arg3 blurAfterRemoval:(_Bool)arg4;
- (void)removeAutomaticPasswordVisualTreatmentInFrame:(id)arg1 passwordControlUniqueIDs:(id)arg2;
- (void)clearField:(id)arg1 inFrame:(id)arg2;
- (void)focusFormForStreamlinedLogin:(double)arg1 inFrame:(id)arg2;
- (void)_willNavigateFrameWithUnsubmittedForm:(id)arg1;
- (void)didFindSearchURLTemplateString:(id)arg1 inFrame:(id)arg2 pageController:(id)arg3;
- (id)initWithPageController:(id)arg1;
- (void)collectURLsForPreFilling;
- (void)collectFormMetadataForPreFilling;
- (void)collectMetadataForTextField:(id)arg1 inFrame:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)clearScriptWorld;
- (id)formAutoFillNodeForJSWrapper:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2;
- (void)usernameFieldFocused:(id)arg1 fieldMetadata:(id)arg2 inForm:(id)arg3 inFrame:(id)arg4;
- (void)passwordFieldFocused:(id)arg1 inFrame:(id)arg2 isPasswordFieldForUserCredentials:(_Bool)arg3;
- (void)creditCardFieldFocused:(id)arg1 inFrame:(id)arg2;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 fillSynchronously:(_Bool)arg3 setAutoFilled:(_Bool)arg4 selectFieldAfterFilling:(id)arg5;
- (void)finishedAutoFillingForm:(id)arg1 inFrame:(id)arg2 shouldSubmit:(_Bool)arg3;
- (void)didStartProvisionalLoadForFrame:(id)arg1;
- (void)didSameDocumentNavigation:(long long)arg1 inFrame:(id)arg2;
- (_Bool)shouldIncludeNonEmptyFields;

@end

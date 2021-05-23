/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@interface WBSFormMetadataController : NSObject

{
    struct HashMap<OpaqueFormAutoFillFrame *, std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<std::__1::unique_ptr<SafariShared::FrameMetadata, std::__1::default_delete<SafariShared::FrameMetadata>>>> _framesToMetadataMap;
}

+ (_Bool)convertNumber:(id)arg1 toFormMetadataRequestType:(unsigned long long *)arg2;

- (id)init;
- (id).cxx_construct;
- (void)getMetadataForAllFormsInPageWithMainFrame:(id)arg1 requestType:(unsigned long long)arg2 frames:(id *)arg3 formMetadata:(id *)arg4;
- (id)formAutoFillNodeForField:(id)arg1 inFrame:(id)arg2;
- (void)getMetadataForTextField:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id *)arg3 formMetadata:(id *)arg4 requestType:(unsigned long long)arg5;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 fillSynchronously:(_Bool)arg3 setAutoFilled:(_Bool)arg4 focusFieldAfterFilling:(_Bool)arg5 fieldToFocus:(id)arg6;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 fillSynchronously:(_Bool)arg3 setAutoFilled:(_Bool)arg4 focusFieldAfterFilling:(_Bool)arg5 fieldToFocus:(id)arg6 submitForm:(_Bool)arg7;
- (id)fillForm:(double)arg1 inFrame:(id)arg2 withPassword:(id)arg3;
- (id)formElementWithFormID:(double)arg1 inFrame:(id)arg2;
- (id)metadataForForm:(id)arg1 inFrame:(id)arg2 requestType:(unsigned long long)arg3;
- (_Bool)autoFillFrameIsValid:(id)arg1;
- (void)removeAutomaticPasswordElementsInFrame:(id)arg1 focusedPasswordControlUniqueID:(id)arg2 passwordControlUniqueIDs:(id)arg3 blurAfterRemoval:(_Bool)arg4;
- (void)removeAutomaticPasswordVisualTreatmentInFrame:(id)arg1 passwordControlUniqueIDs:(id)arg2;
- (void)clearField:(id)arg1 inFrame:(id)arg2;
- (void)focusFormForStreamlinedLogin:(double)arg1 inFrame:(id)arg2;
- (void)textFieldFocused:(id)arg1 inFrame:(id)arg2;
- (void)willSendSubmitEventForForm:(id)arg1 inFrame:(id)arg2;
- (id)metadataForForm:(id)arg1 inFrame:(id)arg2 requestType:(unsigned long long)arg3 addUserEditedStateForUserNameAndPasswordFields:(_Bool)arg4;
- (void)willSubmitForm:(id)arg1 inFrame:(id)arg2;
- (id)visibleNonEmptyTextFieldsInForm:(id)arg1 inFrame:(id)arg2;
- (id)formSubmissionURLStringForSearchTextField:(id)arg1 inFrame:(id)arg2 useStrictDetection:(_Bool)arg3;
- (void)clearScriptWorld;
- (id)formAutoFillNodeForJSWrapper:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2;
- (void)usernameFieldFocused:(id)arg1 fieldMetadata:(id)arg2 inForm:(id)arg3 inFrame:(id)arg4;
- (void)passwordFieldFocused:(id)arg1 inFrame:(id)arg2 isPasswordFieldForUserCredentials:(_Bool)arg3;
- (void)creditCardFieldFocused:(id)arg1 inFrame:(id)arg2;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 fillSynchronously:(_Bool)arg3 setAutoFilled:(_Bool)arg4 selectFieldAfterFilling:(id)arg5;
- (void)finishedAutoFillingForm:(id)arg1 inFrame:(id)arg2 shouldSubmit:(_Bool)arg3;
- (_Bool)shouldIncludeNonEmptyFields;
- (void)autoFillFormSynchronouslyInFrame:(id)arg1 withValues:(id)arg2;
- (void)annotateForm:(double)arg1 inFrame:(id)arg2 withValues:(id)arg3;
- (void)autoFillOneTimeCodeFieldsInFrame:(id)arg1 withValue:(id)arg2;
- (void)automaticPasswordSheetDimissedInFrame:(id)arg1 focusedPasswordControlUniqueID:(id)arg2;
- (void)recursivelyClearMetadataForFrames:(id)arg1;
- (void)clearMetadataForFrame:(id)arg1;
- (void)fillField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3;
- (void)setFormControls:(id)arg1 inFrame:(id)arg2 asAutoFilled:(_Bool)arg3;
- (id)substitutePasswordElementsWithAutomaticPasswordElementsInFrame:(id)arg1 formID:(double)arg2 focusedPasswordControlUniqueID:(id)arg3 passwordControlUniqueIDs:(id)arg4 automaticPassword:(id)arg5 blurAfterSubstitution:(_Bool)arg6;
- (_Bool)isFrameAnnotated:(id)arg1;
- (_Bool)isFrameOrChildAnnotated:(id)arg1;
- (struct FrameMetadata *)metadataForFrame:(id)arg1 requestType:(unsigned long long)arg2;
- (void)recursivelyCollectMetadataInFrame:(id)arg1 requestType:(unsigned long long)arg2 frames:(id)arg3 formMetadata:(id)arg4;
- (struct OpaqueJSValue *)_jsObjectForForm:(id)arg1 inFrame:(id)arg2;
- (id)_formMetadataByAddingInformationAboutUserEditedStateForUserNameAndPasswordFieldsToFormMetadata:(id)arg1 inFrame:(id)arg2;
- (void)_unlockMetadataForForm:(id)arg1 inFrame:(id)arg2;
- (unsigned long long)userEditedTextControlCountInArray:(struct OpaqueJSValue *)arg1 context:(struct OpaqueJSContext *)arg2 expectTextFieldsRatherThanTextAreas:(_Bool)arg3;
- (void)countUserEditedTextControlsInFrame:(id)arg1 textFields:(unsigned long long *)arg2 textAreas:(unsigned long long *)arg3;
- (void)recursivelyCountUserEditedTextControlsInFrame:(id)arg1 textFields:(unsigned long long *)arg2 textAreas:(unsigned long long *)arg3;
- (_Bool)addressBookAutoFillableFieldFocused:(id)arg1 withAddressBookAutoFillableFieldMetadata:(id)arg2 inFrame:(id)arg3;
- (void)otherCreditCardFieldFocused:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4;
- (void)oneTimeCodeFieldFocused:(id)arg1 withFieldMetadata:(id)arg2 inFrame:(id)arg3;
- (void)unidentifiedTextFieldFocused:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4;
- (void)passwordFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5;
- (void)creditCardFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5;
- (void)usernameFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5;
- (void)addressBookAutoFillableFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5;
- (void)otherCreditCardFieldBlurred:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4;
- (void)oneTimeCodeFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5;
- (void)unidentifiedTextFieldBlurred:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id)arg3 formMetadata:(id)arg4;
- (void)_lockMetadataForForm:(id)arg1 inFrame:(id)arg2;
- (void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2;
- (void)autoFillFormSynchronouslyInFrame:(id)arg1 withValues:(id)arg2 selectFieldAfterFilling:(id)arg3;
- (void)autoFillFormAsynchronouslyInFrame:(id)arg1 withValues:(id)arg2 selectFieldAfterFilling:(id)arg3;
- (void)focusField:(id)arg1 inFrame:(id)arg2;
- (void)disableSpellCheckInField:(id)arg1 inFrame:(id)arg2;
- (struct _NSRange)selectionRangeInField:(id)arg1 inFrame:(id)arg2;
- (void)selectRange:(struct _NSRange)arg1 inField:(id)arg2 inFrame:(id)arg3;
- (void)replaceRange:(struct _NSRange)arg1 inField:(id)arg2 inFrame:(id)arg3 withString:(id)arg4 andSelectTailStartingAt:(unsigned long long)arg5;
- (id)uniqueIDForTextField:(id)arg1 inFrame:(id)arg2;
- (_Bool)pageWithMainFrameMeetsEditedFormTextWarningCriteria:(id)arg1;
- (void)textFieldBlurred:(id)arg1 inFrame:(id)arg2 page:(id)arg3 textFieldMetadata:(id)arg4 formMetadata:(id)arg5;
- (id)metadataForActiveFormInPageWithMainFrame:(id)arg1;

@end

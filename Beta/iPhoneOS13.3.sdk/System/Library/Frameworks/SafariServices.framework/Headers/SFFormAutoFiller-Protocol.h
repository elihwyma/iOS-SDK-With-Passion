/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/Swift-Protocol.h>

@protocol SFFormAutoFiller <Swift>

- (unsigned short)removeAutomaticPasswordVisualTreatmentInFrame:passwordControlUniqueIDs: /* Error: Ran out of types for this method. */;
- (unsigned short)focusFormForStreamlinedLogin:inFrame: /* Error: Ran out of types for this method. */;
- (unsigned short)autoFillFormAsynchronouslyInFrame:withValues:setAutoFilled:selectFieldAfterFilling: /* Error: Ran out of types for this method. */;
- (unsigned short)autoFillFormAsynchronouslyInFrame:withValues:setAutoFilled:focusFieldAfterFilling:fieldToFocus: /* Error: Ran out of types for this method. */;
- (unsigned short)autoFillFormAsynchronouslyInFrame:withValues:setAutoFilled:focusFieldAfterFilling:fieldToFocus:submitForm: /* Error: Ran out of types for this method. */;
- (unsigned short)autoFillFormSynchronouslyInFrame:withValues: /* Error: Ran out of types for this method. */;
- (unsigned short)autoFillForm:inFrame:withGeneratedPassword: /* Error: Ran out of types for this method. */;
- (unsigned short)annotateForm:inFrame:withValues: /* Error: Ran out of types for this method. */;
- (unsigned short)fillTextField:inFrame:withGeneratedPassword: /* Error: Ran out of types for this method. */;
- (unsigned short)setFormControls:areAutoFilled:andClearField:inFrame: /* Error: Ran out of types for this method. */;
- (unsigned short)autoFillOneTimeCodeFieldsInFrame:withValue: /* Error: Ran out of types for this method. */;
- (unsigned short)collectURLsForPrefillingAtURL: /* Error: Ran out of types for this method. */;
- (unsigned short)collectFormMetadataForPrefillingAtURL: /* Error: Ran out of types for this method. */;
- (unsigned short)collectMetadataForTextField:inFrame:atURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)clearAutoFillMetadata;
- (unsigned short)substitutePasswordElementsWithAutomaticPasswordElementsInFrame:formID:focusedPasswordControlUniqueID:passwordControlUniqueIDs:automaticPassword:blurAfterSubstitution:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAutomaticPasswordElementsInFrame:focusedPasswordControlUniqueID:passwordControlUniqueIDs: /* Error: Ran out of types for this method. */;
- (unsigned short)automaticPasswordSheetDimissedInFrame:focusedPasswordControlUniqueID: /* Error: Ran out of types for this method. */;

@end

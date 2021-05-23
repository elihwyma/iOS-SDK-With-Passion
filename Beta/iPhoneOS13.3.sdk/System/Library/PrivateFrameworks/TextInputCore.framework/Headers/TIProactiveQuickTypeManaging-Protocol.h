/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/Swift-Protocol.h>

@protocol TIProactiveQuickTypeManaging <Swift>

- (unsigned short)reset;
- (unsigned short)isEnabled;
- (unsigned short)generateAndRenderProactiveSuggestionsWithTriggers:withAdditionalPredictions:withSecureCandidateRenderer:withRenderTraits:withInput:withRecipient:withApplication:withLocale:withTextContentType:withAvailableApps:logBlock:async:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)generateAndRenderProactiveSuggestionsWithTriggers:withAdditionalPredictions:withSecureCandidateRenderer:withRenderTraits:withInput:withRecipient:withApplication:withLocale:withTextContentType:withAvailableApps:logBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)generateAndRenderProactiveSuggestionsWithInput:withSecureCandidateRenderer:withRenderTraits:textContentType:async:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)generateAndRenderProactiveSuggestionsWithInput:withSecureCandidateRenderer:withRenderTraits:textContentType: /* Error: Ran out of types for this method. */;
- (unsigned short)isAutoPopupEnabled;
- (unsigned short)isAutoCompleteEnabled;
- (unsigned short)userActionWithNoNewTriggers:fieldType: /* Error: Ran out of types for this method. */;
- (unsigned short)suggestionAccepted:fieldType: /* Error: Ran out of types for this method. */;
- (unsigned short)suggestionNotAccepted: /* Error: Ran out of types for this method. */;
- (unsigned short)getMeCardEmailAddresses;

@end

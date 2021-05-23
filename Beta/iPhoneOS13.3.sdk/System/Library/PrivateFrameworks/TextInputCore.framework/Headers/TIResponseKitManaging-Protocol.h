/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/Swift-Protocol.h>

@protocol TIResponseKitManaging <Swift>

- (unsigned short)resetResponseKit;
- (unsigned short)generateResponseKitSuggestionsForString:withLanguage:withClientID:withRecipientID:withAdditionalPredictions:desiredCandidateCount:shouldDisableAutoCaps:stringIsBlacklisted:async:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)registerResponseKitResponse:forMessage:withLanguage:withClientID:withSenderID:withRecipientID:withTimestamp:shouldUpdateConversationHistory: /* Error: Ran out of types for this method. */;
- (unsigned short)updateResponseKitConversationHistoryWithMessage:withSenderID:withTimestamp: /* Error: Ran out of types for this method. */;
- (unsigned short)resetResponseKitConversationHistory;
- (unsigned short)persistResponseKitDynamicDataToDisk;

@end

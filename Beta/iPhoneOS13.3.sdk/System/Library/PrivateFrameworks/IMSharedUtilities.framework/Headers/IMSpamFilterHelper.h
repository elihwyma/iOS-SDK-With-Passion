/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@interface IMSpamFilterHelper : NSObject

+ (_Bool)isInternationalSpamFilteringEnabled;
+ (_Bool)receiverIsCandidateForSpamFiltering:(id)arg1;
+ (_Bool)senderIsCandidateForSMSDowngrade:(id)arg1;
+ (_Bool)isBlackholeEnabledForEligibleAccounts:(_Bool)arg1 withRecipient:(id)arg2;
+ (_Bool)senderIsCandidateForBlackhole:(id)arg1;
+ (_Bool)senderIsKnownContact:(id)arg1;
+ (_Bool)anyParticipantIsCandidateForBlackhole:(id)arg1;
+ (_Bool)anyParticipantIsKnownContact:(id)arg1;
+ (_Bool)isFilterUnknownSendersEnabled;
+ (id)mapID:(id)arg1 usingKey:(id)arg2;
+ (_Bool)isChineseSpamFilteringEnabled;
+ (_Bool)isKnownContact:(id)arg1;
+ (id)_cnRecordForAliases:(id)arg1;
+ (_Bool)shouldDowngradeToRecipient:(id)arg1 fromSender:(id)arg2 ifCapableOfSMS:(_Bool)arg3 withConversationDowngradeState:(_Bool)arg4 andConversationHistoryState:(_Bool)arg5;
+ (_Bool)shouldShowSMSWarningForSender:(id)arg1 forRecipient:(id)arg2 withConversationHistory:(_Bool)arg3;
+ (_Bool)shouldBlackholeMessageFromSender:(id)arg1 toRecipient:(id)arg2 givenHistory:(_Bool)arg3 forEligibleAccounts:(_Bool)arg4;
+ (_Bool)shouldBlackholeGroupMessageFromSender:(id)arg1 toRecipient:(id)arg2 otherRecipients:(id)arg3 givenHistory:(_Bool)arg4 forEligibleAccounts:(_Bool)arg5;
+ (_Bool)isBlackholeEnabledForEligibleAccounts:(_Bool)arg1;
+ (_Bool)accountRegionIsCandidateForSpamFiltering:(id)arg1;
+ (_Bool)accountCountryIsCandidateForSpamFiltering:(id)arg1;
+ (void)participantsAreiMessagable:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)sanitizeParticipants:(id)arg1 excludingHandles:(id)arg2;
+ (id)internationalSpamFilterLearnMoreURL;
+ (_Bool)repliedToChat:(id)arg1;
+ (_Bool)receivedResponseForChat:(id)arg1;

@end

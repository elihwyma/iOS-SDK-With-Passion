/*
 Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

#import <IMAssistantCore/IMAssistantMessageHandler.h>

@class CNGeminiManager, NSString;

@protocol IMAssistantMessageSendHandlerDelegate;

@interface IMAssistantMessageSendHandler : IMAssistantMessageHandler

{
    NSString *_conversationIdentifierResolvedDuringRecipientResolution;
    id <IMAssistantMessageSendHandlerDelegate> _messageSendHandlerDelegate;
    CNGeminiManager *_geminiManager;
}

@property (retain, nonatomic) id <IMAssistantMessageSendHandlerDelegate> messageSendHandlerDelegate;
@property (retain, nonatomic) CNGeminiManager *geminiManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)handleSendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmSendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveRecipientsForSendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveContentForSendMessage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)resolveSpeakableGroupNameForSendMessage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)canSendLocationMessageWithLocationManager:(id)arg1 withError:(long long *)arg2;
- (id)sendMessageWithText:(id)arg1 currentLocation:(_Bool)arg2 expressiveSendStyleID:(id)arg3 idsIdentifier:(id)arg4 executionContext:(long long)arg5 toChat:(id)arg6;
- (_Bool)updateSenderIdentityForChat:(id)arg1 recipients:(id)arg2;
- (id)subscriptionContextForSenderIdentity:(id)arg1;
- (void)resolveRecipients:(id)arg1 forIntent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)resolveMessageContentWithString:(id)arg1;
- (_Bool)isMemberOfChat:(id)arg1;
- (id)resolvedRecipientsFromChat:(id)arg1;
- (_Bool)recipientHandleResolutionResultsAllowedByScreentime:(id)arg1;
- (id)recipientsResolutionFailureResultWithResult:(id)arg1 forRecipient:(id)arg2 amongRecipients:(id)arg3;
- (id)resolveRecipientsByFindingExistingRelevantChatsForRecipients:(id)arg1 withMatchingHandlesByRecipient:(id)arg2 fromChats:(id)arg3;
- (id)recipientDisambiguationResultsFromMultipleRelevantChats:(id)arg1;
- (id)contactResolutionResultForContacts:(id)arg1 matchingRecipient:(id)arg2;
- (id)handleResolutionResultForHandles:(id)arg1 resolvedContactForAlternatives:(id)arg2 recipient:(id)arg3;
- (_Bool)shouldContinueToExamineRelevantChatsWithMatches:(id)arg1 nextChat:(id)arg2;
- (id)findValidMappingOfRequestedRecipientToChatParticipantAmongMatches:(id)arg1;
- (id)contactsWithDuplicateNamesAmongContacts:(id)arg1;
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2 intentIdentifier:(id)arg3;

@end

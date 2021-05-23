/*
 Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

#import <IMAssistantCore/IMAssistantMessageHandler.h>

@interface IMAssistantMessageQueryHandler : IMAssistantMessageHandler

- (_Bool)resolvePersons:(id)arg1 forIntent:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)searchMessagesWithContents:(id)arg1 messageIdentifiers:(id)arg2 notificationIdentifiers:(id)arg3 chatNames:(id)arg4 conversationIdentifiers:(id)arg5 recipients:(id)arg6 senders:(id)arg7 dateTimeRange:(id)arg8 attributes:(unsigned long long)arg9 completion:(CDUnknownBlockType)arg10;
- (id)chatsForChatNames:(id)arg1;
- (void)SPIQueryMessagesWithGUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handlesAndServicesForChatGuids:(id)arg1 handles:(id *)arg2 services:(id *)arg3;
- (void)SPIQueryMessagesForChatsWithIdentifiers:(id)arg1 services:(id)arg2 onlyUnread:(_Bool)arg3 limit:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)allIMHandlesForHandle:(id)arg1;
- (void)handlesAndServicesForPersons:(id)arg1 handles:(id *)arg2 services:(id *)arg3;
- (id)unifiedContactIdentifiersForPerson:(id)arg1;
- (id)spokenPhrasesForSpeakableStrings:(id)arg1;
- (id)vocabularyIdentifiersFromSpeakableStrings:(id)arg1;
- (id)chatParticipantForSPIHandle:(id)arg1;
- (id)messageContentsPredicate:(id)arg1;
- (id)recipientsPredicate:(id)arg1;
- (id)sendersPredicate:(id)arg1;
- (_Bool)messageIsFromBlackholedChat:(id)arg1;
- (id)chatParticipantsForSPIHandles:(id)arg1;
- (void)messagesMatchingMessageIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)SPIQueryMessagesForChats:(id)arg1 onlyUnread:(_Bool)arg2 limit:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)chatsWithConversationIdentifiers:(id)arg1;
- (id)chatsContainingRequiredParticipants:(id)arg1;
- (void)SPIQueryMessagesForSenders:(id)arg1 onlyUnread:(_Bool)arg2 limit:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)SPIQueryUnreadMessages:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)SPIQueryMessagesWithRowIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)resolveDateTimeRange:(id)arg1;

@end

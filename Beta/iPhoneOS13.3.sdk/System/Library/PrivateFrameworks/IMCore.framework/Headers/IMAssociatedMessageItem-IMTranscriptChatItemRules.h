/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMSharedUtilities/IMAssociatedMessageItem.h>

@interface IMAssociatedMessageItem (IMTranscriptChatItemRules)

- (_Bool)shouldGenerateTopLevelChatItem;
- (id)_newChatItemsWithFilteredChat:(_Bool)arg1 isBusiness:(_Bool)arg2 parentChatIsSpam:(_Bool)arg3 hasKnownParticipants:(_Bool)arg4;
- (id)_newChatItems;
- (_Bool)isTypingOrCancelTypingMessage;
- (_Bool)isIncomingTypingOrCancelTypingMessage;
- (_Bool)isIncomingTypingMessage;
- (_Bool)isCancelTypingMessage;

@end

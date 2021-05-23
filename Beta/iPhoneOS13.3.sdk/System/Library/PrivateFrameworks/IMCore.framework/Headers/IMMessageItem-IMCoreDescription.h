/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMSharedUtilities/IMMessageItem.h>

@interface IMMessageItem (IMCoreDescription)

+ (id)displayNameForAddress:(id)arg1;
+ (id)bestAccountForAddress:(id)arg1;
+ (id)handleForAddress:(id)arg1;
+ (_Bool)isLoginAddress:(id)arg1;
+ (Class)contextClass;

- (id)_service;
- (id)message;
- (id)_copyWithFlags:(unsigned long long)arg1;
- (id)descriptionForPurpose:(long long)arg1 isGroupMessage:(_Bool)arg2 messageDataSource:(CDUnknownBlockType)arg3 attachmentDataSource:(CDUnknownBlockType)arg4;
- (id)descriptionForPurpose:(long long)arg1 isGroupMessage:(_Bool)arg2 senderDisplayName:(id)arg3 messageDataSource:(CDUnknownBlockType)arg4 attachmentDataSource:(CDUnknownBlockType)arg5;
- (_Bool)_isInvitation;
- (id)_copy;
- (_Bool)isSystemMessage;
- (void)_setInivtation:(_Bool)arg1;
- (id)_newChatItemsWithFilteredChat:(_Bool)arg1 isBusiness:(_Bool)arg2 parentChatIsSpam:(_Bool)arg3 hasKnownParticipants:(_Bool)arg4;
- (id)_newChatItems;
- (_Bool)_hasMessageChatItem;
- (_Bool)isExtensibleMessageWithPluginPayload:(id *)arg1;
- (_Bool)isTypingOrCancelTypingMessage;
- (_Bool)isIncomingTypingOrCancelTypingMessage;
- (_Bool)isIncomingTypingMessage;
- (_Bool)isCancelTypingMessage;

@end

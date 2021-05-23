/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMSharedUtilities/IMItem.h>

@interface IMItem (IMChat_Internal)

+ (Class)contextClass;

- (id)_service;
- (id)message;
- (id)_otherHandle;
- (void)_updateContextWithSenderHandle:(id)arg1 otherHandle:(id)arg2;
- (id)_senderHandle;
- (_Bool)_isInvitation;
- (id)_copy;
- (void)_setInvitation:(_Bool)arg1;
- (_Bool)shouldGenerateTopLevelChatItem;
- (id)_newChatItems;
- (_Bool)_hasMessageChatItem;
- (id)_serviceHandle;
- (_Bool)isTypingOrCancelTypingMessage;
- (_Bool)isIncomingTypingOrCancelTypingMessage;

@end

/*
 Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

#import <IMAssistantCore/Swift-Protocol.h>

@class NSArray;

@protocol IMAssistantChatDataSource <Swift>

@property (nonatomic, readonly) NSArray *allExistingChats;
@property (nonatomic, readonly) _Bool blackholedChatsExist;

- (unsigned short)chatForIMHandle: /* Error: Ran out of types for this method. */;
- (unsigned short)existingChatWithChatIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)existingChatForAddresses:allowRetargeting:bestHandles: /* Error: Ran out of types for this method. */;
- (unsigned short)chatGUIDsForChat: /* Error: Ran out of types for this method. */;
- (unsigned short)chatForIMHandles: /* Error: Ran out of types for this method. */;

@end

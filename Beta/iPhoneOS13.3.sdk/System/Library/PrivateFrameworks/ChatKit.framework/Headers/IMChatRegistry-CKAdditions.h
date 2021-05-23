/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <IMCore/IMChatRegistry.h>

@interface IMChatRegistry (CKAdditions)

- (id)_ck_chatForHandles:(id)arg1 displayName:(id)arg2 lastAddressedHandle:(id)arg3 lastAddressedSIMID:(id)arg4 ignoresDisplayName:(_Bool)arg5 joinedChatsOnly:(_Bool)arg6 createIfNecessary:(_Bool)arg7;
- (id)_ck_chatForHandles:(id)arg1 createIfNecessary:(_Bool)arg2;

@end

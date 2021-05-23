/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <EmailDaemon/Swift-Protocol.h>

@protocol EDMessageQueryHelperDelegate <Swift>

- (unsigned short)queryHelper:didFindMessages: /* Error: Ran out of types for this method. */;
- (unsigned short)queryHelperDidFindAllMessages: /* Error: Ran out of types for this method. */;
- (unsigned short)queryHelper:didAddMessages: /* Error: Ran out of types for this method. */;
- (unsigned short)queryHelper:messageFlagsDidChangeForMessages: /* Error: Ran out of types for this method. */;
- (unsigned short)queryHelper:conversationIDDidChangeForMessages:fromConversationID: /* Error: Ran out of types for this method. */;
- (unsigned short)queryHelper:conversationNotificationLevelDidChangeForConversation:conversationID: /* Error: Ran out of types for this method. */;
- (unsigned short)queryHelper:objectIDDidChangeForMessage:oldObjectID:oldConversationID: /* Error: Ran out of types for this method. */;
- (unsigned short)queryHelper:didUpdateMessages:forKeyPaths: /* Error: Ran out of types for this method. */;
- (unsigned short)queryHelper:didDeleteMessages: /* Error: Ran out of types for this method. */;
- (unsigned short)queryHelperDidFinishRemoteSearch: /* Error: Ran out of types for this method. */;
- (unsigned short)queryHelperNeedsRestart: /* Error: Ran out of types for this method. */;

@end

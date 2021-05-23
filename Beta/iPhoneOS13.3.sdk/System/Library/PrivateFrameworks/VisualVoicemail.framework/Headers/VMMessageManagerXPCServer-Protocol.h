/*
 Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

#import <VisualVoicemail/Swift-Protocol.h>

@protocol VMMessageManagerXPCServer <Swift>

- (unsigned short)messageCountForMailboxType:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)messageCountForMailboxType:read:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)messagesForMailboxType:limit:offset:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)messagesForMailboxType:read:limit:offset:reply: /* Error: Ran out of types for this method. */;

@end

/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/Swift-Protocol.h>

@protocol EDMailboxProviderDelegate;

@protocol EDMailboxProvider <Swift>

@property (weak, nonatomic) id <EDMailboxProviderDelegate> delegate;

- (unsigned short)legacyMailboxForObjectID: /* Error: Ran out of types for this method. */;
- (unsigned short)allMailboxes;
- (unsigned short)mailboxForObjectID: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchMailboxes;

@end

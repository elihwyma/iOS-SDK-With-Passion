/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/Swift-Protocol.h>

@protocol EDIndexableAccount, EDIndexableMailbox;

@protocol EDIndexableMessage <Swift>

@property (nonatomic, readonly) id <EDIndexableAccount> account;
@property (nonatomic, readonly) id <EDIndexableMailbox> mailbox;
@property (nonatomic, readonly) unsigned long long fileSize;

@end

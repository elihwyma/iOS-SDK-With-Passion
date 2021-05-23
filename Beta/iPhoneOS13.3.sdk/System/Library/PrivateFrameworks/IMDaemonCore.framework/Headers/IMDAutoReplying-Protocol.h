/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <IMDaemonCore/Swift-Protocol.h>

@protocol IMDAutoReplyDelegate;

@protocol IMDAutoReplying <Swift>

@property (weak, nonatomic) id <IMDAutoReplyDelegate> replyDelegate;

- (unsigned short)processMessages:inChat: /* Error: Ran out of types for this method. */;

@end

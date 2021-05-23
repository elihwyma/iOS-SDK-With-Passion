/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/Swift-Protocol.h>

@protocol MFDASyncActionsConsumer <Swift>

- (unsigned short)drainMailbox;
- (unsigned short)receiveSyncActions: /* Error: Ran out of types for this method. */;
- (unsigned short)commitSyncActions;

@end

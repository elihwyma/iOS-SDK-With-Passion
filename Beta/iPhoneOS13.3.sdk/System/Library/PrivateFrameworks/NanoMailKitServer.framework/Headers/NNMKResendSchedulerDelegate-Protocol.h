/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <NanoMailKitServer/Swift-Protocol.h>

@protocol NNMKResendSchedulerDelegate <Swift>

- (unsigned short)resendScheduler:didRequestNewResendIntervalForPreviousResendInterval:errorCode: /* Error: Ran out of types for this method. */;
- (unsigned short)resendScheduler:didRequestDequeueIDSIdentifierForResend: /* Error: Ran out of types for this method. */;
- (unsigned short)resendScheduler:didRequestEnqueueIDSIdentifiersForResend: /* Error: Ran out of types for this method. */;
- (unsigned short)resendScheduler:didRequestRetrySendingMessageWithIds: /* Error: Ran out of types for this method. */;
- (unsigned short)resendScheduler:didRequestRetrySendingAccountWithId: /* Error: Ran out of types for this method. */;
- (unsigned short)resendScheduler:didRequestRetrySendingContentForMessageId:highPriority: /* Error: Ran out of types for this method. */;
- (unsigned short)resendScheduler:didRequestRetrySendingComposeMessageProgress:messageId:resendInterval: /* Error: Ran out of types for this method. */;
- (unsigned short)resendScheduler:didRequestEnqueueIDSIdentifierForResend:date:silent: /* Error: Ran out of types for this method. */;
- (unsigned short)resendScheduler:didRequestRetrySendingMailboxSelectionWithResendInterval: /* Error: Ran out of types for this method. */;
- (unsigned short)resendScheduler:didRequestRetrySendingAccountIdentifier:resendInterval: /* Error: Ran out of types for this method. */;
- (unsigned short)resendScheduler:didRequestRetrySendingVIPListWithResendInterval: /* Error: Ran out of types for this method. */;
- (unsigned short)resendScheduler:didRequestRetryFullSyncForMailboxes: /* Error: Ran out of types for this method. */;
- (unsigned short)resendScheduler:didRequestRetrySendingMessageDeletions:deletionsMessageIds:resendInterval: /* Error: Ran out of types for this method. */;
- (unsigned short)resendScheduler:didRequestRetrySendingDeletionForAccountWithId:resendInterval: /* Error: Ran out of types for this method. */;

@end

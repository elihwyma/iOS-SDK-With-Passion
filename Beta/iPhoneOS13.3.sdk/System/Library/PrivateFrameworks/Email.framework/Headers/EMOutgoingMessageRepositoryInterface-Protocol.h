/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/Swift-Protocol.h>

@protocol EMOutgoingMessageRepositoryInterface <Swift>

- (unsigned short)saveDraftMessage:mailboxID:previousDraftObjectID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteDraftsInMailboxID:documentID:previousDraftObjectID: /* Error: Ran out of types for this method. */;
- (unsigned short)deliverMessage:usingMailDrop:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)outboxContainsMessageFromAccountObjectID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)suspendDeliveryQueue;
- (unsigned short)resumeDeliveryQueue;
- (unsigned short)processAllQueuedMessages;
- (unsigned short)isProcessingWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)numberOfPendingMessagesWithCompletion: /* Error: Ran out of types for this method. */;

@end

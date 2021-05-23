/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/Swift-Protocol.h>

@protocol EDMessageChangeManagerSubClassMethods <Swift>

- (unsigned short)messageForDatabaseID: /* Error: Ran out of types for this method. */;
- (unsigned short)mailboxDatabaseIDForURL: /* Error: Ran out of types for this method. */;
- (unsigned short)accountForMailboxURL: /* Error: Ran out of types for this method. */;
- (unsigned short)messagesForRemoteIDs:mailboxURL: /* Error: Ran out of types for this method. */;
- (unsigned short)iterateMessagesInMailboxURLs:excludingMessages:batchSize:returnMessagesForFlagChange:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)persistNewMessages:mailboxURL:oldMessagesByNewMessage:fromSyncing: /* Error: Ran out of types for this method. */;
- (unsigned short)deletePersistedMessages: /* Error: Ran out of types for this method. */;
- (unsigned short)haveCompleteMIMEForMessage: /* Error: Ran out of types for this method. */;
- (unsigned short)applyFlagChange:toMessagesInDatabase: /* Error: Ran out of types for this method. */;
- (unsigned short)resetStatusCountsForMailboxWithURL: /* Error: Ran out of types for this method. */;
- (unsigned short)addLabels:removeLabels:toMessagesInDatabase: /* Error: Ran out of types for this method. */;
- (unsigned short)setRemoteID:onMessageWithDatabaseID: /* Error: Ran out of types for this method. */;
- (unsigned short)setData:onMessage: /* Error: Ran out of types for this method. */;
- (unsigned short)checkForNewActionsInMailboxID: /* Error: Ran out of types for this method. */;
- (unsigned short)actionHasChangedAccount: /* Error: Ran out of types for this method. */;
- (unsigned short)displayErrorForTransferAction:withResults: /* Error: Ran out of types for this method. */;
- (unsigned short)messageWasAppended: /* Error: Ran out of types for this method. */;
- (unsigned short)mailboxIsAllMail: /* Error: Ran out of types for this method. */;
- (unsigned short)mailboxPartOfAllMail: /* Error: Ran out of types for this method. */;

@end

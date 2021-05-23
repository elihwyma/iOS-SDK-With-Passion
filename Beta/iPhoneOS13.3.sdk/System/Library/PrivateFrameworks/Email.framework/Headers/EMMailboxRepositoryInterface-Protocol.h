/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/Swift-Protocol.h>

@protocol EMMailboxRepositoryInterface <Swift>

- (unsigned short)getMailboxesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)startObservingMailboxChangesWithChangeObserver:observationIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelObservation: /* Error: Ran out of types for this method. */;
- (unsigned short)refreshMailboxList;
- (unsigned short)performMailboxChangeAction:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)mailboxObjectIDsForMailboxType:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)mailboxTypeForMailboxObjectID:completionHandler: /* Error: Ran out of types for this method. */;

@end

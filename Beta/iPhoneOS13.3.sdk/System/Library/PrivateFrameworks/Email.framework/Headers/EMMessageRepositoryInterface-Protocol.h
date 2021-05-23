/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Email/Swift-Protocol.h>

@protocol EMMessageRepositoryInterface <Swift>

- (unsigned short)setCachedMetadataJSON:forKey:messageID: /* Error: Ran out of types for this method. */;
- (unsigned short)performQuery:limit:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)performCountQuery:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)performQuery:withObserver:observationIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)startCountingQuery:includingServerCountsForMailboxScope:withObserver:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)messageListItemsForObjectIDs:requestID:observationIdentifier:loadSummaryForAdditionalObjectIDs:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)performMessageChangeAction:requestID:returnUndoAction:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)requestRepresentationForMessageWithID:requestID:options:delegate:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)resetPrecomputedThreadScopesForMailboxScope: /* Error: Ran out of types for this method. */;
- (unsigned short)getCachedMetadataJSONForKey:messageID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)predictMailboxForMovingMessages:withObserver:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)loadOlderMessagesForMailboxes: /* Error: Ran out of types for this method. */;

@end

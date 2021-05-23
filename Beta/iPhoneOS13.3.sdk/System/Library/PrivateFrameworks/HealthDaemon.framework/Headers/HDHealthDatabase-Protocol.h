/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/Swift-Protocol.h>

@protocol HDHealthDatabase <Swift>

@property (nonatomic, readonly, getter=isDataProtectedByFirstUnlockAvailable) _Bool dataProtectedByFirstUnlockAvailable;
@property (nonatomic, readonly, getter=isProtectedDataAvailable) _Bool protectedDataAvailable;

- (unsigned short)performTransactionWithContext:error:block:inaccessibilityHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)addJournalEntries:error: /* Error: Ran out of types for this method. */;
- (unsigned short)addProtectedDataObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)performWhenDataProtectedByFirstUnlockIsAvailable: /* Error: Ran out of types for this method. */;
- (unsigned short)removeProtectedDataObserver: /* Error: Ran out of types for this method. */;
- (unsigned short)takeAccessibilityAssertionWithOwnerIdentifier:timeout:error: /* Error: Ran out of types for this method. */;
- (unsigned short)addProtectedDataObserver:queue: /* Error: Ran out of types for this method. */;
- (unsigned short)performWithTransactionContext:error:block: /* Error: Ran out of types for this method. */;
- (unsigned short)performAsynchronously: /* Error: Ran out of types for this method. */;
- (unsigned short)performWhenDataProtectedByFirstUnlockIsAvailableOnQueue:block: /* Error: Ran out of types for this method. */;
- (unsigned short)addDatabaseJournalMergeObserver:journalType:queue: /* Error: Ran out of types for this method. */;
- (unsigned short)removeDatabaseJournalMergeObserver:journalType: /* Error: Ran out of types for this method. */;
- (unsigned short)addJournalEntry:error: /* Error: Ran out of types for this method. */;
- (unsigned short)cloneAccessibilityAssertion:ownerIdentifier:error: /* Error: Ran out of types for this method. */;
- (unsigned short)performAsynchronouslySerial: /* Error: Ran out of types for this method. */;

@end

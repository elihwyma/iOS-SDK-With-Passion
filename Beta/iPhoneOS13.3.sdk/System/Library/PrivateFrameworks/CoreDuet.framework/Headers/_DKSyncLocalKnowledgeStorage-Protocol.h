/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@protocol _DKSyncLocalKnowledgeStorage

- (unsigned short)sortedEventsFromSyncWindows:streamNames:limit:fetchOrder:error: /* Error: Ran out of types for this method. */;
- (unsigned short)sortedEventsFromSyncWindows:streamNames:compatibility:limit:fetchOrder:error: /* Error: Ran out of types for this method. */;
- (unsigned short)tombstonesSinceDate:streamNames:limit:endDate:error: /* Error: Ran out of types for this method. */;
- (unsigned short)additionsSyncHistoryForPeer:transportName:error: /* Error: Ran out of types for this method. */;
- (unsigned short)deletionsSyncHistoryForPeer:transportName:error: /* Error: Ran out of types for this method. */;
- (unsigned short)sortedSyncDownWindowsOverlappingBetweenDate:andDate:peer:error: /* Error: Ran out of types for this method. */;
- (unsigned short)saveSyncedDownWindows:peer:transportName:error: /* Error: Ran out of types for this method. */;
- (unsigned short)lastSyncDownDeletionDateForPeer:transportName:error: /* Error: Ran out of types for this method. */;
- (unsigned short)setLastSyncDownDeletionDate:previousDate:forPeer:transportName:error: /* Error: Ran out of types for this method. */;
- (unsigned short)saveEvents:error: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteEventsWithEventIDs:error: /* Error: Ran out of types for this method. */;

@end

/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreDuet/Swift-Protocol.h>

@protocol _DKSyncRemoteKnowledgeStorage <Swift>

- (unsigned short)setFetchDelegate: /* Error: Ran out of types for this method. */;
- (unsigned short)updateStorageWithAddedEvents:deletedEventIDs:highPriority:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setHasAdditionsFlag:forPeer: /* Error: Ran out of types for this method. */;
- (unsigned short)setHasDeletionsFlag:forPeer: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchEventsFromPeer:windows:streamNames:limit:fetchOrder:highPriority:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)hasAdditionsFlagForPeer: /* Error: Ran out of types for this method. */;
- (unsigned short)hasDeletionsFlagForPeer: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPrewarmedFlag;
- (unsigned short)prewarmFetchWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchDeletedEventIDsFromPeer:sinceDate:streamNames:limit:highPriority:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAdditionsHighWaterMarkWithPeer:highPriority:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchDeletionsHighWaterMarkWithPeer:highPriority:completion: /* Error: Ran out of types for this method. */;

@end

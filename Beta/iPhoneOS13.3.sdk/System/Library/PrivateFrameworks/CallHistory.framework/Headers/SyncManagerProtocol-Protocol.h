/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <CallHistory/Swift-Protocol.h>

@protocol SyncManagerProtocol <Swift>

- (unsigned short)resetTimers;
- (unsigned short)insert: /* Error: Ran out of types for this method. */;
- (unsigned short)updateObjects: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchObjectWithUniqueId: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteObjectWithUniqueId: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteObjectsWithUniqueIds: /* Error: Ran out of types for this method. */;
- (unsigned short)timerIncoming;
- (unsigned short)timerOutgoing;
- (unsigned short)timerLifetime;
- (unsigned short)fetchObjectsWithLimits: /* Error: Ran out of types for this method. */;
- (unsigned short)insertWithoutTransaction: /* Error: Ran out of types for this method. */;
- (unsigned short)updateAllObjects: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteObjectsWithLimits: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteAllObjects;
- (unsigned short)insertRecordsWithoutTransactions: /* Error: Ran out of types for this method. */;
- (unsigned short)setRead:forCallsWithPredicate:error: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteCallsWithPredicate:error: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchCallCountWithPredicate:sortDescriptors: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchCallsWithPredicate:sortDescriptors:limit:offset:batchSize: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchCoalescedCallCountWithPredicate:sortDescriptors: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchCoalescedCallsWithPredicate:sortDescriptors:limit:offset:batchSize: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAllObjects;

@end

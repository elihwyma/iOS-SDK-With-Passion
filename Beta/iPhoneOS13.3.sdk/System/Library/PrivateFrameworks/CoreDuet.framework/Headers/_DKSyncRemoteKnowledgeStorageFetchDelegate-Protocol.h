/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreDuet/Swift-Protocol.h>

@class _DKSyncType;

@protocol _DKSyncRemoteKnowledgeStorageFetchDelegate <Swift>

@property (nonatomic, readonly) _DKSyncType *syncType;

- (unsigned short)sortedEventsFromSyncWindows:streamNames:limit:fetchOrder:error: /* Error: Ran out of types for this method. */;
- (unsigned short)sortedEventsFromSyncWindows:streamNames:compatibility:limit:fetchOrder:error: /* Error: Ran out of types for this method. */;
- (unsigned short)deletedEventIDsSinceDate:streamNames:limit:endDate:error: /* Error: Ran out of types for this method. */;

@end

/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/Swift-Protocol.h>

@class NSArray, NSDictionary;

@protocol HDSyncEngine <Swift>

@property (copy, nonatomic, readonly) NSArray *allOrderedSyncEntities;
@property (copy, nonatomic, readonly) NSDictionary *allSyncEntitiesByIdentifier;
@property (copy, nonatomic) CDUnknownBlockType unitTest_didCompleteReadTransaction;

- (unsigned short)performSyncSession:error: /* Error: Ran out of types for this method. */;
- (unsigned short)resetStore: /* Error: Ran out of types for this method. */;
- (unsigned short)applySyncChange:forStore:error: /* Error: Ran out of types for this method. */;
- (unsigned short)applyAcknowledgedAnchorMap:forStore:resetNext:resetInvalid:error: /* Error: Ran out of types for this method. */;
- (unsigned short)getReceivedAnchorMap:forStore:error: /* Error: Ran out of types for this method. */;
- (unsigned short)resetAnchorsWithFailedChanges:store: /* Error: Ran out of types for this method. */;
- (unsigned short)session:requiresSyncWithAnchors:error: /* Error: Ran out of types for this method. */;

@end

/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/Swift-Protocol.h>

@protocol HDSyncStore <Swift>

@property (readonly) int protocolVersion;
@property (readonly) long long syncStoreType;

- (unsigned short)profile;
- (unsigned short)syncStoreIdentifier;
- (unsigned short)databaseIdentifier;
- (unsigned short)syncProvenance;
- (unsigned short)orderedSyncEntities;
- (unsigned short)supportsSpeculativeChangesForSyncEntityClass: /* Error: Ran out of types for this method. */;
- (unsigned short)syncEpoch;
- (unsigned short)syncStoreDefaultSourceBundleIdentifier;
- (unsigned short)syncEntityDependenciesForSyncEntity: /* Error: Ran out of types for this method. */;
- (unsigned short)canRecieveSyncObjectsForEntityClass: /* Error: Ran out of types for this method. */;
- (unsigned short)enforceSyncEntityOrdering;
- (unsigned short)shouldContinueAfterAnchorValidationError: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldEnforceSequenceOrdering;
- (unsigned short)expectedSequenceNumberForSyncEntityClass: /* Error: Ran out of types for this method. */;
- (unsigned short)setExpectedSequenceNumber:forSyncEntityClass: /* Error: Ran out of types for this method. */;

@end

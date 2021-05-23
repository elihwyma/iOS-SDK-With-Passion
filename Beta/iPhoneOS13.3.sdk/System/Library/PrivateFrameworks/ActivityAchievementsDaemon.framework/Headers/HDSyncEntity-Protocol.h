/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <ActivityAchievementsDaemon/Swift-Protocol.h>

@protocol HDSyncEntity <Swift>

+ (unsigned short)syncEntityIdentifier;
+ (unsigned short)syncEntityDependenciesForSyncProtocolVersion: /* Error: Ran out of types for this method. */;
+ (unsigned short)decodeSyncObjectWithData: /* Error: Ran out of types for this method. */;
+ (unsigned short)receiveSyncObjects:syncStore:profile:error: /* Error: Ran out of types for this method. */;

+ (unsigned short)generateSyncObjectsForSession:syncAnchorRange:profile:messageHandler:error: /* Error: Ran out of types for this method. */;
+ (unsigned short)generateSyncObjectsForSession:predicate:syncAnchorRange:maxEncodedBytesPerMessage:profile:error:handler: /* Error: Ran out of types for this method. */;
+ (unsigned short)nextSyncAnchorWithSession:startSyncAnchor:profile:error: /* Error: Ran out of types for this method. */;
+ (unsigned short)nextSyncAnchorWithSession:predicate:startSyncAnchor:profile:error: /* Error: Ran out of types for this method. */;
+ (unsigned short)supportsSyncStore: /* Error: Ran out of types for this method. */;
+ (unsigned short)excludedSyncStoresForSession: /* Error: Ran out of types for this method. */;
+ (unsigned short)pruneSyncedObjectsThroughAnchor:limit:nowDate:profile:error: /* Error: Ran out of types for this method. */;

@end

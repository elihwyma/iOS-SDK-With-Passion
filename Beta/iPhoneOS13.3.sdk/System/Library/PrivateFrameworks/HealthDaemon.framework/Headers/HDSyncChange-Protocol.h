/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/Swift-Protocol.h>

@class NSNumber;

@protocol HDSyncChange <Swift>

@property (nonatomic, readonly, getter=isSpeculative) _Bool speculative;
@property (nonatomic, readonly) struct HDSyncAnchorRange syncAnchorRange;
@property (nonatomic, readonly) NSNumber *sequenceNumber;
@property (nonatomic, readonly) _Bool done;

- (unsigned short)syncEntityIdentifier;
- (unsigned short)syncEntityClassForProfile: /* Error: Ran out of types for this method. */;
- (unsigned short)setObjects:syncAnchorRange:requiredAnchorMap: /* Error: Ran out of types for this method. */;
- (unsigned short)setSequenceNumber:done: /* Error: Ran out of types for this method. */;
- (unsigned short)requiredAnchorMapWithProfile:error: /* Error: Ran out of types for this method. */;
- (unsigned short)decodedObjectsForProfile:error: /* Error: Ran out of types for this method. */;

@end

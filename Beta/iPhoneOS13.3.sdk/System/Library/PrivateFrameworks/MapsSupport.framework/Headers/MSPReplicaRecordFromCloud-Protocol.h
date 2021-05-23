/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/Swift-Protocol.h>

@class CKRecord, NSUUID;

@protocol MSPReplicaRecordFromCloud <Swift>

@property (retain, nonatomic) CKRecord *record;
@property (nonatomic, readonly, getter=isTombstoneRepresentedByCloudRecord) _Bool tombstoneRepresentedByCloudRecord;
@property (nonatomic, readonly, getter=recordIdentifier) NSUUID *recordIdentifier;

+ (unsigned short)tombstoneWithRecordIdentifier: /* Error: Ran out of types for this method. */;
+ (unsigned short)recordFromInsertEdit: /* Error: Ran out of types for this method. */;

- (unsigned short)tombstoneRecordRepresentation;
- (unsigned short)recordRepresentation;
- (unsigned short)applyUpdateEdit: /* Error: Ran out of types for this method. */;

@end

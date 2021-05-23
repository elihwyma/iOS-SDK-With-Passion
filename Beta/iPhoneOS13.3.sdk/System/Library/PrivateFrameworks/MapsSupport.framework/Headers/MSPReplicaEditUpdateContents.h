/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/MSPReplicaEdit.h>

@class MSPVectorTimestamp, NSData;

@interface MSPReplicaEditUpdateContents : MSPReplicaEdit

{
    NSData *_contents;
    MSPVectorTimestamp *_contentsTimestamp;
}

@property (nonatomic, readonly) NSData *contents;
@property (nonatomic, readonly) MSPVectorTimestamp *contentsTimestamp;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)_initWithIdentifierOfAffectedRecord:(id)arg1;
- (id)_initToTurnIntoTombstoneRecordWithIdentifier:(id)arg1;
- (id)_initToMoveRecordWithIdentifier:(id)arg1 toContents:(id)arg2 contentsTimestamp:(id)arg3;

@end

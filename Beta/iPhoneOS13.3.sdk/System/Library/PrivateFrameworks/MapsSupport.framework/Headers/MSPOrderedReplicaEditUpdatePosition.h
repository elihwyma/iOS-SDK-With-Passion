/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/MSPReplicaEdit.h>

@class MSPPosition, MSPVectorTimestamp;

@interface MSPOrderedReplicaEditUpdatePosition : MSPReplicaEdit

{
    MSPPosition *_position;
    MSPVectorTimestamp *_positionTimestamp;
}

@property (nonatomic, readonly) MSPPosition *position;
@property (nonatomic, readonly) MSPVectorTimestamp *positionTimestamp;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)_initToMoveRecordWithIdentifier:(id)arg1 toPosition:(id)arg2 positionTimestamp:(id)arg3;
- (id)_initWithIdentifierOfAffectedRecord:(id)arg1;

@end

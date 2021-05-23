/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/MSPReplicaEditRemoveTombstone.h>

@class NSDate;

@interface MSPHistoryReplicaEditUpdateModificationDate : MSPReplicaEditRemoveTombstone

{
    NSDate *_modificationDate;
}

@property (nonatomic, readonly) NSDate *modificationDate;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)_initWithIdentifierOfAffectedRecord:(id)arg1;
- (id)_initToMoveRecordWithIdentifier:(id)arg1 toModificationDate:(id)arg2;

@end

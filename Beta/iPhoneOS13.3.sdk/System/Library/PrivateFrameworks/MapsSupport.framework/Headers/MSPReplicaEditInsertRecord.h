/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/MSPReplicaEdit.h>

@protocol MSPReplicaRecord;

@interface MSPReplicaEditInsertRecord : MSPReplicaEdit

{
    id <MSPReplicaRecord> _recordWithInformationToInsert;
}

@property (nonatomic, readonly) id <MSPReplicaRecord> recordWithInformationToInsert;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)_initWithIdentifierOfAffectedRecord:(id)arg1;
- (id)_initWithRecordToInsert:(id)arg1 identifier:(id)arg2;

@end

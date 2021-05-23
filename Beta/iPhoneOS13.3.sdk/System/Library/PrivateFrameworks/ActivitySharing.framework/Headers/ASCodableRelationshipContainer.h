/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <ProtocolBuffer/PBCodable.h>

@class ASCodableCloudKitRelationship, NSData;

@interface ASCodableRelationshipContainer : PBCodable

{
    long long _version;
    ASCodableCloudKitRelationship *_relationship;
    NSData *_relationshipShareID;
    NSData *_remoteActivityShareID;
    NSData *_remoteRelationshipShareID;
    NSData *_systemFieldsOnlyRecord;
    struct {
        unsigned int version:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasRelationship;
@property (retain, nonatomic) ASCodableCloudKitRelationship *relationship;
@property (nonatomic) _Bool hasVersion;
@property (nonatomic) long long version;
@property (nonatomic, readonly) _Bool hasSystemFieldsOnlyRecord;
@property (retain, nonatomic) NSData *systemFieldsOnlyRecord;
@property (nonatomic, readonly) _Bool hasRelationshipShareID;
@property (retain, nonatomic) NSData *relationshipShareID;
@property (nonatomic, readonly) _Bool hasRemoteRelationshipShareID;
@property (retain, nonatomic) NSData *remoteRelationshipShareID;
@property (nonatomic, readonly) _Bool hasRemoteActivityShareID;
@property (retain, nonatomic) NSData *remoteActivityShareID;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end

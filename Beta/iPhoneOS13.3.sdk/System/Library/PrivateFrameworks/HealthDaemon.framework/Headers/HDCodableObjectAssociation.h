/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSData;

@interface HDCodableObjectAssociation : PBCodable <Swift>

{
    NSData *_associationUuid;
    NSData *_objectUuids;
}

@property (nonatomic, readonly) _Bool hasAssociationUuid;
@property (retain, nonatomic) NSData *associationUuid;
@property (nonatomic, readonly) _Bool hasObjectUuids;
@property (retain, nonatomic) NSData *objectUuids;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)initWithAssociationUUID:(id)arg1;
- (id)decodedAssociationUUID;

@end

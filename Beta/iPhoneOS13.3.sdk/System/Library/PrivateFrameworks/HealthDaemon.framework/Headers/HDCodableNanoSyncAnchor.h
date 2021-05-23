/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableEntityIdentifier;

@interface HDCodableNanoSyncAnchor : PBCodable <Swift>

{
    long long _anchor;
    HDCodableEntityIdentifier *_entityIdentifier;
    int _objectType;
    struct {
        unsigned int anchor:1;
        unsigned int objectType:1;
    } _has;
}

@property (nonatomic) _Bool hasObjectType;
@property (nonatomic) int objectType;
@property (nonatomic) _Bool hasAnchor;
@property (nonatomic) long long anchor;
@property (nonatomic, readonly) _Bool hasEntityIdentifier;
@property (retain, nonatomic) HDCodableEntityIdentifier *entityIdentifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)objectTypeAsString:(int)arg1;
- (int)StringAsObjectType:(id)arg1;
- (id)nanoSyncDescription;

@end

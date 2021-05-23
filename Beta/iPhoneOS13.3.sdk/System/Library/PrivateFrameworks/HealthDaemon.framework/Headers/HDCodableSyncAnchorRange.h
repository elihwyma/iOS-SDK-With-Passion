/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableEntityIdentifier;

@interface HDCodableSyncAnchorRange : PBCodable <Swift>

{
    long long _endAnchor;
    long long _entityType;
    long long _startAnchor;
    HDCodableEntityIdentifier *_entityIdentifier;
    struct {
        unsigned int endAnchor:1;
        unsigned int entityType:1;
        unsigned int startAnchor:1;
    } _has;
}

@property (nonatomic) _Bool hasEntityType;
@property (nonatomic) long long entityType;
@property (nonatomic) _Bool hasStartAnchor;
@property (nonatomic) long long startAnchor;
@property (nonatomic) _Bool hasEndAnchor;
@property (nonatomic) long long endAnchor;
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

@end

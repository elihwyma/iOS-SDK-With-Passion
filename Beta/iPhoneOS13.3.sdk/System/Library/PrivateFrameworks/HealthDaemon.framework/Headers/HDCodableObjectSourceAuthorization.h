/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSData;

@interface HDCodableObjectSourceAuthorization : PBCodable <Swift>

{
    long long _authorizationStatus;
    double _modificationDate;
    NSData *_sourceUUID;
    struct {
        unsigned int authorizationStatus:1;
        unsigned int modificationDate:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasSourceUUID;
@property (retain, nonatomic) NSData *sourceUUID;
@property (nonatomic) _Bool hasAuthorizationStatus;
@property (nonatomic) long long authorizationStatus;
@property (nonatomic) _Bool hasModificationDate;
@property (nonatomic) double modificationDate;

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

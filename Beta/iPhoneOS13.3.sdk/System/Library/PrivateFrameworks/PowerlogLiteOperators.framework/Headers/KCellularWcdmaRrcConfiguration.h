/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@interface KCellularWcdmaRrcConfiguration : PBCodable

{
    unsigned long long _timestamp;
    unsigned int _drxCycleLengthMs;
    unsigned int _subsId;
    _Bool _isDcConfigured;
    _Bool _isMimoConfigured;
    struct {
        unsigned int timestamp:1;
        unsigned int drxCycleLengthMs:1;
        unsigned int subsId:1;
        unsigned int isDcConfigured:1;
        unsigned int isMimoConfigured:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasDrxCycleLengthMs;
@property (nonatomic) unsigned int drxCycleLengthMs;
@property (nonatomic) _Bool hasIsMimoConfigured;
@property (nonatomic) _Bool isMimoConfigured;
@property (nonatomic) _Bool hasIsDcConfigured;
@property (nonatomic) _Bool isDcConfigured;
@property (nonatomic) _Bool hasSubsId;
@property (nonatomic) unsigned int subsId;

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

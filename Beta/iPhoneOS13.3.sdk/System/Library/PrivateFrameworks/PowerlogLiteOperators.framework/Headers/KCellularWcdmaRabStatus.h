/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@interface KCellularWcdmaRabStatus : PBCodable

{
    unsigned long long _timestamp;
    unsigned int _hsRabCount;
    unsigned int _r99RabCount;
    unsigned int _subsId;
    unsigned int _totalRabCount;
    struct {
        unsigned int timestamp:1;
        unsigned int hsRabCount:1;
        unsigned int r99RabCount:1;
        unsigned int subsId:1;
        unsigned int totalRabCount:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasTotalRabCount;
@property (nonatomic) unsigned int totalRabCount;
@property (nonatomic) _Bool hasR99RabCount;
@property (nonatomic) unsigned int r99RabCount;
@property (nonatomic) _Bool hasHsRabCount;
@property (nonatomic) unsigned int hsRabCount;
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

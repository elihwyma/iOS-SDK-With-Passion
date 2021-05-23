/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@interface KCellularWcdmaCpcStat : PBCodable

{
    unsigned long long _timestamp;
    unsigned int _energy;
    unsigned int _rxOnDurationMs;
    unsigned int _rxTxOffDurationMs;
    unsigned int _subsId;
    unsigned int _totalDurationMs;
    struct {
        unsigned int timestamp:1;
        unsigned int energy:1;
        unsigned int rxOnDurationMs:1;
        unsigned int rxTxOffDurationMs:1;
        unsigned int subsId:1;
        unsigned int totalDurationMs:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasTotalDurationMs;
@property (nonatomic) unsigned int totalDurationMs;
@property (nonatomic) _Bool hasRxTxOffDurationMs;
@property (nonatomic) unsigned int rxTxOffDurationMs;
@property (nonatomic) _Bool hasRxOnDurationMs;
@property (nonatomic) unsigned int rxOnDurationMs;
@property (nonatomic) _Bool hasEnergy;
@property (nonatomic) unsigned int energy;
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

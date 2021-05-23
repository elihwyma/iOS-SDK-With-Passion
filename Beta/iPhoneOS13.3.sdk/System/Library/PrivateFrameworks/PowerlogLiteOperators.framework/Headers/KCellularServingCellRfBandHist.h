/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface KCellularServingCellRfBandHist : PBCodable

{
    unsigned long long _timestamp;
    unsigned int _durationMs;
    NSMutableArray *_pcellBandDurations;
    unsigned int _subsId;
    CDStruct_e1e72391 _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasDurationMs;
@property (nonatomic) unsigned int durationMs;
@property (retain, nonatomic) NSMutableArray *pcellBandDurations;
@property (nonatomic) _Bool hasSubsId;
@property (nonatomic) unsigned int subsId;

+ (Class)pcellBandDurationType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addPcellBandDuration:(id)arg1;
- (unsigned long long)pcellBandDurationsCount;
- (void)clearPcellBandDurations;
- (id)pcellBandDurationAtIndex:(unsigned long long)arg1;

@end

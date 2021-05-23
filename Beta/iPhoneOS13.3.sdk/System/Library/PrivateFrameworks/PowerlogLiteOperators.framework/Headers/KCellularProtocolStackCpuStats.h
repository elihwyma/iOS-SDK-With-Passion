/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface KCellularProtocolStackCpuStats : PBCodable

{
    unsigned long long _timestamp;
    NSMutableArray *_cores;
    unsigned int _durationMs;
    unsigned int _voltageVm;
    struct {
        unsigned int timestamp:1;
        unsigned int durationMs:1;
        unsigned int voltageVm:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasDurationMs;
@property (nonatomic) unsigned int durationMs;
@property (nonatomic) _Bool hasVoltageVm;
@property (nonatomic) unsigned int voltageVm;
@property (retain, nonatomic) NSMutableArray *cores;

+ (Class)coresType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addCores:(id)arg1;
- (unsigned long long)coresCount;
- (void)clearCores;
- (id)coresAtIndex:(unsigned long long)arg1;

@end

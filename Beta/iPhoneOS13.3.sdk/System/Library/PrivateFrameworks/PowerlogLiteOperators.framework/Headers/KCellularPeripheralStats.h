/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface KCellularPeripheralStats : PBCodable

{
    unsigned long long _timestamp;
    unsigned int _durationMs;
    NSMutableArray *_peripherals;
    struct {
        unsigned int timestamp:1;
        unsigned int durationMs:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasDurationMs;
@property (nonatomic) unsigned int durationMs;
@property (retain, nonatomic) NSMutableArray *peripherals;

+ (Class)peripheralsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addPeripherals:(id)arg1;
- (unsigned long long)peripheralsCount;
- (void)clearPeripherals;
- (id)peripheralsAtIndex:(unsigned long long)arg1;

@end

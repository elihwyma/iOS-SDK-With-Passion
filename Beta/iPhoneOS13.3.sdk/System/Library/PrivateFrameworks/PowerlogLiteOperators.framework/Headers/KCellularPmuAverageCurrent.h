/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface KCellularPmuAverageCurrent : PBCodable

{
    unsigned long long _timestamp;
    NSMutableArray *_regulatorCurrents;
    unsigned int _version;
    struct {
        unsigned int timestamp:1;
        unsigned int version:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *regulatorCurrents;
@property (nonatomic) _Bool hasVersion;
@property (nonatomic) unsigned int version;

+ (Class)regulatorCurrentType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addRegulatorCurrent:(id)arg1;
- (unsigned long long)regulatorCurrentsCount;
- (void)clearRegulatorCurrents;
- (id)regulatorCurrentAtIndex:(unsigned long long)arg1;

@end

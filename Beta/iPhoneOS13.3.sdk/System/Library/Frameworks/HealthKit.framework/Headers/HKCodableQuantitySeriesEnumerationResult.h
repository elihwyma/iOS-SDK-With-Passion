/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthKit/Swift-Protocol.h>

@class NSData;

@interface HKCodableQuantitySeriesEnumerationResult : PBCodable <Swift>

{
    long long _count;
    long long _dataTypeCode;
    double _endTime;
    long long _persistentID;
    long long _seriesIndex;
    long long _sourceID;
    double _startTime;
    double _value;
    NSData *_quantitySample;
    NSData *_uuid;
    struct {
        unsigned int count:1;
        unsigned int dataTypeCode:1;
        unsigned int endTime:1;
        unsigned int persistentID:1;
        unsigned int seriesIndex:1;
        unsigned int sourceID:1;
        unsigned int startTime:1;
        unsigned int value:1;
    } _has;
}

@property (nonatomic) _Bool hasPersistentID;
@property (nonatomic) long long persistentID;
@property (nonatomic) _Bool hasDataTypeCode;
@property (nonatomic) long long dataTypeCode;
@property (nonatomic, readonly) _Bool hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic) _Bool hasValue;
@property (nonatomic) double value;
@property (nonatomic) _Bool hasCount;
@property (nonatomic) long long count;
@property (nonatomic) _Bool hasStartTime;
@property (nonatomic) double startTime;
@property (nonatomic) _Bool hasEndTime;
@property (nonatomic) double endTime;
@property (nonatomic) _Bool hasSourceID;
@property (nonatomic) long long sourceID;
@property (nonatomic) _Bool hasSeriesIndex;
@property (nonatomic) long long seriesIndex;
@property (nonatomic, readonly) _Bool hasQuantitySample;
@property (retain, nonatomic) NSData *quantitySample;

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

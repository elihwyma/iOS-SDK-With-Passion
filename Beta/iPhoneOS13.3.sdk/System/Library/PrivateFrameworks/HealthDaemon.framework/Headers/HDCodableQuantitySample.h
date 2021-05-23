/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableSample, NSMutableArray, NSString;

@interface HDCodableQuantitySample : PBCodable <Swift>

{
    long long _count;
    double _max;
    double _min;
    double _mostRecent;
    double _mostRecentDate;
    double _mostRecentDuration;
    double _valueInCanonicalUnit;
    double _valueInOriginalUnit;
    NSString *_originalUnitString;
    NSMutableArray *_quantitySeriesDatas;
    HDCodableSample *_sample;
    _Bool _final;
    _Bool _frozen;
    struct {
        unsigned int count:1;
        unsigned int max:1;
        unsigned int min:1;
        unsigned int mostRecent:1;
        unsigned int mostRecentDate:1;
        unsigned int mostRecentDuration:1;
        unsigned int valueInCanonicalUnit:1;
        unsigned int valueInOriginalUnit:1;
        unsigned int final:1;
        unsigned int frozen:1;
    } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic) _Bool hasValueInCanonicalUnit;
@property (nonatomic) double valueInCanonicalUnit;
@property (nonatomic) _Bool hasValueInOriginalUnit;
@property (nonatomic) double valueInOriginalUnit;
@property (nonatomic, readonly) _Bool hasOriginalUnitString;
@property (retain, nonatomic) NSString *originalUnitString;
@property (nonatomic) _Bool hasFrozen;
@property (nonatomic) _Bool frozen;
@property (nonatomic) _Bool hasCount;
@property (nonatomic) long long count;
@property (nonatomic) _Bool hasFinal;
@property (nonatomic) _Bool final;
@property (nonatomic) _Bool hasMin;
@property (nonatomic) double min;
@property (nonatomic) _Bool hasMax;
@property (nonatomic) double max;
@property (nonatomic) _Bool hasMostRecent;
@property (nonatomic) double mostRecent;
@property (nonatomic) _Bool hasMostRecentDate;
@property (nonatomic) double mostRecentDate;
@property (retain, nonatomic) NSMutableArray *quantitySeriesDatas;
@property (nonatomic) _Bool hasMostRecentDuration;
@property (nonatomic) double mostRecentDuration;

+ (Class)quantitySeriesDataType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (_Bool)applyToObject:(id)arg1;
- (void)addQuantitySeriesData:(id)arg1;
- (unsigned long long)quantitySeriesDatasCount;
- (void)clearQuantitySeriesDatas;
- (id)quantitySeriesDataAtIndex:(unsigned long long)arg1;
- (_Bool)_applyToDiscreteQuantitySeriesSample:(id)arg1;
- (_Bool)isSeries;

@end

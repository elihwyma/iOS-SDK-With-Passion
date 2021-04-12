//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDDecoding-Protocol.h>

@class HDCodableSample, NSMutableArray, NSString;

@interface HDCodableQuantitySample : PBCodable <HDDecoding, NSCopying>
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
    BOOL _final;
    BOOL _frozen;
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

+ (Class)quantitySeriesDataType;
@property(nonatomic) double mostRecentDuration; // @synthesize mostRecentDuration=_mostRecentDuration;
@property(retain, nonatomic) NSMutableArray *quantitySeriesDatas; // @synthesize quantitySeriesDatas=_quantitySeriesDatas;
@property(nonatomic) double mostRecentDate; // @synthesize mostRecentDate=_mostRecentDate;
@property(nonatomic) double mostRecent; // @synthesize mostRecent=_mostRecent;
@property(nonatomic) double max; // @synthesize max=_max;
@property(nonatomic) double min; // @synthesize min=_min;
@property(nonatomic) BOOL final; // @synthesize final=_final;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) BOOL frozen; // @synthesize frozen=_frozen;
@property(retain, nonatomic) NSString *originalUnitString; // @synthesize originalUnitString=_originalUnitString;
@property(nonatomic) double valueInOriginalUnit; // @synthesize valueInOriginalUnit=_valueInOriginalUnit;
@property(nonatomic) double valueInCanonicalUnit; // @synthesize valueInCanonicalUnit=_valueInCanonicalUnit;
@property(retain, nonatomic) HDCodableSample *sample; // @synthesize sample=_sample;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) NSUInteger hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(nonatomic) BOOL hasMostRecentDuration;
- (id)quantitySeriesDataAtIndex:(NSUInteger)arg1;
- (NSUInteger)quantitySeriesDatasCount;
- (void)addQuantitySeriesData:(id)arg1;
- (void)clearQuantitySeriesDatas;
@property(nonatomic) BOOL hasMostRecentDate;
@property(nonatomic) BOOL hasMostRecent;
@property(nonatomic) BOOL hasMax;
@property(nonatomic) BOOL hasMin;
@property(nonatomic) BOOL hasFinal;
@property(nonatomic) BOOL hasCount;
@property(nonatomic) BOOL hasFrozen;
@property(readonly, nonatomic) BOOL hasOriginalUnitString;
@property(nonatomic) BOOL hasValueInOriginalUnit;
@property(nonatomic) BOOL hasValueInCanonicalUnit;
@property(readonly, nonatomic) BOOL hasSample;
- (BOOL)_applyToDiscreteQuantitySeriesSample:(id)arg1;
- (BOOL)isSeries;
- (BOOL)applyToObject:(id)arg1;

@end


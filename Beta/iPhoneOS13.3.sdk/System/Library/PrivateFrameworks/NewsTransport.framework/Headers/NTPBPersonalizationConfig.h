/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NTPBBinningConfig, NTPBPersonalizationTreatment;

@interface NTPBPersonalizationConfig : PBCodable

{
    long long _moduloForHashing;
    NTPBBinningConfig *_binningConfig;
    NTPBPersonalizationTreatment *_defaultPersonalizationTreatment;
    NSMutableArray *_personalizationBuckets;
    NSMutableArray *_personalizationTreatments;
    CDStruct_3f5c4e18 _has;
}

@property (nonatomic, readonly) _Bool hasBinningConfig;
@property (retain, nonatomic) NTPBBinningConfig *binningConfig;
@property (nonatomic) _Bool hasModuloForHashing;
@property (nonatomic) long long moduloForHashing;
@property (nonatomic, readonly) _Bool hasDefaultPersonalizationTreatment;
@property (retain, nonatomic) NTPBPersonalizationTreatment *defaultPersonalizationTreatment;
@property (retain, nonatomic) NSMutableArray *personalizationBuckets;
@property (retain, nonatomic) NSMutableArray *personalizationTreatments;

+ (Class)personalizationBucketsType;
+ (Class)personalizationTreatmentsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addPersonalizationBuckets:(id)arg1;
- (void)addPersonalizationTreatments:(id)arg1;
- (void)clearPersonalizationBuckets;
- (unsigned long long)personalizationBucketsCount;
- (id)personalizationBucketsAtIndex:(unsigned long long)arg1;
- (void)clearPersonalizationTreatments;
- (unsigned long long)personalizationTreatmentsCount;
- (id)personalizationTreatmentsAtIndex:(unsigned long long)arg1;

@end

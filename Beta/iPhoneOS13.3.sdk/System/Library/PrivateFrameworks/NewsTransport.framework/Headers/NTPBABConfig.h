/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NTPBConfig;

@interface NTPBABConfig : PBCodable

{
    long long _populationCeiling;
    long long _populationFloor;
    NSMutableArray *_configBuckets;
    NTPBConfig *_configControl;
    struct {
        unsigned int populationCeiling:1;
        unsigned int populationFloor:1;
    } _has;
}

@property (nonatomic) _Bool hasPopulationFloor;
@property (nonatomic) long long populationFloor;
@property (nonatomic) _Bool hasPopulationCeiling;
@property (nonatomic) long long populationCeiling;
@property (nonatomic, readonly) _Bool hasConfigControl;
@property (retain, nonatomic) NTPBConfig *configControl;
@property (retain, nonatomic) NSMutableArray *configBuckets;

+ (Class)configBucketsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addConfigBuckets:(id)arg1;
- (void)clearConfigBuckets;
- (unsigned long long)configBucketsCount;
- (id)configBucketsAtIndex:(unsigned long long)arg1;

@end

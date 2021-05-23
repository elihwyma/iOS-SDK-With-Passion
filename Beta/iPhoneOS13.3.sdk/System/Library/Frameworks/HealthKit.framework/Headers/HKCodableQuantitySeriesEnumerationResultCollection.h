/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthKit/Swift-Protocol.h>

@class NSMutableArray;

@interface HKCodableQuantitySeriesEnumerationResultCollection : PBCodable <Swift>

{
    double _latestSampleStartTime;
    NSMutableArray *_results;
    struct {
        unsigned int latestSampleStartTime:1;
    } _has;
}

@property (retain, nonatomic) NSMutableArray *results;
@property (nonatomic) _Bool hasLatestSampleStartTime;
@property (nonatomic) double latestSampleStartTime;

+ (Class)resultsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addResults:(id)arg1;
- (void)clearResults;
- (unsigned long long)resultsCount;
- (id)resultsAtIndex:(unsigned long long)arg1;

@end

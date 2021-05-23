/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@interface NTPBTelemetryStats : PBCodable

{
    long long _count;
    long long _max;
    long long _mean;
    long long _median;
    long long _min;
    long long _percentile95;
    struct {
        unsigned int count:1;
        unsigned int max:1;
        unsigned int mean:1;
        unsigned int median:1;
        unsigned int min:1;
        unsigned int percentile95:1;
    } _has;
}

@property (nonatomic) _Bool hasCount;
@property (nonatomic) long long count;
@property (nonatomic) _Bool hasMin;
@property (nonatomic) long long min;
@property (nonatomic) _Bool hasMax;
@property (nonatomic) long long max;
@property (nonatomic) _Bool hasMean;
@property (nonatomic) long long mean;
@property (nonatomic) _Bool hasMedian;
@property (nonatomic) long long median;
@property (nonatomic) _Bool hasPercentile95;
@property (nonatomic) long long percentile95;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDSleepAlarmAWDSleepAlarmStatistics : PBCodable <Swift>

{
    long long _mean;
    long long _median;
    long long _percentile25;
    long long _percentile75;
    long long _stddev;
    struct {
        unsigned int mean:1;
        unsigned int median:1;
        unsigned int percentile25:1;
        unsigned int percentile75:1;
        unsigned int stddev:1;
    } _has;
}

@property (nonatomic) _Bool hasMean;
@property (nonatomic) long long mean;
@property (nonatomic) _Bool hasStddev;
@property (nonatomic) long long stddev;
@property (nonatomic) _Bool hasPercentile25;
@property (nonatomic) long long percentile25;
@property (nonatomic) _Bool hasPercentile75;
@property (nonatomic) long long percentile75;
@property (nonatomic) _Bool hasMedian;
@property (nonatomic) long long median;

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

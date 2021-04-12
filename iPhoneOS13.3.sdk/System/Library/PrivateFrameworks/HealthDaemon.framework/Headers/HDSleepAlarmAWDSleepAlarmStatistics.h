//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@interface HDSleepAlarmAWDSleepAlarmStatistics : PBCodable <NSCopying>
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

@property(nonatomic) long long median; // @synthesize median=_median;
@property(nonatomic) long long percentile75; // @synthesize percentile75=_percentile75;
@property(nonatomic) long long percentile25; // @synthesize percentile25=_percentile25;
@property(nonatomic) long long stddev; // @synthesize stddev=_stddev;
@property(nonatomic) long long mean; // @synthesize mean=_mean;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasMedian;
@property(nonatomic) BOOL hasPercentile75;
@property(nonatomic) BOOL hasPercentile25;
@property(nonatomic) BOOL hasStddev;
@property(nonatomic) BOOL hasMean;

@end


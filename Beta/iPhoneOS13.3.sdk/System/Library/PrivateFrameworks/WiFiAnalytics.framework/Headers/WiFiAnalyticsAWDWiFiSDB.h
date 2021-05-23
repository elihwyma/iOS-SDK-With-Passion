/*
 Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface WiFiAnalyticsAWDWiFiSDB : PBCodable

{
    unsigned long long _timestamp;
    unsigned int _realTimeSessionStateResultingInSubmission;
    NSMutableArray *_sliceStats;
    struct {
        unsigned int timestamp:1;
        unsigned int realTimeSessionStateResultingInSubmission:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *sliceStats;
@property (nonatomic) _Bool hasRealTimeSessionStateResultingInSubmission;
@property (nonatomic) unsigned int realTimeSessionStateResultingInSubmission;

+ (Class)sliceStatsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addSliceStats:(id)arg1;
- (unsigned long long)sliceStatsCount;
- (void)clearSliceStats;
- (id)sliceStatsAtIndex:(unsigned long long)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, WiFiAnalyticsAWDChipCountersRx, WiFiAnalyticsAWDChipCountersTx, WiFiAnalyticsAWDChipErrorCountersTx, WiFiAnalyticsAWDMacCountersRx, WiFiAnalyticsAWDMacCountersRxErrors, WiFiAnalyticsAWDRxPhyErrors, WiFiAnalyticsAWDWPA2Counters, WiFiAnalyticsAWDWiFiMetricsManagerFrameCounterStats;

@interface WiFiAnalyticsAWDWiFiMetricsManagerChipCounters : PBCodable

{
    unsigned long long _timestamp;
    NSMutableArray *_frameCounterPerInterfaces;
    WiFiAnalyticsAWDWiFiMetricsManagerFrameCounterStats *_frameCounters;
    WiFiAnalyticsAWDWPA2Counters *_mcastWPA2Counters;
    WiFiAnalyticsAWDChipCountersRx *_rxGeneralStats;
    WiFiAnalyticsAWDMacCountersRx *_rxMACCounterStats;
    WiFiAnalyticsAWDMacCountersRxErrors *_rxMACErrorStats;
    WiFiAnalyticsAWDRxPhyErrors *_rxPhyErrors;
    WiFiAnalyticsAWDChipErrorCountersTx *_txErrorStats;
    WiFiAnalyticsAWDChipCountersTx *_txGeneralStats;
    WiFiAnalyticsAWDWPA2Counters *_ucastWPA2Counters;
    CDStruct_b5306035 _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasFrameCounters;
@property (retain, nonatomic) WiFiAnalyticsAWDWiFiMetricsManagerFrameCounterStats *frameCounters;
@property (nonatomic, readonly) _Bool hasTxGeneralStats;
@property (retain, nonatomic) WiFiAnalyticsAWDChipCountersTx *txGeneralStats;
@property (nonatomic, readonly) _Bool hasTxErrorStats;
@property (retain, nonatomic) WiFiAnalyticsAWDChipErrorCountersTx *txErrorStats;
@property (nonatomic, readonly) _Bool hasRxGeneralStats;
@property (retain, nonatomic) WiFiAnalyticsAWDChipCountersRx *rxGeneralStats;
@property (nonatomic, readonly) _Bool hasRxMACErrorStats;
@property (retain, nonatomic) WiFiAnalyticsAWDMacCountersRxErrors *rxMACErrorStats;
@property (nonatomic, readonly) _Bool hasRxMACCounterStats;
@property (retain, nonatomic) WiFiAnalyticsAWDMacCountersRx *rxMACCounterStats;
@property (nonatomic, readonly) _Bool hasRxPhyErrors;
@property (retain, nonatomic) WiFiAnalyticsAWDRxPhyErrors *rxPhyErrors;
@property (nonatomic, readonly) _Bool hasUcastWPA2Counters;
@property (retain, nonatomic) WiFiAnalyticsAWDWPA2Counters *ucastWPA2Counters;
@property (nonatomic, readonly) _Bool hasMcastWPA2Counters;
@property (retain, nonatomic) WiFiAnalyticsAWDWPA2Counters *mcastWPA2Counters;
@property (retain, nonatomic) NSMutableArray *frameCounterPerInterfaces;

+ (Class)frameCounterPerInterfaceType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addFrameCounterPerInterface:(id)arg1;
- (unsigned long long)frameCounterPerInterfacesCount;
- (void)clearFrameCounterPerInterfaces;
- (id)frameCounterPerInterfaceAtIndex:(unsigned long long)arg1;

@end

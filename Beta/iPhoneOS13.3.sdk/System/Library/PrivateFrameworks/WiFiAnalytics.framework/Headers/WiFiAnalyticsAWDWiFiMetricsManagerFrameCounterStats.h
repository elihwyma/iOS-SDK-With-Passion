/*
 Image: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
 */

#import <ProtocolBuffer/PBCodable.h>

@class WiFiAnalyticsAWDControlFrames, WiFiAnalyticsAWDDataFrames, WiFiAnalyticsAWDManagementFrames;

@interface WiFiAnalyticsAWDWiFiMetricsManagerFrameCounterStats : PBCodable

{
    unsigned long long _timestamp;
    WiFiAnalyticsAWDControlFrames *_rxControl;
    WiFiAnalyticsAWDDataFrames *_rxData;
    WiFiAnalyticsAWDManagementFrames *_rxManagement;
    WiFiAnalyticsAWDControlFrames *_txControl;
    WiFiAnalyticsAWDDataFrames *_txData;
    WiFiAnalyticsAWDManagementFrames *_txManagement;
    CDStruct_b5306035 _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasRxControl;
@property (retain, nonatomic) WiFiAnalyticsAWDControlFrames *rxControl;
@property (nonatomic, readonly) _Bool hasTxControl;
@property (retain, nonatomic) WiFiAnalyticsAWDControlFrames *txControl;
@property (nonatomic, readonly) _Bool hasRxData;
@property (retain, nonatomic) WiFiAnalyticsAWDDataFrames *rxData;
@property (nonatomic, readonly) _Bool hasTxData;
@property (retain, nonatomic) WiFiAnalyticsAWDDataFrames *txData;
@property (nonatomic, readonly) _Bool hasRxManagement;
@property (retain, nonatomic) WiFiAnalyticsAWDManagementFrames *rxManagement;
@property (nonatomic, readonly) _Bool hasTxManagement;
@property (retain, nonatomic) WiFiAnalyticsAWDManagementFrames *txManagement;

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

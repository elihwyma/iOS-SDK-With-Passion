/*
 Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

#import <PowerlogFullOperators/PLAWDAuxMetrics.h>

@class PLEntryNotificationOperatorComposition;

@interface PLAWDWifiBT : PLAWDAuxMetrics

{
    _Bool _isWiFiStart;
    _Bool _isWiFiRailStart;
    _Bool _isBTStart;
    _Bool _isBTRailStart;
    PLEntryNotificationOperatorComposition *_wifiEventCallback;
    PLEntryNotificationOperatorComposition *_btEventCallback;
    PLEntryNotificationOperatorComposition *_btPowerCallback;
    PLEntryNotificationOperatorComposition *_wifiRailCallback;
    PLEntryNotificationOperatorComposition *_btRailCallback;
    long long _wifiSubmitCnt;
    long long _btSubmitCnt;
}

@property (retain) PLEntryNotificationOperatorComposition *wifiEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *btEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *btPowerCallback;
@property (retain) PLEntryNotificationOperatorComposition *wifiRailCallback;
@property (retain) PLEntryNotificationOperatorComposition *btRailCallback;
@property _Bool isWiFiStart;
@property _Bool isWiFiRailStart;
@property _Bool isBTStart;
@property _Bool isBTRailStart;
@property long long wifiSubmitCnt;
@property long long btSubmitCnt;

+ (id)entryAggregateDefinitions;
+ (id)getSharedObjWithOperator:(id)arg1;
+ (id)entryAggregateDefinitionAwdWifi;
+ (id)entryAggregateDefinitionAwdBT;

- (void)startMetricCollection:(id)arg1;
- (void)stopMetricCollection:(id)arg1;
- (_Bool)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (void)startWifiMetricCollection;
- (void)startBtMetricCollection;
- (_Bool)submitWiFiDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (_Bool)submitBtDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (void)resetWifiTable;
- (void)handleWifiCallback:(id)arg1;
- (void)addEntryToWiFiTable:(id)arg1 withValue:(double)arg2 andBand:(id)arg3;
- (void)resetBTTable;
- (void)handleBTCallback:(id)arg1;
- (void)handleBTPowerCallback:(id)arg1;
- (void)addEntryToBTTable:(id)arg1 withValue:(double)arg2;
- (void)handleWifiRailCallback:(id)arg1;
- (void)handleBTRailCallback:(id)arg1;

@end

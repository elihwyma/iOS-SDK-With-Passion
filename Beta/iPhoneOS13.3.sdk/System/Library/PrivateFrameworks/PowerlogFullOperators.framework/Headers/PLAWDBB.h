/*
 Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

#import <PowerlogFullOperators/PLAWDAuxMetrics.h>

@class LTEPoint, NSDate, NSLock, NSMutableArray, PLEntryNotificationOperatorComposition;

@interface PLAWDBB : PLAWDAuxMetrics

{
    short _telActivityState;
    unsigned int _upBytes;
    unsigned int _downBytes;
    unsigned int _upBytesLTE;
    unsigned int _downBytesLTE;
    int _currQuality;
    int _newQuality;
    PLEntryNotificationOperatorComposition *_bbProtocolRailCallback;
    PLEntryNotificationOperatorComposition *_bbEventCallback;
    PLEntryNotificationOperatorComposition *_accountingGroupEventCallback;
    PLEntryNotificationOperatorComposition *_iceStatsEventCallback;
    PLEntryNotificationOperatorComposition *_connectedPowerRailCallback;
    NSDate *_startTimeAppBB;
    NSDate *_startTimeBBLqm;
    NSDate *_startLTECall;
    NSDate *_endLTECall;
    NSMutableArray *_lteCallArray;
    NSMutableArray *_unhandledRFLTEEntries;
    PLEntryNotificationOperatorComposition *_bbLqmCellularActiveCallback;
    PLEntryNotificationOperatorComposition *_bbLqmCumulativeNetworkCallback;
    PLEntryNotificationOperatorComposition *_bbTelephonyActivityCallback;
    PLEntryNotificationOperatorComposition *_bbRfLTECallback;
    LTEPoint *_point;
    LTEPoint *_currThreshold;
    NSLock *_lock;
}

@property (retain) PLEntryNotificationOperatorComposition *bbProtocolRailCallback;
@property (retain) PLEntryNotificationOperatorComposition *bbEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *accountingGroupEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *iceStatsEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *connectedPowerRailCallback;
@property (retain) NSDate *startTimeAppBB;
@property (retain) NSDate *startTimeBBLqm;
@property unsigned int upBytes;
@property unsigned int downBytes;
@property unsigned int upBytesLTE;
@property unsigned int downBytesLTE;
@property (retain) NSDate *startLTECall;
@property (retain) NSDate *endLTECall;
@property (retain) NSMutableArray *lteCallArray;
@property (retain) NSMutableArray *unhandledRFLTEEntries;
@property (retain) PLEntryNotificationOperatorComposition *bbLqmCellularActiveCallback;
@property (retain) PLEntryNotificationOperatorComposition *bbLqmCumulativeNetworkCallback;
@property (retain) PLEntryNotificationOperatorComposition *bbTelephonyActivityCallback;
@property (retain) PLEntryNotificationOperatorComposition *bbRfLTECallback;
@property int currQuality;
@property int newQuality;
@property short telActivityState;
@property (retain) LTEPoint *point;
@property (retain) LTEPoint *currThreshold;
@property (retain) NSLock *lock;

+ (id)entryAggregateDefinitions;
+ (id)getSharedObjWithOperator:(id)arg1;
+ (id)entryAggregateDefinitionAwdBBQlm;
+ (id)entryAggregateDefinitionAwdBBQlmCounter;
+ (id)entryAggregateDefinitionAwdConnectedPower;
+ (id)entryAggregateDefinitionAwdVolte;

- (void)startMetricCollection:(id)arg1;
- (void)stopMetricCollection:(id)arg1;
- (_Bool)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (void)startAppRrc;
- (void)startAppBB;
- (void)startConnectedPower;
- (void)startBBLqm;
- (void)startBBPower;
- (void)stopAppRrc;
- (void)stopAppBB;
- (void)stopConnectedPower;
- (void)stopBBLqm;
- (void)submitAppRrc:(id)arg1 withAwdConn:(id)arg2;
- (void)submitAppBB:(id)arg1 withAwdConn:(id)arg2;
- (_Bool)submitConnectedPower:(id)arg1 withAwdConn:(id)arg2;
- (void)submitBBLqm:(id)arg1 withAwdConn:(id)arg2;
- (void)resetAllBBLqmTables;
- (void)handleBBLqmCellularActiveCallback:(id)arg1;
- (void)handleBBLqmCumulativeNetworkCallback:(id)arg1;
- (void)updateCurrLqmState;
- (int)convertQualityWithLinkQuality:(double)arg1;
- (void)updateLQMTableWithQuality:(int)arg1 withTime:(double)arg2 withRX:(double)arg3 withTX:(double)arg4;
- (double)getIntervalSinceLastUpdateWithEntryName:(id)arg1;
- (void)finalizeTableWithEntry:(id)arg1;
- (void)finalizePeriodWithUpBytes:(unsigned int)arg1 withDownBytes:(unsigned int)arg2;
- (void)handleRfLTEOffline;
- (void)resetBBLqmTable;
- (void)resetBBLqmCounterTable;
- (void)resetBBVoLTETable;
- (void)handleTelephonyActiveCallback:(id)arg1;
- (void)handleRfLTE:(id)arg1;
- (void)bbLTEWriteAggregatedTableWithRFLTEEntry:(id)arg1 withPoint:(id)arg2;
- (void)resetConnectedPowerTable;
- (void)handleBBConnectedPowerRail:(id)arg1;
- (void)handleBBRailCallbackWrapper:(id)arg1;
- (void)stopBBPower;
- (void)handleBBRailCallbackBBProtocol:(id)arg1;
- (void)handleBBRailCallbackLTESleep:(id)arg1;
- (void)handleBBRailCallbackTxLte:(id)arg1;
- (void)handleBBRailCallbackTxCdma:(id)arg1;
- (void)handleBBRailCallbackTxEvdo:(id)arg1;
- (void)handleBBRailCallbackTxCdma2K:(id)arg1;
- (void)handleBBRailCallbackTxGsm:(id)arg1;
- (void)handleBBRailCallbackTxUtran:(id)arg1;
- (void)handleBBRailCallbackBBICE:(id)arg1;
- (void)handleBBRailCallbackBBTx:(id)arg1;
- (void)handleBBRailCallbackOos:(id)arg1;
- (void)handleAcountGroupCallback:(id)arg1;
- (void)handleIceStatsCallback:(id)arg1;

@end

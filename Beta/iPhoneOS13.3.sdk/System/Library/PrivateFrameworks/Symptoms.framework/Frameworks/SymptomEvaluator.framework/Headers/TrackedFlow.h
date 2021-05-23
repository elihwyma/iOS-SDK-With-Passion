/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <SymptomEvaluator/TrackedFlowCounts.h>

@class AppTracker, FlowClassification, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface TrackedFlow : TrackedFlowCounts

{
    unsigned long long _snapshotRxWiFiBytes;
    unsigned long long _snapshotTxWiFiBytes;
    unsigned long long _snapshotRxPkts;
    unsigned long long _snapshotTxPkts;
    unsigned long long _snapshotRxDupeBytes;
    unsigned long long _snapshotRxOOOBytes;
    unsigned long long _snapshotTxReTxBytes;
    int _snapshotTxUnacked;
    _Bool _closedOut;
    _Bool _isNiced;
    _Bool _isRNF;
    _Bool _isForcedNonRNF;
    _Bool _trackedAsForeground;
    _Bool _networkActivityMapShouldNotBeCounted;
    _Bool _networkActivityMapRolledOver;
    unsigned int _trafficMgtFlags;
    unsigned int _trafficClassFlags;
    unsigned int _ifIndex;
    int _pid;
    unsigned int _txUnacked;
    unsigned int _flags;
    long long _ifType;
    NSString *_ownerKey;
    unsigned long long _flowId;
    AppTracker *_ultimateUser;
    AppTracker *_immediateUser;
    NSDate *_startingTimestamp;
    double _duration;
    double _wifiDownlRate;
    double _cellDownlRate;
    FlowClassification *_classification;
    AppTracker *_trackerForStatistics;
    unsigned long long _backgroundCellFlowTrackingSeqNo;
    unsigned long long _networkActivityMapStartTime;
    unsigned long long _networkActivityMapPart1;
    unsigned long long _networkActivityMapPart2;
}

@property (nonatomic) unsigned long long networkActivityMapStartTime;
@property (nonatomic) unsigned long long networkActivityMapPart1;
@property (nonatomic) unsigned long long networkActivityMapPart2;
@property (nonatomic) _Bool networkActivityMapShouldNotBeCounted;
@property (nonatomic) _Bool networkActivityMapRolledOver;
@property (nonatomic) unsigned int ifIndex;
@property (nonatomic) long long ifType;
@property (retain, nonatomic) NSString *ownerKey;
@property (nonatomic) int pid;
@property (nonatomic) unsigned long long flowId;
@property (retain, nonatomic) AppTracker *ultimateUser;
@property (retain, nonatomic) AppTracker *immediateUser;
@property (retain, nonatomic) NSDate *startingTimestamp;
@property (nonatomic) _Bool closedOut;
@property (nonatomic) double duration;
@property (nonatomic) unsigned int txUnacked;
@property (nonatomic) unsigned int flags;
@property (nonatomic) unsigned int trafficMgtFlags;
@property (nonatomic) unsigned int trafficClassFlags;
@property (nonatomic) double wifiDownlRate;
@property (nonatomic) double cellDownlRate;
@property (nonatomic) _Bool isNiced;
@property (nonatomic) _Bool isRNF;
@property (nonatomic) _Bool isForcedNonRNF;
@property (nonatomic) _Bool trackedAsForeground;
@property (retain, nonatomic) FlowClassification *classification;
@property (retain, nonatomic) AppTracker *trackerForStatistics;
@property (nonatomic) unsigned long long backgroundCellFlowTrackingSeqNo;

+ (void)initialize;
+ (void)dumpState;
+ (void)startPollingWifiFlows:(unsigned int)arg1;
+ (void)stopPollingWifiFlows;
+ (id)getPolledFlowInfo;
+ (void)setPolledFlowQueue:(id)arg1;
+ (unsigned long long)allActiveFlowsCount;
+ (unsigned long long)countFlowsPassingTest:(CDUnknownBlockType)arg1;
+ (id)flowForKey:(id)arg1;
+ (id)startTrackingForKey:(id)arg1;
+ (unsigned long long)cellUsageGrandTallyAfterAdding:(unsigned long long)arg1;
+ (unsigned long long)rnfUsageGrandTallyAfterAdding:(unsigned long long)arg1;
+ (void)removeTrackingForKey:(id)arg1;
+ (id)ownersOfFlowsPassingTest:(CDUnknownBlockType)arg1;
+ (unsigned long long)activeFlowsCountForType:(long long)arg1;
+ (unsigned long long)cellUsageGrandTallyAfterSetting:(unsigned long long)arg1;
+ (unsigned long long)rnfUsageGrandTallyAfterSetting:(unsigned long long)arg1;
+ (id)currentCellUsers;
+ (void)_dumpStateOfType:(long long)arg1;
+ (void)_wifiStallCheckStarted;
+ (void)_wifiStallCheck;
+ (void)_notifyPollingEnd;

- (id)init;
- (id)description;
- (void)_takeSnapshot;
- (_Bool)inheritEarlyProperties:(id)arg1;
- (void)setActivityBitmapInfo:(id)arg1 withOwner:(id)arg2;
- (void)inheritLateProperties:(id)arg1;
- (void)_decrementCounters;
- (void)_updateScoreholder:(struct scoreHolder *)arg1;

@end

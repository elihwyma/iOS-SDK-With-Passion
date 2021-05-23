/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, SFActivityBitmaps, TrackerPolicy;

__attribute__((visibility("hidden")))
@interface AppTracker : NSObject

{
    _Bool _isADaemon;
    _Bool _sentFlowCountExceededPolicySymptom;
    _Bool _sentThunderingHerdFlowCountExceededPolicySymptom;
    int _prevFlows;
    int _prevFlowsForOthers;
    int _flowsForSelf;
    int _flowsForOthers;
    int _flowsPerPeriod;
    int _flowsPerPeriodAfterMadePrimary;
    unsigned int _eversetClassFlags;
    SFActivityBitmaps *_activityBitmaps;
    NSString *_userName;
    double _prevFlowDurations;
    unsigned long long _prevFlowRxBytes;
    unsigned long long _prevFlowTxBytes;
    NSDate *_timestamp;
    TrackerPolicy *_specificPolicy;
    long long _interfaceType;
    unsigned long long _lastTallyTime;
}

@property (retain) NSDate *timestamp;
@property int flowsForSelf;
@property int flowsForOthers;
@property int flowsPerPeriod;
@property int flowsPerPeriodAfterMadePrimary;
@property (retain) TrackerPolicy *specificPolicy;
@property unsigned int eversetClassFlags;
@property _Bool isADaemon;
@property _Bool sentFlowCountExceededPolicySymptom;
@property _Bool sentThunderingHerdFlowCountExceededPolicySymptom;
@property long long interfaceType;
@property (retain) SFActivityBitmaps *activityBitmaps;
@property unsigned long long lastTallyTime;
@property (readonly) NSString *userName;
@property int prevFlows;
@property int prevFlowsForOthers;
@property double prevFlowDurations;
@property unsigned long long prevFlowRxBytes;
@property unsigned long long prevFlowTxBytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedInstance;
+ (void)setInternalQueue:(id)arg1;
+ (void)dumpState;
+ (void)pruneCache:(id)arg1;
+ (id)configureClass:(id)arg1;
+ (void)setAppTrackerVerbose:(unsigned int)arg1;
+ (void)setWifiNeverNoteList:(id)arg1;
+ (void)setWifiAlwaysNoteList:(id)arg1;
+ (void)setWifiDaemonCheckList:(id)arg1;
+ (void)getWifiNetworkActivity:(CDUnknownBlockType)arg1;
+ (void)beginTrafficClassFlowSnapshot;
+ (void)resetAllActivityMapsForInterfaceType:(long long)arg1;
+ (void)tallyUpAllActivityMapsForInterfaceType:(long long)arg1 replyQueue:(id)arg2 reply:(CDUnknownBlockType)arg3;
+ (void)endTrafficClassFlowSnapshot:(id)arg1 periodUsecs:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
+ (void)setTrackCellular:(_Bool)arg1;
+ (void)noteFlow:(id)arg1 withDelegatee:(id)arg2 snapshot:(id)arg3;
+ (void)noteFlow:(id)arg1 withOwner:(id)arg2 snapshot:(id)arg3;
+ (void)noteForegroundState:(_Bool)arg1 forApp:(id)arg2 hasForegroundApps:(_Bool)arg3;
+ (void)getAllActivityMapsWithNames:(id)arg1 startTime:(unsigned long long)arg2 endTime:(unsigned long long)arg3 replyQueue:(id)arg4 reply:(CDUnknownBlockType)arg5;
+ (id)ifTrackerForFlow:(id)arg1;
+ (id)ifTrackerForInterfaceType:(long long)arg1;
+ (id)getAlignedNetworkBitmapsForInterfaceType:(long long)arg1 names:(id)arg2 startTime:(unsigned long long)arg3 endTime:(unsigned long long)arg4;
+ (void)stopFlowPeriodTimer;
+ (void)startFlowPeriodTimer;
+ (void)freeUpActivityBitmapsForInterfaceType:(long long)arg1;
+ (void)configureCellPolicies:(id)arg1;
+ (void)configureWifiPolicies:(id)arg1;
+ (void)configureCompanionLinkPolicies:(id)arg1;
+ (void)noteFlowEnding:(id)arg1;
+ (void)resetTrafficClassFlowSnapshot;

- (int)configureInstance:(id)arg1;
- (int)read:(id)arg1 returnedValues:(id)arg2;
- (void)generateInfoForId:(unsigned long long)arg1 context:(const char *)arg2 uuid:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)resetFlowCountAfterMadePrimary;
- (void)removeFlow:(id)arg1;
- (void)removeImmediateFlow:(id)arg1;
- (id)initWithUserName:(id)arg1 interfaceType:(long long)arg2;
- (void)adjustImmediateFlowLinkages:(id)arg1;
- (void)adjustFlowLinkages:(id)arg1;
- (void)tallyUpAllActivityMaps:(id)arg1;
- (void)sendFlowCount:(unsigned long long)arg1 exceededPolicyThreshold:(unsigned long long)arg2 isLikelyThunderingHerd:(_Bool)arg3;
- (void)checkForFlowCountPolicyViolation;
- (void)addFlow:(id)arg1;
- (void)addImmediateFlow:(id)arg1;
- (void)_generateInfoForId:(unsigned long long)arg1 context:(const char *)arg2 uuid:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)resetAllActivityMaps;
- (void)resetFlowCountPolicyInfo;

@end

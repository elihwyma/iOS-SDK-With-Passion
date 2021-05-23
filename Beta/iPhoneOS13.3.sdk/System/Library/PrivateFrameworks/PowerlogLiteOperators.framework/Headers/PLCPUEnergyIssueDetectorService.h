/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLService.h>

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString, PLEntryNotificationOperatorComposition, PLXPCListenerOperatorComposition;

@interface PLCPUEnergyIssueDetectorService : PLService

{
    _Bool _deviceIsPluggedIn;
    _Bool _pluggedInBetweenCoalitionSBC;
    PLEntryNotificationOperatorComposition *_coalitionCallback;
    PLEntryNotificationOperatorComposition *_batteryCallback;
    NSString *_entryKeyPLCoalitionAgentEventIntervalCoalition;
    NSMutableDictionary *_cpuUsage;
    NSArray *_cpuWhiteList;
    NSDictionary *_cpuThresholds;
    NSDate *_detectionStartTime;
    PLXPCListenerOperatorComposition *_detectorListener;
}

@property (retain) PLEntryNotificationOperatorComposition *coalitionCallback;
@property (retain) PLEntryNotificationOperatorComposition *batteryCallback;
@property (readonly) NSString *entryKeyPLCoalitionAgentEventIntervalCoalition;
@property _Bool deviceIsPluggedIn;
@property _Bool pluggedInBetweenCoalitionSBC;
@property (retain) NSMutableDictionary *cpuUsage;
@property (retain) NSArray *cpuWhiteList;
@property (retain) NSDictionary *cpuThresholds;
@property (retain) NSDate *detectionStartTime;
@property (retain) PLXPCListenerOperatorComposition *detectorListener;

+ (void)load;
+ (id)defaults;
+ (id)entryAggregateDefinitionAppRunTime;
+ (id)entryAggregateDefinitions;

- (id)init;
- (void)handleCoalitionCallback:(id)arg1;
- (id)buildCallBack:(id)arg1 withGroup:(_Bool)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)handleBatteryCallback:(id)arg1;
- (void)testService;
- (double)getCPUTime:(id)arg1;
- (void)initOperatorDependancies;
- (void)sendEnergyIssueSignatureNotification:(id)arg1 withThreshold:(double)arg2;
- (id)loadCpuThresholds;
- (id)loadCPUWhitelist;
- (void)checkCpuUsage:(id)arg1 withNewCoaltionArray:(id)arg2;
- (int)customLongTermCPUThreshold;
- (void)listAllRunningPidsWithBuffer:(int *)arg1 withSizeOfBuffer:(int)arg2;
- (int)matchingPidWithProcessName:(id)arg1 withBundleID:(id)arg2;

@end

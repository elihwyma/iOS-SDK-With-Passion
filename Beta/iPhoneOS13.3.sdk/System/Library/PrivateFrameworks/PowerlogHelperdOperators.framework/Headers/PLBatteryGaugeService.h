/*
 Image: /System/Library/PrivateFrameworks/PowerlogHelperdOperators.framework/PowerlogHelperdOperators
 */

#import <PowerlogCore/PLService.h>

@class NSDate, NSMutableArray, NSMutableDictionary, NSSet, NSTimer, PLDTCostElement, PLSemaphore, PLXPCResponderOperatorComposition;

@interface PLBatteryGaugeService : PLService

{
    _Bool _isTestingRunning;
    int _lastQueryCount;
    int _curQueryCount;
    PLXPCResponderOperatorComposition *_xpcResponderBatteryGaugeDT;
    double _startTime;
    double _stopTime;
    NSMutableDictionary *_measurements;
    NSMutableDictionary *_bundleIDandPidMap;
    NSMutableDictionary *_requestTime;
    NSMutableDictionary *_returnTime;
    NSMutableDictionary *_responseTime;
    NSMutableDictionary *_entrykeyCallBackMapping;
    NSMutableDictionary *_entrykeyCallBackOnceMapping;
    PLSemaphore *_responseSemaphore;
    NSDate *_curQueryTime;
    NSDate *_lastQueryTime;
    id _costElement;
    NSMutableArray *_trackedProcesses;
    NSMutableDictionary *_results;
    NSMutableDictionary *_reported;
    NSMutableDictionary *_processMonitorResults;
    NSMutableDictionary *_reportedProcessMonitor;
    NSMutableDictionary *_processNetworkResults;
    NSMutableDictionary *_reportedProcessNetwork;
    NSMutableDictionary *_locationResults;
    NSMutableDictionary *_reportedLocation;
    NSMutableDictionary *_applicationResults;
    NSMutableDictionary *_reportedApplication;
    NSSet *_scoringEntities;
    PLDTCostElement *_networkingCostElement;
    NSTimer *_exitTimer;
    NSTimer *_thermalStateTimer;
}

@property (retain) PLXPCResponderOperatorComposition *xpcResponderBatteryGaugeDT;
@property double startTime;
@property double stopTime;
@property (retain) NSMutableDictionary *measurements;
@property (retain) NSMutableDictionary *bundleIDandPidMap;
@property (retain) NSMutableDictionary *requestTime;
@property (retain) NSMutableDictionary *returnTime;
@property (retain) NSMutableDictionary *responseTime;
@property (retain) NSMutableDictionary *entrykeyCallBackMapping;
@property (retain) NSMutableDictionary *entrykeyCallBackOnceMapping;
@property (retain) PLSemaphore *responseSemaphore;
@property (retain) NSDate *curQueryTime;
@property (retain) NSDate *lastQueryTime;
@property _Bool isTestingRunning;
@property (retain) id costElement;
@property int lastQueryCount;
@property int curQueryCount;
@property (retain) NSMutableArray *trackedProcesses;
@property (retain) NSMutableDictionary *results;
@property (retain) NSMutableDictionary *reported;
@property (retain) NSMutableDictionary *processMonitorResults;
@property (retain) NSMutableDictionary *reportedProcessMonitor;
@property (retain) NSMutableDictionary *processNetworkResults;
@property (retain) NSMutableDictionary *reportedProcessNetwork;
@property (retain) NSMutableDictionary *locationResults;
@property (retain) NSMutableDictionary *reportedLocation;
@property (retain) NSMutableDictionary *applicationResults;
@property (retain) NSMutableDictionary *reportedApplication;
@property (readonly) NSSet *scoringEntities;
@property (retain) PLDTCostElement *networkingCostElement;
@property (retain) NSTimer *exitTimer;
@property (retain) NSTimer *thermalStateTimer;

+ (void)load;

- (id)init;
- (void)initOperatorDependancies;
- (void)listAllRunningPidsWithBuffer:(int *)arg1 withSizeOfBuffer:(int)arg2;
- (int)matchingPidWithProcessName:(id)arg1 withBundleID:(id)arg2;
- (void)selfExit:(id)arg1;
- (void)parseThermalStateCallback:(id)arg1;
- (id)DTQueryResponse:(id)arg1;
- (void)parseProcessMonitorResults:(id)arg1;
- (void)registerNotificationWithAgent:(id)arg1 withType:(id)arg2 withTableName:(id)arg3 withCallBackType:(_Bool)arg4 withBlock:(CDUnknownBlockType)arg5;
- (void)parseProcessNetworkResults:(id)arg1;
- (void)parseLocationResults:(id)arg1;
- (void)parseApplicationResults:(id)arg1;
- (void)parseCoalitionResults:(id)arg1;
- (void)parseDisplayResults:(id)arg1;
- (void)dataReceivedFrom:(id)arg1;
- (double)computeNetworkingCostWithWifiIn:(int)arg1 withWifiOut:(int)arg2 withCellIn:(int)arg3 withCellOut:(int)arg4;
- (double)computeLocationCostWithWifiCost:(int)arg1 withGpsCost:(int)arg2 withCellCost:(int)arg3 withSkyhookCost:(int)arg4;
- (void)setLastActiveStartTimeAndLastSuspendTimeWithPid:(int)arg1 withAppState:(int)arg2 withCurrentTime:(id)arg3;
- (double)computeGPUCostWithGPUSec:(id)arg1;
- (double)computeDisplayCostWithAvgRed:(int)arg1 withAvgGreen:(int)arg2 withAvgBlue:(int)arg3;
- (id)extractAndSetProcessIdentifierWithPayload:(id)arg1;
- (void)translateProcessIdentifierWithInput:(id)arg1;
- (id)extractAndTranslateProcessIdentifier:(id)arg1;
- (void)requestDataFrom:(id)arg1 withType:(int)arg2;
- (id)convertRawUsageToScore:(id)arg1;
- (id)startRoutineWithPayload:(id)arg1;
- (id)stopRoutineWithPayload:(id)arg1;
- (id)pauseRoutineWithPayload:(id)arg1;
- (id)resumeRoutineWithPayload:(id)arg1;
- (id)clearStateRoutine:(id)arg1;
- (void)triggerAllData;
- (void)initResponseSemaphore;
- (id)compileSnapshotResponse;
- (void)resetExitTimer;
- (void)testGaugeServiceSingleInstance:(id)arg1;
- (id)getObjectInMeasurementsWithPid:(int)arg1 withCategory:(id)arg2 withKey:(id)arg3;
- (void)setObjectInMeasurementsWithObject:(id)arg1 withPid:(int)arg2 withCategory:(id)arg3 withKey:(id)arg4;
- (void)testGaugeService;

@end

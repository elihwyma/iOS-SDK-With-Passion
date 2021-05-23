/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class AnalyticsWorkspace, ImpoExpoService, NSArray, NSCalendar, NSDate, NSString, SystemSettingsRelay;

@protocol OS_dispatch_queue;

@interface NetworkAnalyticsModel : NSObject

{
    NSString *journalName;
    AnalyticsWorkspace *workspace;
    NSObject<OS_dispatch_queue> *queue;
    ImpoExpoService *ieService;
    int wifiPredictionLogic;
    int cellPredictionLogic;
    int weightStrategy;
    NSString *_pathForReadingIpsFile;
    NSString *_simulatedJournalPath;
    unsigned long long periodPerDay;
    unsigned long long minimumEventsToConsiderPattern;
    long long firstEventTimeStampWifi;
    long long firstEventTimeStampCell;
    long long lastEventTimeStampWifi;
    long long lastEventTimeStampCell;
    long long latestPredictionTrainingTimeCell;
    long long latestPredictionTrainingTimeWifi;
    unsigned long long numberOfDaysWithWifiEvents;
    unsigned long long numberOfDaysWithCellEvents;
    NSArray *defaultArrayOfDaysGroupWifi;
    NSArray *defaultArrayOfDaysGroupCell;
    NSArray *currentArrayOfDaysGroupWifi;
    NSArray *currentArrayOfDaysGroupCell;
    long long timezoneOffsetFromUtcNoDaylight;
    long long homeTimezoneOffsetFromUtcNoDaylight;
    _Bool homeTimezoneOffsetKnownCoreRoutine;
    double wifiPredictionError;
    double cellPredictionError;
    NSArray *defaultLQMPredictionsWifi;
    NSArray *defaultLQMPredictionsCell;
    NSArray *currentLQMPredictionsWifi;
    NSArray *currentLQMPredictionsCell;
    NSString *currentlyConnectedWifiSsid;
    NSArray *disconnectionPatternsWifi;
    unsigned long long recallCounterWifi;
    unsigned long long recallCounterCell;
    unsigned long long pullupCounterWifi;
    unsigned long long pullupCounterCell;
    id _cellEpochObserver;
    id _wifiEpochObserver;
    id _timezoneChangedObserver;
    NSCalendar *_calendar;
    unsigned long long limMinSamples;
    double limRatio;
    SystemSettingsRelay *systemSettingsRelay;
    _Bool _isHelper;
    NSDate *_lastModelRunTime;
    NSDate *_debugTrainingTime;
}

@property (retain) NSDate *lastModelRunTime;
@property (retain) NSDate *debugTrainingTime;
@property (nonatomic) _Bool isHelper;

+ (id)modelGeneratedAt;
+ (id)fetchPredictionsForInterfaceType:(long long)arg1 isAny:(_Bool)arg2 isBuiltin:(_Bool)arg3 scopedToLOI:(long long)arg4 hasCustomSignature:(id)arg5 error:(id *)arg6;
+ (unsigned long long)modelResolution;
+ (double)fetchPredictionErrorForInterfaceType:(long long)arg1 isAny:(_Bool)arg2 isBuiltin:(_Bool)arg3 scopedToLOI:(long long)arg4 hasCustomSignature:(id)arg5;
+ (id)getDaysWithSimilarPatternForInterfaceType:(long long)arg1;
+ (double)fetchTrainingProgressForInterfaceType:(long long)arg1 isAny:(_Bool)arg2 isBuiltin:(_Bool)arg3 scopedToLOI:(long long)arg4 hasCustomSignature:(id)arg5;
+ (void)purgeAllJournalRecords;
+ (void)resetModel;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithJournalName:(id)arg1 workspace:(id)arg2 queue:(id)arg3;
- (void)trainModel;
- (void)processProxyTrain;
- (void)_fetchHomeTimezoneOffsetFromJournal;
- (void)_loadLatestPredictionFromJournalWithInterfaceType:(long long)arg1;
- (void)_handleNetworkNotificationFrom:(long long)arg1 notification:(id)arg2;
- (void)_handleTimezoneChanged;
- (long long)_getCurrentLocationTimezoneOffsetWithoutDST;
- (long long)_getWifiInstantQualityBasedOnLQM:(BOOL)arg1;
- (long long)_getCellInstantQualityBasedOnLQM:(BOOL)arg1;
- (long long)_getDominantLQMInSlotWithTimeSpentInBest:(long long)arg1 inFair:(long long)arg2 inMinimallyViable:(long long)arg3 inNone:(long long)arg4;
- (_Bool)_isLegacyJournal:(id)arg1;
- (id)_purgeAndReturnValidJournalWithPrefix:(id)arg1 olderThan:(unsigned long long)arg2;
- (void)_removePrimarykeyAndLocationInJournalRecordInfo:(id)arg1;
- (id)_readJournalEntriesUsingIpsfile;
- (id)_readJournalEntriesUsingSimulatedfile;
- (id)_readJournalEntriesUsingImpoExpoService;
- (_Bool)_insertInternalNetworkStateRecordTo:(id)arg1 networkId:(id)arg2 networkLQM:(long long)arg3 age:(long long)arg4 dayOfWeek:(long long)arg5 slotId:(long long)arg6 numberOfSlots:(long long)arg7 stateDuration:(long long)arg8;
- (void)_processLowInternetModeRecord:(id)arg1 addTo:(id)arg2;
- (long long)_getNWInstantQualityForNetwork:(long long)arg1 basedOnLQM:(BOOL)arg2;
- (CDStruct_d20431f8)_parseTimeIntoWeekdayAndSlotId:(long long)arg1 withReferenceDate:(id)arg2;
- (void)_processNetworkState:(CDStruct_7fe6219a *)arg1 toStateSet:(id)arg2 stateStartTimeInfo:(CDStruct_d20431f8)arg3 stateEndTimeInfo:(CDStruct_d20431f8)arg4 effectiveNetworkId:(id)arg5;
- (void)_finishedReadingLowInternetModeRecords:(id)arg1;
- (_Bool)_isValidTimezoneToReturnPredictions;
- (id)_getComplementaryPredictionNameForInterface:(long long)arg1;
- (id)_getPredictionJournalNameWithPrefix:(id)arg1 forInterface:(long long)arg2 slotSizeMinutes:(unsigned long long)arg3;
- (id)_createHeaderDataForSavedPredictionsName:(id)arg1 hasComplementaryPrediction:(_Bool)arg2 interfaceType:(long long)arg3;
- (id)_getSavedPredictionHeaderNameForInterface:(long long)arg1;
- (id)_loadSavedPredictionBasedOnHeaderData:(id)arg1 interface:(long long)arg2;
- (void)_shuffleArray:(id)arg1;
- (double)_clusterUsingKMeansOn:(id)arg1 into:(int)arg2 iterations:(int)arg3 saveCentroidsTo:(id)arg4;
- (int)_elbowOfList:(id)arg1;
- (id)_extractImpairmentEventsFromNetworkStateTable:(id)arg1 setOfDays:(id)arg2;
- (void)_clusterImpairmentEventsUsingKMeansOn:(id)arg1 saveCentroidsTo:(id)arg2;
- (unsigned long long)_getTotalWeightForCompletedHistory;
- (long long)_predictNetworkQualityBasedOnAverageNWInstantQuality:(double)arg1;
- (unsigned long long)_getWeightForAge:(long long)arg1;
- (CDStruct_ffbdc51d)_calculateStatisticsFromNetworkStateTable:(id)arg1 usingPredicate:(id)arg2;
- (void)_actUponSystemSettingsAirplaneChanged:(_Bool)arg1 wifiChanged:(_Bool)arg2 cellDataChanged:(_Bool)arg3;
- (id)_clusterEventsUsingKMeansForSetOfDays:(id)arg1 networkStateTable:(id)arg2 saveCentroidsTo:(id)arg3;
- (id)_clusterEventsInWeekUsingKMeansOn:(id)arg1;
- (void)_generatePredictionForDays:(id)arg1 fromClusteredEvents:(id)arg2 clusterCentroids:(id)arg3 interfaceType:(long long)arg4 basedOnWeekClusters:(long long)arg5 savePredictionsTo:(id)arg6;
- (id)_learnDisconnectionPatternForSetOfDays:(id)arg1 impairmentEvents:(id)arg2;
- (_Bool)_savePredictionToJournalForInterface:(long long)arg1;
- (void)_purgeSavedPredictionsOlderThan:(unsigned long long)arg1;
- (_Bool)_shouldCreateIpsFile;
- (id)_readJournalEntries;
- (void)_processJournalData:(id)arg1 startFrom:(long long)arg2 endAt:(long long)arg3 rawWifiStateSet:(id)arg4 rawCellStateSet:(id)arg5;
- (unsigned long long)_sanitizeInternalLQMStateEventFrom:(id)arg1 toTable:(id)arg2;
- (double)_evaluateErrorOfLQMPredictions:(id)arg1 againstObservedLQMTable:(id)arg2;
- (void)_trainModelForInterfaceType:(long long)arg1 sanitizedLQMTable:(id)arg2;
- (_Bool)_isValidTimezoneToTrain;
- (void)_trainModelAt:(id)arg1;
- (void)postAWDPredictionMetricsForInterface:(long long)arg1 previousTime:(long long)arg2;
- (id)_getDaysWithSimilarPatternForInterfaceType:(long long)arg1;
- (double)_fetchTrainingProgressForInterfaceType:(long long)arg1;
- (unsigned int)numberOfGroupOfSimilarDaysForInterface:(long long)arg1;
- (double)_fetchTrainingProgressForInterfaceType:(long long)arg1 isAny:(_Bool)arg2 isBuiltin:(_Bool)arg3 scopedToLOI:(long long)arg4 hasCustomSignature:(id)arg5;
- (id)_fetchPredictionsForInterfaceType:(long long)arg1 isAny:(_Bool)arg2 isBuiltin:(_Bool)arg3 scopedToLOI:(long long)arg4 hasCustomSignature:(id)arg5 error:(id *)arg6;
- (unsigned long long)_modelResolution;
- (double)_fetchPredictionErrorForInterfaceType:(long long)arg1 isAny:(_Bool)arg2 isBuiltin:(_Bool)arg3 scopedToLOI:(long long)arg4 hasCustomSignature:(id)arg5;
- (void)_purgeAllJournalRecords;
- (void)_resetModel;
- (void)_printInternalStateSet:(id)arg1;
- (void)_updateHomeTimezoneOffsetIfNeeded;
- (void)_setCalendar:(id)arg1;

@end

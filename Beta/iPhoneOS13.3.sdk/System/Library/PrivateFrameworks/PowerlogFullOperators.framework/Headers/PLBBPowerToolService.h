/*
 Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

#import <PLService.h>

@class NSDate, NSMutableArray, PLEntryNotificationOperatorComposition, PLNSNotificationOperatorComposition, PLTelephonyConnection;

@interface PLBBPowerToolService : PLService

{
    unsigned char _exclusionMask;
    _Bool _sendAWD;
    _Bool _doesCurrPackageHasProblem;
    _Bool _doesPrevPackageHasProblem;
    _Bool _isUIAlertEnabled;
    int _gPerepherialMax;
    PLEntryNotificationOperatorComposition *_audioEventCallback;
    PLEntryNotificationOperatorComposition *_displayEventCallback;
    PLEntryNotificationOperatorComposition *_hotspotEventCallback;
    PLEntryNotificationOperatorComposition *_bbHwOtherCallback;
    PLEntryNotificationOperatorComposition *_msgLiteCallback;
    PLEntryNotificationOperatorComposition *_wcdmaRRCCallback;
    PLEntryNotificationOperatorComposition *_lteRRCCallback;
    PLEntryNotificationOperatorComposition *_telActivityCallback;
    PLNSNotificationOperatorComposition *_dailyTaskNotification;
    NSMutableArray *_startExclusionPeriods;
    NSMutableArray *_endExclusionPeriods;
    double _elapsedDenumerator;
    double _totalNormalARMUtility;
    double _armUtilityThresholdVal;
    double _magicDeltaThresholdVal;
    double _oosDurationVal;
    double _rrcDisconnectedVal;
    NSDate *_startSamplingDate;
    PLTelephonyConnection *_connection;
    double _gArmUtil;
    NSDate *_notToRemoveDate;
}

@property unsigned char exclusionMask;
@property (retain) PLEntryNotificationOperatorComposition *audioEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *displayEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *hotspotEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *bbHwOtherCallback;
@property (retain) PLEntryNotificationOperatorComposition *msgLiteCallback;
@property (retain) PLEntryNotificationOperatorComposition *wcdmaRRCCallback;
@property (retain) PLEntryNotificationOperatorComposition *lteRRCCallback;
@property (retain) PLEntryNotificationOperatorComposition *telActivityCallback;
@property (retain) PLNSNotificationOperatorComposition *dailyTaskNotification;
@property (retain) NSMutableArray *startExclusionPeriods;
@property (retain) NSMutableArray *endExclusionPeriods;
@property double elapsedDenumerator;
@property double totalNormalARMUtility;
@property double armUtilityThresholdVal;
@property double magicDeltaThresholdVal;
@property double oosDurationVal;
@property double rrcDisconnectedVal;
@property (retain) NSDate *startSamplingDate;
@property (weak) PLTelephonyConnection *connection;
@property double gArmUtil;
@property int gPerepherialMax;
@property (retain) NSDate *notToRemoveDate;
@property _Bool sendAWD;
@property _Bool doesCurrPackageHasProblem;
@property _Bool doesPrevPackageHasProblem;
@property _Bool isUIAlertEnabled;

+ (void)load;
+ (id)entryAggregateDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryCauseDefinition;
+ (id)entryCauseHelperDefinition;
+ (id)entryArmUtil;

- (id)init;
- (void)handleDisplayCallback:(id)arg1;
- (void)handleAudioCallback:(id)arg1;
- (void)initOperatorDependancies;
- (void)handleMavBBHwOtherCallback:(id)arg1;
- (void)resetAllCounters:(id)arg1;
- (void)handleHotspotCallback:(id)arg1;
- (void)msgLiteCallback:(id)arg1;
- (void)wcdmaRRCCallback:(id)arg1;
- (void)lteRRCCallback:(id)arg1;
- (void)telActivityCallback:(id)arg1;
- (void)submitAWD;
- (void)setupInitExclusions;
- (void)writeToHelperTable:(id)arg1 WithValue:(double)arg2 withDate:(id)arg3;
- (void)handleExclusionWithState:(_Bool)arg1 withExclusion:(unsigned char)arg2;
- (_Bool)isPackageValidWithEntry:(id)arg1;
- (void)collectExtraDataForPackage:(id)arg1;
- (_Bool)doesCurrPeriodHaveProblem:(id)arg1;
- (void)handleProblemWithEntry:(id)arg1;
- (id)findCauseWithEntry:(id)arg1;
- (void)resetStructuresWithSnapshot:(struct CauseSnapshot *)arg1 withDuration:(struct CauseDurations *)arg2;
- (void)analazeIntervalWithSnapshot:(struct CauseSnapshot *)arg1 withDuration:(struct CauseDurations *)arg2 withInterval:(double)arg3 withEntry:(id)arg4;
- (id)analazeCauseResultsReturnCause:(struct CauseDurations *)arg1;
- (double)calculateMaxPerepherialPercentageWithEntry:(id)arg1;
- (_Bool)isPackageTimeValidWithEntry:(id)arg1;
- (_Bool)containsExclusionsAfterCleanupWithDate:(id)arg1;
- (double)percentageHistogramFromArray:(id)arg1;

@end

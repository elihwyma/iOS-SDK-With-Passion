/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <ProtocolBuffer/PBCodable.h>

@class AWDProactiveAppPredictionAppActionSequence, AWDProactiveAppPredictionAppLaunchSequence, NSMutableArray, NSString;

@interface AWDProactiveAppPredictionIntentPredictionSession : PBCodable

{
    CDStruct_95bda58d _engagedActionCacheIndices;
    unsigned long long _timestamp;
    NSString *_abGroup;
    NSMutableArray *_actionDatas;
    int _appActionCoreMotionCurrentMotionLaunches;
    AWDProactiveAppPredictionAppActionSequence *_appActionSequence;
    int _appForAllActionsCoreMotionCurrentMotionLaunches;
    AWDProactiveAppPredictionAppLaunchSequence *_appSequence;
    int _consumerSubType;
    int _currentLOIType;
    int _dayOfWeek;
    int _engagementType;
    int _intentDonationDelay;
    int _locationDistanceFromHome;
    int _locationDistanceFromWork;
    int _logType;
    int _predictionAge;
    NSString *_sessionId;
    int _sessionLogVersion;
    int _timeOfDayInterval;
    int _totalAppActionAirplaneModeLaunches;
    int _totalAppActionCoarseTimeOfDayLaunches;
    int _totalAppActionCurrentDayOfWeekLaunches;
    int _totalAppActionTimeOfDayLaunches;
    int _totalAppForAllActionTimeOfDayLaunches;
    int _totalAppForAllActionsAirplaneModeLaunches;
    int _totalAppForAllActionsCoarseTimeOfDayLaunches;
    int _totalAppForAllActionsCurrentDayOfWeekLaunches;
    int _uiFeedbackDelay;
    _Bool _inAirplaneMode;
    _Bool _isInternalBuild;
    struct {
        unsigned int timestamp:1;
        unsigned int appActionCoreMotionCurrentMotionLaunches:1;
        unsigned int appForAllActionsCoreMotionCurrentMotionLaunches:1;
        unsigned int consumerSubType:1;
        unsigned int currentLOIType:1;
        unsigned int dayOfWeek:1;
        unsigned int engagementType:1;
        unsigned int intentDonationDelay:1;
        unsigned int locationDistanceFromHome:1;
        unsigned int locationDistanceFromWork:1;
        unsigned int logType:1;
        unsigned int predictionAge:1;
        unsigned int sessionLogVersion:1;
        unsigned int timeOfDayInterval:1;
        unsigned int totalAppActionAirplaneModeLaunches:1;
        unsigned int totalAppActionCoarseTimeOfDayLaunches:1;
        unsigned int totalAppActionCurrentDayOfWeekLaunches:1;
        unsigned int totalAppActionTimeOfDayLaunches:1;
        unsigned int totalAppForAllActionTimeOfDayLaunches:1;
        unsigned int totalAppForAllActionsAirplaneModeLaunches:1;
        unsigned int totalAppForAllActionsCoarseTimeOfDayLaunches:1;
        unsigned int totalAppForAllActionsCurrentDayOfWeekLaunches:1;
        unsigned int uiFeedbackDelay:1;
        unsigned int inAirplaneMode:1;
        unsigned int isInternalBuild:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSMutableArray *actionDatas;
@property (nonatomic) _Bool hasAppActionCoreMotionCurrentMotionLaunches;
@property (nonatomic) int appActionCoreMotionCurrentMotionLaunches;
@property (nonatomic, readonly) _Bool hasAppSequence;
@property (retain, nonatomic) AWDProactiveAppPredictionAppLaunchSequence *appSequence;
@property (nonatomic) _Bool hasConsumerSubType;
@property (nonatomic) int consumerSubType;
@property (nonatomic) _Bool hasCurrentLOIType;
@property (nonatomic) int currentLOIType;
@property (nonatomic) _Bool hasDayOfWeek;
@property (nonatomic) int dayOfWeek;
@property (nonatomic, readonly) unsigned long long engagedActionCacheIndicesCount;
@property (nonatomic, readonly) int *engagedActionCacheIndices;
@property (nonatomic) _Bool hasEngagementType;
@property (nonatomic) int engagementType;
@property (nonatomic) _Bool hasInAirplaneMode;
@property (nonatomic) _Bool inAirplaneMode;
@property (nonatomic) _Bool hasIntentDonationDelay;
@property (nonatomic) int intentDonationDelay;
@property (nonatomic) _Bool hasIsInternalBuild;
@property (nonatomic) _Bool isInternalBuild;
@property (nonatomic) _Bool hasLogType;
@property (nonatomic) int logType;
@property (nonatomic) _Bool hasPredictionAge;
@property (nonatomic) int predictionAge;
@property (nonatomic) _Bool hasTimeOfDayInterval;
@property (nonatomic) int timeOfDayInterval;
@property (nonatomic) _Bool hasTotalAppActionAirplaneModeLaunches;
@property (nonatomic) int totalAppActionAirplaneModeLaunches;
@property (nonatomic) _Bool hasTotalAppActionCurrentDayOfWeekLaunches;
@property (nonatomic) int totalAppActionCurrentDayOfWeekLaunches;
@property (nonatomic) _Bool hasTotalAppForAllActionsAirplaneModeLaunches;
@property (nonatomic) int totalAppForAllActionsAirplaneModeLaunches;
@property (nonatomic) _Bool hasTotalAppForAllActionsCurrentDayOfWeekLaunches;
@property (nonatomic) int totalAppForAllActionsCurrentDayOfWeekLaunches;
@property (nonatomic) _Bool hasUiFeedbackDelay;
@property (nonatomic) int uiFeedbackDelay;
@property (nonatomic) _Bool hasSessionLogVersion;
@property (nonatomic) int sessionLogVersion;
@property (nonatomic, readonly) _Bool hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;
@property (nonatomic) _Bool hasAppForAllActionsCoreMotionCurrentMotionLaunches;
@property (nonatomic) int appForAllActionsCoreMotionCurrentMotionLaunches;
@property (nonatomic) _Bool hasLocationDistanceFromHome;
@property (nonatomic) int locationDistanceFromHome;
@property (nonatomic) _Bool hasLocationDistanceFromWork;
@property (nonatomic) int locationDistanceFromWork;
@property (nonatomic) _Bool hasTotalAppActionTimeOfDayLaunches;
@property (nonatomic) int totalAppActionTimeOfDayLaunches;
@property (nonatomic) _Bool hasTotalAppForAllActionTimeOfDayLaunches;
@property (nonatomic) int totalAppForAllActionTimeOfDayLaunches;
@property (nonatomic) _Bool hasTotalAppActionCoarseTimeOfDayLaunches;
@property (nonatomic) int totalAppActionCoarseTimeOfDayLaunches;
@property (nonatomic) _Bool hasTotalAppForAllActionsCoarseTimeOfDayLaunches;
@property (nonatomic) int totalAppForAllActionsCoarseTimeOfDayLaunches;
@property (nonatomic, readonly) _Bool hasAppActionSequence;
@property (retain, nonatomic) AWDProactiveAppPredictionAppActionSequence *appActionSequence;
@property (nonatomic, readonly) _Bool hasSessionId;
@property (retain, nonatomic) NSString *sessionId;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)consumerSubTypeAsString:(int)arg1;
- (int)StringAsConsumerSubType:(id)arg1;
- (id)currentLOITypeAsString:(int)arg1;
- (int)StringAsCurrentLOIType:(id)arg1;
- (void)clearActionDatas;
- (void)addActionData:(id)arg1;
- (unsigned long long)actionDatasCount;
- (id)actionDataAtIndex:(unsigned long long)arg1;
- (void)clearEngagedActionCacheIndices;
- (void)addEngagedActionCacheIndices:(int)arg1;
- (int)engagedActionCacheIndicesAtIndex:(unsigned long long)arg1;
- (void)setEngagedActionCacheIndices:(int *)arg1 count:(unsigned long long)arg2;
- (id)engagementTypeAsString:(int)arg1;
- (int)StringAsEngagementType:(id)arg1;

@end

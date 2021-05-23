/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface AWDProactiveAppPredictionSession : PBCodable

{
    unsigned long long _timestamp;
    NSString *_aPREngagementType;
    NSString *_aPRFeedbackSource;
    NSString *_aPRSiriExperience;
    NSMutableArray *_appSequences;
    int _consumerSubType;
    NSString *_consumerType;
    int _coreMotionCurrentMotionLaunches;
    int _coreMotionLaunches;
    int _currentLOIType;
    int _dayOfWeek;
    int _engagedApp;
    NSString *_intentType;
    int _locationDistanceFromGym;
    int _locationDistanceFromHome;
    int _locationDistanceFromSchool;
    int _locationDistanceFromWork;
    int _outcome;
    int _predictionCacheAge;
    NSString *_sessionId;
    int _sessionLogVersion;
    int _timeOfDayInterval;
    int _totalAirplaneModeLaunches;
    int _totalCurrentDayOfWeekLaunches;
    int _totalDayOfWeekLaunches;
    int _totalLaunchSequences;
    int _totalLaunches;
    int _totalSSIDLaunches;
    int _totalSpotlightLaunches;
    int _totalSpotlightTimeOfDayLaunches;
    int _totalTimeOfDayLaunches;
    int _totalTrendingLaunches;
    int _totalWifiLaunches;
    _Bool _inAirplaneMode;
    _Bool _isInternalBuild;
    struct {
        unsigned int timestamp:1;
        unsigned int consumerSubType:1;
        unsigned int coreMotionCurrentMotionLaunches:1;
        unsigned int coreMotionLaunches:1;
        unsigned int currentLOIType:1;
        unsigned int dayOfWeek:1;
        unsigned int engagedApp:1;
        unsigned int locationDistanceFromGym:1;
        unsigned int locationDistanceFromHome:1;
        unsigned int locationDistanceFromSchool:1;
        unsigned int locationDistanceFromWork:1;
        unsigned int outcome:1;
        unsigned int predictionCacheAge:1;
        unsigned int sessionLogVersion:1;
        unsigned int timeOfDayInterval:1;
        unsigned int totalAirplaneModeLaunches:1;
        unsigned int totalCurrentDayOfWeekLaunches:1;
        unsigned int totalDayOfWeekLaunches:1;
        unsigned int totalLaunchSequences:1;
        unsigned int totalLaunches:1;
        unsigned int totalSSIDLaunches:1;
        unsigned int totalSpotlightLaunches:1;
        unsigned int totalSpotlightTimeOfDayLaunches:1;
        unsigned int totalTimeOfDayLaunches:1;
        unsigned int totalTrendingLaunches:1;
        unsigned int totalWifiLaunches:1;
        unsigned int inAirplaneMode:1;
        unsigned int isInternalBuild:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasCoreMotionLaunches;
@property (nonatomic) int coreMotionLaunches;
@property (nonatomic) _Bool hasTotalAirplaneModeLaunches;
@property (nonatomic) int totalAirplaneModeLaunches;
@property (nonatomic) _Bool hasInAirplaneMode;
@property (nonatomic) _Bool inAirplaneMode;
@property (nonatomic) _Bool hasCoreMotionCurrentMotionLaunches;
@property (nonatomic) int coreMotionCurrentMotionLaunches;
@property (nonatomic) _Bool hasTotalSpotlightLaunches;
@property (nonatomic) int totalSpotlightLaunches;
@property (nonatomic) _Bool hasTotalLaunchSequences;
@property (nonatomic) int totalLaunchSequences;
@property (nonatomic) _Bool hasTotalCurrentDayOfWeekLaunches;
@property (nonatomic) int totalCurrentDayOfWeekLaunches;
@property (nonatomic) _Bool hasTotalWifiLaunches;
@property (nonatomic) int totalWifiLaunches;
@property (nonatomic) _Bool hasTimeOfDayInterval;
@property (nonatomic) int timeOfDayInterval;
@property (nonatomic) _Bool hasConsumerSubType;
@property (nonatomic) int consumerSubType;
@property (nonatomic) _Bool hasCurrentLOIType;
@property (nonatomic) int currentLOIType;
@property (nonatomic) _Bool hasTotalLaunches;
@property (nonatomic) int totalLaunches;
@property (nonatomic) _Bool hasOutcome;
@property (nonatomic) int outcome;
@property (nonatomic) _Bool hasEngagedApp;
@property (nonatomic) int engagedApp;
@property (nonatomic) _Bool hasTotalTrendingLaunches;
@property (nonatomic) int totalTrendingLaunches;
@property (nonatomic) _Bool hasTotalTimeOfDayLaunches;
@property (nonatomic) int totalTimeOfDayLaunches;
@property (nonatomic) _Bool hasTotalSSIDLaunches;
@property (nonatomic) int totalSSIDLaunches;
@property (nonatomic) _Bool hasLocationDistanceFromHome;
@property (nonatomic) int locationDistanceFromHome;
@property (nonatomic) _Bool hasLocationDistanceFromWork;
@property (nonatomic) int locationDistanceFromWork;
@property (nonatomic) _Bool hasLocationDistanceFromSchool;
@property (nonatomic) int locationDistanceFromSchool;
@property (nonatomic) _Bool hasLocationDistanceFromGym;
@property (nonatomic) int locationDistanceFromGym;
@property (nonatomic) _Bool hasIsInternalBuild;
@property (nonatomic) _Bool isInternalBuild;
@property (nonatomic) _Bool hasPredictionCacheAge;
@property (nonatomic) int predictionCacheAge;
@property (nonatomic) _Bool hasSessionLogVersion;
@property (nonatomic) int sessionLogVersion;
@property (nonatomic) _Bool hasTotalSpotlightTimeOfDayLaunches;
@property (nonatomic) int totalSpotlightTimeOfDayLaunches;
@property (nonatomic) _Bool hasDayOfWeek;
@property (nonatomic) int dayOfWeek;
@property (nonatomic) _Bool hasTotalDayOfWeekLaunches;
@property (nonatomic) int totalDayOfWeekLaunches;
@property (retain, nonatomic) NSMutableArray *appSequences;
@property (nonatomic, readonly) _Bool hasAPRFeedbackSource;
@property (retain, nonatomic) NSString *aPRFeedbackSource;
@property (nonatomic, readonly) _Bool hasAPREngagementType;
@property (retain, nonatomic) NSString *aPREngagementType;
@property (nonatomic, readonly) _Bool hasAPRSiriExperience;
@property (retain, nonatomic) NSString *aPRSiriExperience;
@property (nonatomic, readonly) _Bool hasIntentType;
@property (retain, nonatomic) NSString *intentType;
@property (nonatomic, readonly) _Bool hasConsumerType;
@property (retain, nonatomic) NSString *consumerType;
@property (nonatomic, readonly) _Bool hasSessionId;
@property (retain, nonatomic) NSString *sessionId;

+ (Class)appSequenceType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)outcomeAsString:(int)arg1;
- (int)StringAsOutcome:(id)arg1;
- (id)consumerSubTypeAsString:(int)arg1;
- (int)StringAsConsumerSubType:(id)arg1;
- (id)currentLOITypeAsString:(int)arg1;
- (int)StringAsCurrentLOIType:(id)arg1;
- (void)clearAppSequences;
- (void)addAppSequence:(id)arg1;
- (unsigned long long)appSequencesCount;
- (id)appSequenceAtIndex:(unsigned long long)arg1;

@end

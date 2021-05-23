/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDSymptomsNetworkAnalyticsPredictions : PBCodable

{
    unsigned long long _lifetimeOldestItemSecs;
    unsigned long long _modelGraphPullups;
    unsigned long long _modelRecalls;
    unsigned long long _predictionQueries;
    unsigned long long _timeSinceLastTrainedSecs;
    unsigned long long _timestamp;
    unsigned long long _uniquePredictionClients;
    unsigned int _calendarTypeMarker;
    unsigned int _dayAlikeGroups;
    int _networkType;
    unsigned int _predictionErrorOver24hr1000;
    unsigned int _timeZoneMarker;
    int _trainingCompletionCode;
    unsigned int _trainingProgress1000;
    struct {
        unsigned int lifetimeOldestItemSecs:1;
        unsigned int modelGraphPullups:1;
        unsigned int modelRecalls:1;
        unsigned int predictionQueries:1;
        unsigned int timeSinceLastTrainedSecs:1;
        unsigned int timestamp:1;
        unsigned int uniquePredictionClients:1;
        unsigned int calendarTypeMarker:1;
        unsigned int dayAlikeGroups:1;
        unsigned int networkType:1;
        unsigned int predictionErrorOver24hr1000:1;
        unsigned int timeZoneMarker:1;
        unsigned int trainingCompletionCode:1;
        unsigned int trainingProgress1000:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasNetworkType;
@property (nonatomic) int networkType;
@property (nonatomic) _Bool hasTimeSinceLastTrainedSecs;
@property (nonatomic) unsigned long long timeSinceLastTrainedSecs;
@property (nonatomic) _Bool hasTrainingCompletionCode;
@property (nonatomic) int trainingCompletionCode;
@property (nonatomic) _Bool hasLifetimeOldestItemSecs;
@property (nonatomic) unsigned long long lifetimeOldestItemSecs;
@property (nonatomic) _Bool hasTrainingProgress1000;
@property (nonatomic) unsigned int trainingProgress1000;
@property (nonatomic) _Bool hasPredictionErrorOver24hr1000;
@property (nonatomic) unsigned int predictionErrorOver24hr1000;
@property (nonatomic) _Bool hasUniquePredictionClients;
@property (nonatomic) unsigned long long uniquePredictionClients;
@property (nonatomic) _Bool hasPredictionQueries;
@property (nonatomic) unsigned long long predictionQueries;
@property (nonatomic) _Bool hasModelRecalls;
@property (nonatomic) unsigned long long modelRecalls;
@property (nonatomic) _Bool hasModelGraphPullups;
@property (nonatomic) unsigned long long modelGraphPullups;
@property (nonatomic) _Bool hasTimeZoneMarker;
@property (nonatomic) unsigned int timeZoneMarker;
@property (nonatomic) _Bool hasCalendarTypeMarker;
@property (nonatomic) unsigned int calendarTypeMarker;
@property (nonatomic) _Bool hasDayAlikeGroups;
@property (nonatomic) unsigned int dayAlikeGroups;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)networkTypeAsString:(int)arg1;
- (int)StringAsNetworkType:(id)arg1;
- (id)trainingCompletionCodeAsString:(int)arg1;
- (int)StringAsTrainingCompletionCode:(id)arg1;

@end

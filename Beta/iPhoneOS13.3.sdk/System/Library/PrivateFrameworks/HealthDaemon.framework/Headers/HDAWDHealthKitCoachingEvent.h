/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDAWDHealthKitCoachingFeatureGroup;

@interface HDAWDHealthKitCoachingEvent : PBCodable <Swift>

{
    CDStruct_9f2792e4 _goalTypes;
    unsigned long long _duration;
    unsigned long long _eventTimestamp;
    unsigned long long _timestamp;
    unsigned int _dismissReason;
    unsigned int _eventType;
    HDAWDHealthKitCoachingFeatureGroup *_features;
    unsigned int _newGoal;
    unsigned int _recommendedGoal;
    struct {
        unsigned int duration:1;
        unsigned int eventTimestamp:1;
        unsigned int timestamp:1;
        unsigned int dismissReason:1;
        unsigned int eventType:1;
        unsigned int newGoal:1;
        unsigned int recommendedGoal:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasEventType;
@property (nonatomic) unsigned int eventType;
@property (nonatomic) _Bool hasDismissReason;
@property (nonatomic) unsigned int dismissReason;
@property (nonatomic, readonly) unsigned long long goalTypesCount;
@property (nonatomic, readonly) unsigned int *goalTypes;
@property (nonatomic) _Bool hasRecommendedGoal;
@property (nonatomic) unsigned int recommendedGoal;
@property (nonatomic) _Bool hasNewGoal;
@property (nonatomic) unsigned int newGoal;
@property (nonatomic) _Bool hasDuration;
@property (nonatomic) unsigned long long duration;
@property (nonatomic, readonly) _Bool hasFeatures;
@property (retain, nonatomic) HDAWDHealthKitCoachingFeatureGroup *features;
@property (nonatomic) _Bool hasEventTimestamp;
@property (nonatomic) unsigned long long eventTimestamp;

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
- (void)addGoalType:(unsigned int)arg1;
- (void)clearGoalTypes;
- (void)setGoalTypes:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)goalTypeAtIndex:(unsigned long long)arg1;

@end

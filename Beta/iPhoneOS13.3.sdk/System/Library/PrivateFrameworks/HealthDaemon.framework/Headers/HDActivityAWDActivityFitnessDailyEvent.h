/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSMutableArray, NSString;

@interface HDActivityAWDActivityFitnessDailyEvent : PBCodable <Swift>

{
    CDStruct_5df41632 _standEventMinutesSinceMidnightRoundedTo10s;
    long long _monthsSinceFirstWatchUsage;
    long long _moveRingCompletionPercentage;
    unsigned long long _timestamp;
    NSMutableArray *_exerciseMinuteHours;
    NSString *_userToken;
    struct {
        unsigned int monthsSinceFirstWatchUsage:1;
        unsigned int moveRingCompletionPercentage:1;
        unsigned int timestamp:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasUserToken;
@property (retain, nonatomic) NSString *userToken;
@property (nonatomic, readonly) unsigned long long standEventMinutesSinceMidnightRoundedTo10sCount;
@property (nonatomic, readonly) long long *standEventMinutesSinceMidnightRoundedTo10s;
@property (retain, nonatomic) NSMutableArray *exerciseMinuteHours;
@property (nonatomic) _Bool hasMoveRingCompletionPercentage;
@property (nonatomic) long long moveRingCompletionPercentage;
@property (nonatomic) _Bool hasMonthsSinceFirstWatchUsage;
@property (nonatomic) long long monthsSinceFirstWatchUsage;

+ (Class)exerciseMinuteHoursType;

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
- (void)addStandEventMinutesSinceMidnightRoundedTo10:(long long)arg1;
- (void)addExerciseMinuteHours:(id)arg1;
- (void)clearStandEventMinutesSinceMidnightRoundedTo10s;
- (long long)standEventMinutesSinceMidnightRoundedTo10AtIndex:(unsigned long long)arg1;
- (unsigned long long)exerciseMinuteHoursCount;
- (void)clearExerciseMinuteHours;
- (id)exerciseMinuteHoursAtIndex:(unsigned long long)arg1;
- (void)setStandEventMinutesSinceMidnightRoundedTo10s:(long long *)arg1 count:(unsigned long long)arg2;

@end

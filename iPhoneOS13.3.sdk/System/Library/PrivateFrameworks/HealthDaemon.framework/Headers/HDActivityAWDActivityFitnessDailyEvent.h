//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray, NSString;

@interface HDActivityAWDActivityFitnessDailyEvent : PBCodable <NSCopying>
{
    CDStruct_5df41632 _standEventMinutesSinceMidnightRoundedTo10s;
    long long _monthsSinceFirstWatchUsage;
    long long _moveRingCompletionPercentage;
    NSUInteger _timestamp;
    NSMutableArray *_exerciseMinuteHours;
    NSString *_userToken;
    struct {
        unsigned int monthsSinceFirstWatchUsage:1;
        unsigned int moveRingCompletionPercentage:1;
        unsigned int timestamp:1;
    } _has;
}

+ (Class)exerciseMinuteHoursType;
@property(nonatomic) long long monthsSinceFirstWatchUsage; // @synthesize monthsSinceFirstWatchUsage=_monthsSinceFirstWatchUsage;
@property(nonatomic) long long moveRingCompletionPercentage; // @synthesize moveRingCompletionPercentage=_moveRingCompletionPercentage;
@property(retain, nonatomic) NSMutableArray *exerciseMinuteHours; // @synthesize exerciseMinuteHours=_exerciseMinuteHours;
@property(retain, nonatomic) NSString *userToken; // @synthesize userToken=_userToken;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasMonthsSinceFirstWatchUsage;
@property(nonatomic) BOOL hasMoveRingCompletionPercentage;
- (id)exerciseMinuteHoursAtIndex:(NSUInteger)arg1;
- (NSUInteger)exerciseMinuteHoursCount;
- (void)addExerciseMinuteHours:(id)arg1;
- (void)clearExerciseMinuteHours;
- (void)setStandEventMinutesSinceMidnightRoundedTo10s:(long long )arg1 count:(NSUInteger)arg2;
- (long long)standEventMinutesSinceMidnightRoundedTo10AtIndex:(NSUInteger)arg1;
- (void)addStandEventMinutesSinceMidnightRoundedTo10:(long long)arg1;
- (void)clearStandEventMinutesSinceMidnightRoundedTo10s;
@property(readonly, nonatomic) long long standEventMinutesSinceMidnightRoundedTo10s;
@property(readonly, nonatomic) NSUInteger standEventMinutesSinceMidnightRoundedTo10sCount;
@property(readonly, nonatomic) BOOL hasUserToken;
@property(nonatomic) BOOL hasTimestamp;
- (void)dealloc;

@end


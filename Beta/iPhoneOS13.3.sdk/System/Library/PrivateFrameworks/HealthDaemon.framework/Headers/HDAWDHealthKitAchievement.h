/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSString;

@interface HDAWDHealthKitAchievement : PBCodable <Swift>

{
    long long _completedDate;
    long long _value;
    int _achievementType;
    NSString *_definitionIdentifier;
    int _workoutActivityType;
    struct {
        unsigned int completedDate:1;
        unsigned int value:1;
        unsigned int achievementType:1;
        unsigned int workoutActivityType:1;
    } _has;
}

@property (nonatomic) _Bool hasAchievementType;
@property (nonatomic) int achievementType;
@property (nonatomic) _Bool hasCompletedDate;
@property (nonatomic) long long completedDate;
@property (nonatomic) _Bool hasValue;
@property (nonatomic) long long value;
@property (nonatomic, readonly) _Bool hasDefinitionIdentifier;
@property (retain, nonatomic) NSString *definitionIdentifier;
@property (nonatomic) _Bool hasWorkoutActivityType;
@property (nonatomic) int workoutActivityType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)achievementTypeAsString:(int)arg1;
- (int)StringAsAchievementType:(id)arg1;
- (id)workoutActivityTypeAsString:(int)arg1;
- (int)StringAsWorkoutActivityType:(id)arg1;

@end

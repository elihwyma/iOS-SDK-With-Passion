/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthKit/Swift-Protocol.h>

@class NSMutableArray;

@interface HKCodableCondensedWorkoutCollection : PBCodable <Swift>

{
    NSMutableArray *_workouts;
}

@property (retain, nonatomic) NSMutableArray *workouts;

+ (Class)workoutsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addWorkouts:(id)arg1;
- (unsigned long long)workoutsCount;
- (void)clearWorkouts;
- (id)workoutsAtIndex:(unsigned long long)arg1;

@end

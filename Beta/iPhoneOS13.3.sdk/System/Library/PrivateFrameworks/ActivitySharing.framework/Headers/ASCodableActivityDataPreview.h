/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <ProtocolBuffer/PBCodable.h>

@class ASCodableCloudKitActivitySnapshot, NSMutableArray;

@interface ASCodableActivityDataPreview : PBCodable

{
    double _date;
    NSMutableArray *_achievements;
    ASCodableCloudKitActivitySnapshot *_activitySnapshot;
    NSMutableArray *_workouts;
    struct {
        unsigned int date:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasActivitySnapshot;
@property (retain, nonatomic) ASCodableCloudKitActivitySnapshot *activitySnapshot;
@property (retain, nonatomic) NSMutableArray *workouts;
@property (retain, nonatomic) NSMutableArray *achievements;
@property (nonatomic) _Bool hasDate;
@property (nonatomic) double date;

+ (Class)workoutsType;
+ (Class)achievementsType;

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
- (void)addAchievements:(id)arg1;
- (unsigned long long)achievementsCount;
- (void)clearAchievements;
- (id)achievementsAtIndex:(unsigned long long)arg1;

@end

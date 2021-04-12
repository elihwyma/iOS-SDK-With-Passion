//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class ASCodableCloudKitActivitySnapshot, NSMutableArray;

@interface ASCodableActivityDataPreview : PBCodable <NSCopying>
{
    double _date;
    NSMutableArray *_achievements;
    ASCodableCloudKitActivitySnapshot *_activitySnapshot;
    NSMutableArray *_workouts;
    struct {
        unsigned int date:1;
    } _has;
}

+ (Class)achievementsType;
+ (Class)workoutsType;
@property(nonatomic) double date; // @synthesize date=_date;
@property(retain, nonatomic) NSMutableArray *achievements; // @synthesize achievements=_achievements;
@property(retain, nonatomic) NSMutableArray *workouts; // @synthesize workouts=_workouts;
@property(retain, nonatomic) ASCodableCloudKitActivitySnapshot *activitySnapshot; // @synthesize activitySnapshot=_activitySnapshot;
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
@property(nonatomic) BOOL hasDate;
- (id)achievementsAtIndex:(NSUInteger)arg1;
- (NSUInteger)achievementsCount;
- (void)addAchievements:(id)arg1;
- (void)clearAchievements;
- (id)workoutsAtIndex:(NSUInteger)arg1;
- (NSUInteger)workoutsCount;
- (void)addWorkouts:(id)arg1;
- (void)clearWorkouts;
@property(readonly, nonatomic) BOOL hasActivitySnapshot;

@end


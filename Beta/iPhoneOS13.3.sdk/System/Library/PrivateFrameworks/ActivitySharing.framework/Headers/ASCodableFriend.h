/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <ProtocolBuffer/PBCodable.h>

@class ASCodableContact, NSMutableArray;

@interface ASCodableFriend : PBCodable

{
    NSMutableArray *_achievements;
    NSMutableArray *_competitions;
    ASCodableContact *_contact;
    NSMutableArray *_snapshots;
    NSMutableArray *_workouts;
}

@property (nonatomic, readonly) _Bool hasContact;
@property (retain, nonatomic) ASCodableContact *contact;
@property (retain, nonatomic) NSMutableArray *snapshots;
@property (retain, nonatomic) NSMutableArray *workouts;
@property (retain, nonatomic) NSMutableArray *achievements;
@property (retain, nonatomic) NSMutableArray *competitions;

+ (Class)workoutsType;
+ (Class)achievementsType;
+ (Class)snapshotsType;
+ (Class)competitionsType;

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
- (void)addSnapshots:(id)arg1;
- (void)addCompetitions:(id)arg1;
- (unsigned long long)snapshotsCount;
- (void)clearSnapshots;
- (id)snapshotsAtIndex:(unsigned long long)arg1;
- (unsigned long long)competitionsCount;
- (void)clearCompetitions;
- (id)competitionsAtIndex:(unsigned long long)arg1;

@end

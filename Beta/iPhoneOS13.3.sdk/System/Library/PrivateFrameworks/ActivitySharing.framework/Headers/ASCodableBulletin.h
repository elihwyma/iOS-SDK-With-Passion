/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface ASCodableBulletin : PBCodable

{
    long long _competitionStage;
    double _timestamp;
    long long _type;
    NSData *_achievementData;
    NSData *_friendListData;
    NSString *_friendUUID;
    NSData *_snapshotData;
    NSString *_title;
    NSData *_workoutData;
    struct {
        unsigned int competitionStage:1;
        unsigned int timestamp:1;
        unsigned int type:1;
    } _has;
}

@property (nonatomic) _Bool hasType;
@property (nonatomic) long long type;
@property (nonatomic, readonly) _Bool hasTitle;
@property (retain, nonatomic) NSString *title;
@property (nonatomic, readonly) _Bool hasFriendUUID;
@property (retain, nonatomic) NSString *friendUUID;
@property (nonatomic, readonly) _Bool hasFriendListData;
@property (retain, nonatomic) NSData *friendListData;
@property (nonatomic, readonly) _Bool hasAchievementData;
@property (retain, nonatomic) NSData *achievementData;
@property (nonatomic, readonly) _Bool hasWorkoutData;
@property (retain, nonatomic) NSData *workoutData;
@property (nonatomic, readonly) _Bool hasSnapshotData;
@property (retain, nonatomic) NSData *snapshotData;
@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) _Bool hasCompetitionStage;
@property (nonatomic) long long competitionStage;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end

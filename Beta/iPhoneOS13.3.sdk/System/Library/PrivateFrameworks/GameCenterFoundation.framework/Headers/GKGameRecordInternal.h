/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKGameInternal.h>

@class GKScoreInternal, NSDate;

@interface GKGameRecordInternal : GKGameInternal

{
    GKScoreInternal *_score;
    NSDate *_lastPlayedDate;
    NSDate *_purchaseDate;
    unsigned short _achievements;
    short _achievementPoints;
    unsigned short _friendRank;
    unsigned short _maxFriendRank;
    unsigned int _rank;
    unsigned int _maxRank;
}

@property (retain, nonatomic) GKScoreInternal *score;
@property (retain, nonatomic) NSDate *lastPlayedDate;
@property (retain, nonatomic) NSDate *purchaseDate;
@property (nonatomic) unsigned short achievements;
@property (nonatomic) short achievementPoints;
@property (nonatomic) unsigned short friendRank;
@property (nonatomic) unsigned short maxFriendRank;
@property (nonatomic) unsigned int rank;
@property (nonatomic) unsigned int maxRank;

+ (id)gameRecordForGame:(id)arg1;
+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (void)updateWithGame:(id)arg1;

@end

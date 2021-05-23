/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKScoreInternal, NSArray, NSDate, NSDictionary, NSString;

@interface GKLeaderboardInternal : GKInternalRepresentation

{
    NSString *_identifier;
    NSString *_groupIdentifier;
    NSString *_title;
    NSString *_leaderboardSetIdentifier;
    NSDate *_lastSubmittedDate;
    NSDictionary *_icons;
    unsigned int _overallRank;
    unsigned int _overallRankCount;
    unsigned short _friendRank;
    unsigned short _friendRankCount;
    unsigned int _maxRank;
    NSArray *_scores;
    GKScoreInternal *_playerScore;
}

@property (retain, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) NSString *category;
@property (nonatomic, readonly) unsigned long long maxRange;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *groupIdentifier;
@property (retain, nonatomic) NSString *leaderboardSetIdentifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *lastSubmittedDate;
@property (retain, nonatomic) NSDictionary *icons;
@property (nonatomic) unsigned int overallRank;
@property (nonatomic) unsigned int overallRankCount;
@property (nonatomic) unsigned short friendRank;
@property (nonatomic) unsigned short friendRankCount;
@property (nonatomic) unsigned int maxRank;
@property (retain, nonatomic) NSArray *scores;
@property (retain, nonatomic) GKScoreInternal *playerScore;

+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

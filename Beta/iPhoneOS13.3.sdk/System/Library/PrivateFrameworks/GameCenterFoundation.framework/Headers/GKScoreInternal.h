/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, NSDate, NSString;

@interface GKScoreInternal : GKInternalRepresentation

{
    GKPlayerInternal *_player;
    NSString *_leaderboardIdentifier;
    NSString *_groupLeaderboardIdentifier;
    NSString *_formattedValue;
    NSDate *_date;
    long long _value;
    unsigned long long _context;
    unsigned int _rank;
    _Bool _valueSet;
}

@property (nonatomic, readonly) NSString *playerID;
@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSString *groupCategory;
@property (retain, nonatomic) GKPlayerInternal *player;
@property (retain, nonatomic) NSString *leaderboardIdentifier;
@property (retain, nonatomic) NSString *groupLeaderboardIdentifier;
@property (retain, nonatomic) NSString *formattedValue;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) long long value;
@property (nonatomic) unsigned long long context;
@property (nonatomic) unsigned int rank;
@property (nonatomic) _Bool valueSet;

+ (_Bool)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)serverRepresentation;

@end

/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKGameDescriptor.h>

@class GKStoreItemInternal, NSDictionary, NSString;

@interface GKGameInternal : GKGameDescriptor

{
    NSString *_name;
    NSDictionary *_icons;
    NSString *_defaultLeaderboardIdentifier;
    GKStoreItemInternal *_storeItem;
    union {
        struct {
            unsigned int _platform_unused:8;
            unsigned int _prerendered:1;
            unsigned int _supportsLeaderboards:1;
            unsigned int _supportsLeaderboardSets:1;
            unsigned int _hasAggregateLeaderboard:1;
            unsigned int _supportsAchievements:1;
            unsigned int _supportsMultiplayer:1;
            unsigned int _valid:1;
            unsigned int _unused:1;
            unsigned int _supportsTurnBasedMultiplayer:1;
            unsigned int _reserved:15;
        } ;
        unsigned int _value;
    } _flags;
    unsigned short _numberOfLeaderboards;
    unsigned short _numberOfLeaderboardSets;
    unsigned short _numberOfAchievements;
    unsigned short _maxAchievementPoints;
}

@property (nonatomic) unsigned int flags;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *icons;
@property (nonatomic, getter=isPrerendered) _Bool prerendered;
@property (nonatomic) _Bool supportsLeaderboards;
@property (nonatomic) _Bool hasAggregateLeaderboard;
@property (nonatomic) unsigned short numberOfLeaderboards;
@property (retain, nonatomic) NSString *defaultLeaderboardIdentifier;
@property (nonatomic) _Bool supportsLeaderboardSets;
@property (nonatomic) unsigned short numberOfLeaderboardSets;
@property (nonatomic) _Bool supportsAchievements;
@property (nonatomic) unsigned short numberOfAchievements;
@property (nonatomic) unsigned short maxAchievementPoints;
@property (nonatomic) _Bool supportsMultiplayer;
@property (nonatomic) _Bool supportsTurnBasedMultiplayer;
@property (nonatomic, readonly) _Bool canBeIndexed;
@property (nonatomic, getter=isValid) _Bool valid;
@property (retain, nonatomic) GKStoreItemInternal *storeItem;
@property (nonatomic, readonly) GKGameDescriptor *gameDescriptor;

+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (unsigned short)numberOfCategories;
- (id)defaultCategory;
- (id)serverRepresentation;

@end

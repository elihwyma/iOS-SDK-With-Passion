/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSDictionary, NSString;

@interface GKLeaderboardSetInternal : GKInternalRepresentation

{
    NSString *_identifier;
    NSString *_groupIdentifier;
    NSString *_title;
    NSDictionary *_leaderboardIdentifiers;
    NSDictionary *_icons;
}

@property (retain, nonatomic) NSString *setIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *groupIdentifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDictionary *leaderboardIdentifiers;
@property (retain, nonatomic) NSDictionary *icons;

+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

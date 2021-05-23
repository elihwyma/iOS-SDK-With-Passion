/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKGameRecordInternal, GKPlayerInternal, NSDate;

@interface GKRecentMatchInternal : GKInternalRepresentation

{
    GKPlayerInternal *_player;
    GKGameRecordInternal *_game;
    NSDate *_date;
}

@property (retain, nonatomic) GKPlayerInternal *player;
@property (retain, nonatomic) GKGameRecordInternal *game;
@property (retain, nonatomic) NSDate *date;

+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

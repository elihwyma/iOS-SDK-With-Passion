/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKPlayer, GKTournamentParticipantInternal;

@interface GKTournamentParticipant : NSObject

{
    GKTournamentParticipantInternal *_internal;
    GKPlayer *_player;
}

@property (retain) GKTournamentParticipantInternal *internal;
@property (retain, nonatomic) GKPlayer *player;
@property (nonatomic, readonly) long long score;
@property (nonatomic, readonly) long long playerGroup;
@property (nonatomic, readonly) long long replayCount;
@property (nonatomic, readonly) long long participantState;
@property (nonatomic, readonly) _Bool cheatingIndicator;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;

@end

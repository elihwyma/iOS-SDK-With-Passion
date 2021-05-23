/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, NSDate, NSString;

@interface GKTurnBasedParticipantInternal : GKInternalRepresentation

{
    NSString *_sessionID;
    GKPlayerInternal *_player;
    GKPlayerInternal *_invitedBy;
    NSString *_inviteMessage;
    NSString *_status;
    NSDate *_lastTurnDate;
    NSDate *_timeoutDate;
    unsigned int _matchOutcome;
    unsigned char _slot;
}

@property (nonatomic, readonly) NSString *playerID;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) GKPlayerInternal *player;
@property (retain, nonatomic) GKPlayerInternal *invitedBy;
@property (retain, nonatomic) NSString *inviteMessage;
@property (retain, nonatomic) NSString *status;
@property (retain, nonatomic) NSDate *lastTurnDate;
@property (retain, nonatomic) NSDate *timeoutDate;
@property (nonatomic) unsigned int matchOutcome;
@property (nonatomic) unsigned char slot;
@property (nonatomic, readonly) _Bool isAutomatchParticipant;

+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serverRepresentation;
- (id)descriptionSubstitutionMap;

@end

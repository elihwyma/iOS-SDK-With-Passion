/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKPlayer, GKTurnBasedParticipantInternal, NSDate, NSString;

@interface GKTurnBasedParticipant : NSObject

{
    GKTurnBasedParticipantInternal *_internal;
}

@property (retain, readonly) GKTurnBasedParticipantInternal *internal;
@property (copy, nonatomic) NSDate *lastTurnDate;
@property (copy, nonatomic) NSDate *timeoutDate;
@property (nonatomic, readonly) NSString *matchStatusString;
@property (nonatomic, readonly) NSString *matchOutcomeString;
@property (nonatomic, readonly) _Bool isWinner;
@property (nonatomic, readonly) GKPlayer *invitedBy;
@property (nonatomic, readonly) NSString *inviteMessage;
@property (nonatomic, readonly) _Bool isLocalPlayer;
@property (retain, nonatomic, readonly) GKPlayer *player;
@property (nonatomic, readonly) long long status;
@property (nonatomic) long long matchOutcome;
@property (copy, nonatomic, readonly) NSString *playerID;

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (id)keyPathsForValuesAffectingStatus;
+ (id)stringForMatchOutcome:(long long)arg1;
+ (id)keyPathsForValuesAffectingBasicMatchOutcomeString;
+ (id)keyPathsForValuesAffectingMatchOutcomeString;
+ (_Bool)matchOutcomeIsValidForDoneState:(long long)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)setStatus:(long long)arg1;
- (id)matchOutcomeStringForLocalPlayer;
- (id)basicMatchOutcomeString;

@end

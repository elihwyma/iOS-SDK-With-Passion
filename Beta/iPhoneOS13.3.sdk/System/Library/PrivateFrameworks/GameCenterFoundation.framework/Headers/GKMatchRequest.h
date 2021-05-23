/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKMatchRequestInternal, GKTournament, NSArray, NSString;

@interface GKMatchRequest : NSObject

{
    GKMatchRequestInternal *_internal;
    CDUnknownBlockType _inviteeResponseHandler;
    CDUnknownBlockType _recipientResponseHandler;
}

@property (retain) GKMatchRequestInternal *internal;
@property (retain) GKTournament *tournamentForInvitePool;
@property unsigned long long minPlayers;
@property unsigned long long maxPlayers;
@property unsigned long long playerGroup;
@property unsigned int playerAttributes;
@property (retain) NSArray *recipients;
@property (retain) NSArray *playersToInvite;
@property (copy) NSString *inviteMessage;
@property unsigned long long defaultNumberOfPlayers;
@property _Bool restrictToAutomatch;
@property (copy) CDUnknownBlockType recipientResponseHandler;
@property (copy) CDUnknownBlockType inviteeResponseHandler;

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (unsigned long long)maxPlayersAllowedForMatchOfType:(unsigned long long)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithInternalRepresentation:(id)arg1;
- (_Bool)isIncorrectlyInvitingPlayers;
- (_Bool)isValidForHosted:(_Bool)arg1;
- (id)guestPlayers;
- (void)removeLocalPlayerFromPlayersToInvite;
- (void)loadRecipientsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)isConfiguredForAutomatchOnly;
- (_Bool)isTurnBasedValid;
- (_Bool)defaultNumberOfPlayersIsValid;
- (_Bool)isValidWithMax:(unsigned long long)arg1;
- (void)ensureValidityHosted:(_Bool)arg1;
- (_Bool)isRecipientCountValid;

@end

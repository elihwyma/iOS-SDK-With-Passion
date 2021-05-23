/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

#import <GameCenterFoundation/Swift-Protocol.h>

@class GKGame, GKPlayer, GKTurnBasedMatchInternal, GKTurnBasedParticipant, NSArray, NSData, NSDate, NSString;

@interface GKTurnBasedMatch : NSObject <Swift>

{
    unsigned int _state;
    GKTurnBasedMatchInternal *_internal;
    NSArray *_participants;
    NSArray *_exchanges;
}

@property (copy, nonatomic) NSDate *lastTurnDate;
@property (nonatomic, readonly) long long turnNumber;
@property (nonatomic, readonly) NSDate *dateSortKey;
@property (retain, nonatomic) GKTurnBasedParticipant *currentParticipant;
@property (nonatomic, readonly) GKTurnBasedParticipant *previousParticipant;
@property (nonatomic, readonly) GKTurnBasedParticipant *previousParticipantOrFirstKnownPlayer;
@property (nonatomic, readonly) GKTurnBasedParticipant *playingWithParticipantOrFirstKnownPlayer;
@property (nonatomic, readonly) GKTurnBasedParticipant *localPlayerParticipant;
@property (nonatomic, readonly) GKPlayer *showcasePlayer;
@property (nonatomic, readonly) GKTurnBasedParticipant *firstWinnerOrTiedOrLastLoser;
@property (nonatomic) unsigned long long matchDataMaximumSize;
@property (nonatomic, readonly) GKPlayer *currentPlayer;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *bundleVersion;
@property (retain, nonatomic) NSString *shortBundleVersion;
@property (nonatomic, readonly) long long platform;
@property (nonatomic) unsigned int state;
@property (nonatomic, readonly) _Bool isMyTurn;
@property (nonatomic, readonly) _Bool localPlayerHasRecentTurn;
@property (nonatomic, readonly) GKGame *game;
@property (retain) GKTurnBasedMatchInternal *internal;
@property (retain, nonatomic, readonly) NSString *matchID;
@property (retain, nonatomic, readonly) NSDate *creationDate;
@property (retain, nonatomic, readonly) NSArray *participants;
@property (nonatomic, readonly) long long status;
@property (retain, nonatomic, readonly) NSData *matchData;
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic, readonly) NSArray *exchanges;
@property (retain, nonatomic, readonly) NSArray *activeExchanges;
@property (retain, nonatomic, readonly) NSArray *completedExchanges;
@property (nonatomic, readonly) unsigned long long exchangeDataMaximumSize;
@property (nonatomic, readonly) unsigned long long exchangeMaxInitiatedExchangesPerPlayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (id)keyPathsForValuesAffectingStatus;
+ (void)loadTurnBasedMatchSummariesIncludingCompatibleBundleID:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)loadTurnBasedMatchWithDetailsForMatchID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)findMatchForRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)loadMatchWithID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)getTurnBasedBadgeCountWithHandler:(CDUnknownBlockType)arg1;
+ (void)loadMatchesIncludingCompatibleBundleID:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)matchesWithInternalRepresentations:(id)arg1;
+ (void)loadTurnBasedMatchDetailsForMatchIDs:(id)arg1 loadGameData:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (id)_localizableMessageWithKey:(id)arg1 arguments:(id)arg2 defaultMessage:(id)arg3;
+ (void)loadMatchesWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)loadTurnBasedMatchSummaries:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (long long)compare:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)acceptInviteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)declineInviteWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)participantQuitOutOfTurnWithOutcome:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadMatchDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadURLWithMatchRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reserveShareParticipantSlots:(long long)arg1 minPlayerCount:(long long)arg2 maxPlayerCount:(long long)arg3 andInvitePlayers:(id)arg4 withMessage:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (void)endMatchInTurnWithMatchData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)rematchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)exchangeForID:(id)arg1;
- (void)_updateWithInternal:(id)arg1;
- (id)_participantsForInternalRepresentation:(id)arg1;
- (id)_exchangesForInternalRepresentation:(id)arg1 participants:(id)arg2;
- (void)setLocalizableMessageWithKey:(id)arg1 arguments:(id)arg2;
- (void)endTurnWithNextParticipants:(id)arg1 turnTimeout:(double)arg2 matchData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)indexesForParticipants:(id)arg1;
- (void)participantQuitInTurnWithOutcome:(long long)arg1 nextParticipants:(id)arg2 turnTimeout:(double)arg3 matchData:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)endMatchInTurnWithMatchData:(id)arg1 scores:(id)arg2 achievements:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)endTurnWithNextParticipant:(id)arg1 matchData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)participantQuitInTurnWithOutcome:(long long)arg1 nextParticipant:(id)arg2 matchData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)saveCurrentTurnWithMatchData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveMergedMatchData:(id)arg1 withResolvedExchanges:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendExchangeToParticipants:(id)arg1 data:(id)arg2 localizableMessageKey:(id)arg3 arguments:(id)arg4 timeout:(double)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)sendReminderToParticipants:(id)arg1 localizableMessageKey:(id)arg2 arguments:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

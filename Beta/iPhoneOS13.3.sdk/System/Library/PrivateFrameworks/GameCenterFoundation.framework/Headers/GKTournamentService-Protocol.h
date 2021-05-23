/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/Swift-Protocol.h>

@protocol GKTournamentService <Swift>

- (unsigned short)loadTournamentDefinitionsWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)loadTournamentDefinitionWithID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)loadTournamentsWithPredicate:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)loadHistoricalDataForPlayer:tournamentDefinition:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getAcceptedCustomTournamentWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)reportScore:withTryToken:forTournament:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)reportProgressScore:withTryToken:forTournament:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)registerPlayerInTournament:playerGroup:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)resignFromTournament:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)beginPlayInTournament:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)resumePlayInTournament:withTryToken:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getTotalPlayerCountInTournament:forGroup:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getFriendCountInTournament:forGroup:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getLocalParticipantForTournament:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)loadParticipantsForTournament:request:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getTournamentStateForTournament:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)addInvitees:forTournament:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeInvitees:forTournament:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)addCreator:forTournament:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeCreator:forTournament:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)acceptInvitationForTournament:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)declineInvitationForTournament:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getShareURLForCustomTournament:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)createCustomTournamentWithRequest:completionHandler: /* Error: Ran out of types for this method. */;

@end

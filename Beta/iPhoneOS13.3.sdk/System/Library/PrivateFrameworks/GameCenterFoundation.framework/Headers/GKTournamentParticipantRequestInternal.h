/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSArray;

@interface GKTournamentParticipantRequestInternal : GKInternalRepresentation

{
    _Bool _friendsOnly;
    NSArray *_participantStates;
    long long _startIndex;
    long long _count;
}

@property (retain, nonatomic) NSArray *participantStates;
@property (nonatomic) _Bool friendsOnly;
@property (nonatomic) long long startIndex;
@property (nonatomic) long long count;

+ (id)secureCodedPropertyKeys;

@end

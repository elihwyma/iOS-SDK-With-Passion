/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKGameInternal, GKPlayerInternal, NSArray, NSData, NSDate, NSDictionary, NSString;

@interface GKTurnBasedMatchInternal : GKInternalRepresentation

{
    NSString *_matchID;
    NSString *_status;
    unsigned int _state;
    NSString *_message;
    NSDictionary *_localizableMessage;
    NSString *_reason;
    NSDate *_creationDate;
    NSDate *_lastTurnDate;
    NSDate *_deletionDate;
    GKPlayerInternal *_currentPlayer;
    NSString *_lastTurnPlayerID;
    NSData *_matchData;
    NSString *_matchDataVersion;
    NSArray *_participants;
    NSString *_bundleID;
    NSString *_bundleVersion;
    NSString *_shortBundleVersion;
    long long _platform;
    GKGameInternal *_game;
    NSArray *_exchanges;
    unsigned int _turnNumber;
    unsigned char _minPlayers;
    unsigned char _maxPlayers;
    BOOL _currentParticipant;
}

@property (retain, nonatomic) NSString *matchID;
@property (retain, nonatomic) NSString *status;
@property (nonatomic) unsigned int state;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *lastTurnDate;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSDictionary *localizableMessage;
@property (retain, nonatomic) NSString *reason;
@property (nonatomic) unsigned char minPlayers;
@property (nonatomic) unsigned char maxPlayers;
@property (retain, nonatomic) NSDate *deletionDate;
@property (nonatomic) BOOL currentParticipant;
@property (nonatomic) unsigned int turnNumber;
@property (retain, nonatomic) NSString *lastTurnPlayerID;
@property (retain, nonatomic) NSData *matchData;
@property (retain, nonatomic) NSString *matchDataVersion;
@property (retain, nonatomic) NSArray *participants;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *bundleVersion;
@property (retain, nonatomic) NSString *shortBundleVersion;
@property (nonatomic) long long platform;
@property (retain, nonatomic) NSArray *exchanges;
@property (retain, nonatomic) GKGameInternal *game;
@property (retain, nonatomic) GKPlayerInternal *currentPlayer;

+ (id)secureCodedPropertyKeys;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)descriptionSubstitutionMap;
- (long long)previousParticipantIndex;
- (long long)localPlayerParticipantIndex;
- (long long)activeExchangeCount;

@end

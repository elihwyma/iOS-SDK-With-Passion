/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class GKPlayer, NSMutableArray, NSMutableDictionary;

@interface GKMatchEventQueue : NSObject

{
    GKPlayer *_player;
    GKPlayer *_hostPlayer;
    NSMutableArray *_events;
    NSMutableDictionary *_connectionInfo;
    long long _playerState;
    long long _deferedPlayerState;
    unsigned int _sequenceNumber;
    _Bool _counted;
    _Bool _okToSend;
    _Bool _relayInitiated;
    _Bool _hasInitRelayInfo;
    _Bool _hasUpdateRelayInfo;
}

@property (retain, nonatomic) NSMutableArray *events;
@property (retain, nonatomic) GKPlayer *player;
@property (retain, nonatomic) GKPlayer *hostPlayer;
@property (retain, nonatomic) NSMutableDictionary *connectionInfo;
@property (nonatomic) long long playerState;
@property (nonatomic) long long deferedPlayerState;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) _Bool counted;
@property (nonatomic) _Bool okToSend;
@property (nonatomic) _Bool relayInitiated;
@property (nonatomic) _Bool hasInitRelayInfo;
@property (nonatomic) _Bool hasUpdateRelayInfo;

- (id)init;
- (void)dealloc;

@end

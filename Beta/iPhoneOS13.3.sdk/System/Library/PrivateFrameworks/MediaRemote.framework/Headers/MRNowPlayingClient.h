/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, _MRNowPlayingClientProtobuf, _MRNowPlayingPlayerPathProtobuf, _MRNowPlayingPlayerProtobuf;

@interface MRNowPlayingClient : NSObject

{
    _MRNowPlayingPlayerProtobuf *_activePlayer;
    NSMutableArray *_playerClients;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
}

@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (retain, nonatomic) _MRNowPlayingClientProtobuf *client;
@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *activePlayerPath;
@property (nonatomic, readonly) NSArray *playerClients;

- (id)description;
- (id)debugDescription;
- (id)initWithPlayerPath:(id)arg1;
- (_Bool)updateActivePlayerPath:(id)arg1;
- (void)mergeClient:(id)arg1;
- (void)restoreNowPlayingClientState;
- (void)removePlayer:(id)arg1;
- (id)nowPlayingPlayerClientForPlayerPath:(id)arg1;

@end

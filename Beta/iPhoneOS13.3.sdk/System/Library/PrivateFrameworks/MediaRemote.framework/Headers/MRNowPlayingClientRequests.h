/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, _MRNowPlayingClientProtobuf;

__attribute__((visibility("hidden")))
@interface MRNowPlayingClientRequests : NSObject

{
    NSMutableArray *_playerClients;
    _MRNowPlayingClientProtobuf *_client;
    NSArray *_nowPlayingClients;
}

@property (nonatomic, readonly) _MRNowPlayingClientProtobuf *client;
@property (nonatomic, readonly) NSArray *nowPlayingClients;

- (id)debugDescription;
- (id)initWithClient:(id)arg1;
- (void)restoreNowPlayingClientState;
- (id)playerClients;
- (id)nowPlayingPlayerClientRequestsForPlayerPath:(id)arg1;
- (id)existingNowPlayingPlayerClientRequestsForPlayerPath:(id)arg1;
- (void)removePlayer:(id)arg1;

@end

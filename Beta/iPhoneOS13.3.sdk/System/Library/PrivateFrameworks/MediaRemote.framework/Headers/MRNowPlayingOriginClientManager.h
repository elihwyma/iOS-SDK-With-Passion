/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface MRNowPlayingOriginClientManager : NSObject

{
    NSMutableDictionary *_originClients;
    NSMutableDictionary *_originClientRequests;
}

+ (id)sharedManager;

- (id)init;
- (id)debugDescription;
- (void)removeClient:(id)arg1;
- (id)playerClientForPlayerPath:(id)arg1;
- (id)originClientForOrigin:(id)arg1;
- (id)localOriginClient;
- (id)clientForPlayerPath:(id)arg1;
- (id)playerClientRequestsForPlayerPath:(id)arg1;
- (id)originClientForPlayerPath:(id)arg1;
- (void)restoreNowPlayingClientState;
- (void)removePlayer:(id)arg1;
- (void)removeOrigin:(id)arg1;
- (id)existingOriginClientRequestsForPlayerPath:(id)arg1;
- (void)removeOriginRequests:(id)arg1;
- (id)existingPlayerClientRequestsForPlayerPath:(id)arg1;
- (id)originClientRequestsForPlayerPath:(id)arg1;
- (id)existingOriginClientForPlayerPath:(id)arg1;
- (id)clientRequestsForPlayerPath:(id)arg1;
- (id)existingClientRequestsForPlayerPath:(id)arg1;
- (id)existingClientForPlayerPath:(id)arg1;

@end

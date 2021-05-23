/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlaybackCore/MPCMediaRemoteController.h>

@class MPCFuture;

@interface _MPCMediaRemoteNullController : MPCMediaRemoteController

{
    MPCFuture *_playQueueIdentifiersFuture;
    MPCFuture *_contentItemForIdentifierFuture;
    MPCFuture *_contentItemArtworkForIdentifierFuture;
}

+ (_Bool)_shouldRegisterForNotifications;

- (id)_init;
- (id)playbackState;
- (id)supportedCommands;
- (id)playQueueIdentifiersForRequest:(void *)arg1;
- (id)contentItemForIdentifier:(id)arg1;
- (id)playingIdentifier;
- (void)sendCommand:(unsigned int)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)playbackStateCacheState;
- (long long)supportedCommandsCacheState;
- (long long)playQueueIdentifiersCacheStateForRange:(struct _MSVSignedRange)arg1;
- (id)playQueueIdentifiersForRange:(struct _MSVSignedRange)arg1;
- (long long)playingIdentifierCacheState;
- (long long)contentItemCacheStateForIdentifier:(id)arg1;
- (long long)contentItemArtworkCacheStateForIdentifier:(id)arg1 size:(struct CGSize)arg2;
- (id)contentItemArtworkForContentItemIdentifier:(id)arg1 artworkIdentifier:(id)arg2 size:(struct CGSize)arg3;
- (void)invalidateAllTokens;

@end

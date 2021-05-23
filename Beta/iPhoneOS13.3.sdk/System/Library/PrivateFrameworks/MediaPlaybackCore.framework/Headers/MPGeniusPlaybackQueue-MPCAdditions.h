/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPGeniusPlaybackQueue.h>

@interface MPGeniusPlaybackQueue (MPCAdditions)

- (void)getPlaybackContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)_getPlaybackContextWithRecommendedContentWithSeedAdamID:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_getPlaybackContextFromCloudControllerWithSeedItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_getPlaybackContextFromMediaLibraryWithSeedItem:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

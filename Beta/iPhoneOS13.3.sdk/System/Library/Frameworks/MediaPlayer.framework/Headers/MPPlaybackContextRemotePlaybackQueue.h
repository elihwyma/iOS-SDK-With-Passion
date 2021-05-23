/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class MPPlaybackContext;

@interface MPPlaybackContextRemotePlaybackQueue : MPRemotePlaybackQueue

{
    MPPlaybackContext *_playbackContext;
    long long _replaceIntent;
}

- (id)description;
- (id)siriWHAMetricsInfo;
- (_Bool)isRequestingImmediatePlayback;
- (id)siriRecommendationIdentifier;
- (id)siriAssetInfo;
- (long long)replaceIntent;
- (void)setReplaceIntent:(long long)arg1;
- (id)initWithPlaybackContext:(id)arg1;
- (void)getPlaybackContextWithCompletion:(CDUnknownBlockType)arg1;

@end

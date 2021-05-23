/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPRemotePlaybackQueue.h>

@interface MPRemotePlaybackQueue (MPCAdditions)

- (void)getPlaybackContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)getRemoteRepresentationForPlayerPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createPlaybackContextWithCompletion:(CDUnknownBlockType)arg1;

@end

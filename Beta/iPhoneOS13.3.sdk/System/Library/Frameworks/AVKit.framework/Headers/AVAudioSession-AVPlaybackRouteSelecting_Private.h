/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <AVAudioSession.h>

@interface AVAudioSession (AVPlaybackRouteSelecting_Private)

- (id)_externalPlaybackController;
- (void)prepareRouteSelectionForPlaybackWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)prepareRouteSelectionForPlaybackFromBundleID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end

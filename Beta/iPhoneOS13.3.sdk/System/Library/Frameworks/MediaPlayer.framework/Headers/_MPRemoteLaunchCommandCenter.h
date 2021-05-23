/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPRemoteCommandCenter.h>

@interface _MPRemoteLaunchCommandCenter : MPRemoteCommandCenter

- (void)_scheduleSupportedCommandsChanged;
- (void)_startMediaRemoteSync;
- (void)_stopMediaRemoteSync;

@end

/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIWindow.h>

@class MPMovieTVHUDView, MPVideoView;

@interface MPTVOutWindow : UIWindow

{
    MPMovieTVHUDView *_hudView;
    MPVideoView *_videoView;
}

- (id)init;
- (void)dealloc;
- (_Bool)setVideoView:(id)arg1;
- (id)videoView;
- (_Bool)_setupTargetScreen:(id)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (void)_screenModeDidChange:(id)arg1;

@end

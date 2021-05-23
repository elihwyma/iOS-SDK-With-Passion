/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerViewController, UIImageView;

__attribute__((visibility("hidden")))
@interface BFFOnBoardingVideoView : UIView

{
    _Bool _displayingVideo;
    _Bool _playVideo;
    UIImageView *_imageView;
    AVPlayer *_videoPlayer;
    AVPlayerViewController *_videoViewController;
}

@property (retain) UIImageView *imageView;
@property (retain) AVPlayer *videoPlayer;
@property (retain) AVPlayerViewController *videoViewController;
@property _Bool displayingVideo;
@property _Bool playVideo;

+ (id)backgroundColor;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)stopPlaying;
- (void)startPlaying;
- (id)initWithPlaceholderImage:(id)arg1;
- (void)showVideo:(id)arg1;
- (void)videoReachedEnd:(id)arg1;
- (void)transitionToVideo;

@end

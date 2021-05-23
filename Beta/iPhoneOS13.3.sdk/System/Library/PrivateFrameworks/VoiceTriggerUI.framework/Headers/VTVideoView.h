/*
 Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerViewController, UIImage, UIImageView;

@interface VTVideoView : UIView

{
    _Bool _displayingVideo;
    UIImage *_placeholderImage;
    UIImageView *_imageView;
    AVPlayer *_videoPlayer;
    AVPlayerViewController *_videoViewController;
}

@property (retain) UIImageView *imageView;
@property (retain) AVPlayer *videoPlayer;
@property (retain) AVPlayerViewController *videoViewController;
@property _Bool displayingVideo;
@property (weak, nonatomic) UIImage *placeholderImage;

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

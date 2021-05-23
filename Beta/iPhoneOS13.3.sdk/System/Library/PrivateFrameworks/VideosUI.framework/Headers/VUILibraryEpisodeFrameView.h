/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class TVButton, UIImageView, _TVImageView, _TVProgressView;

@protocol VUILibraryEpisodeFrameViewDelegate;

__attribute__((visibility("hidden")))
@interface VUILibraryEpisodeFrameView : UIView

{
    id <VUILibraryEpisodeFrameViewDelegate> _delegate;
    _TVImageView *_imageView;
    _TVProgressView *_progressView;
    TVButton *_playButton;
    long long _layout;
    UIImageView *_fullyPlayedImageView;
}

@property (retain, nonatomic) _TVImageView *imageView;
@property (retain, nonatomic) _TVProgressView *progressView;
@property (retain, nonatomic) TVButton *playButton;
@property (nonatomic) long long layout;
@property (retain, nonatomic) UIImageView *fullyPlayedImageView;
@property (weak, nonatomic) id <VUILibraryEpisodeFrameViewDelegate> delegate;

+ (void)configureEpisodeFrameView:(id)arg1 withMedia:(id)arg2 layout:(long long)arg3 imageSize:(struct CGSize)arg4;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_playButtonPressed;

@end

/*
 Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <UIKit/UIView.h>

@class AVPlayer, PLAVPlayerView;

@interface PLMoviePlayerView : UIView

{
    PLAVPlayerView *_avPlayerView;
    _Bool _destinationPlaceholderHidden;
    long long _destinationPlaceholderStyle;
}

@property (retain, nonatomic, readonly) UIView *videoView;
@property (retain, nonatomic) AVPlayer *player;
@property (nonatomic, readonly) long long destinationPlaceholderStyle;
@property (nonatomic, getter=isDestinationPlaceholderHidden) _Bool destinationPlaceholderHidden;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setScaleMode:(long long)arg1;
- (void)setScaleMode:(long long)arg1 duration:(double)arg2;
- (void)reattachVideoView;
- (void)_installBackgroundView:(id)arg1;

@end

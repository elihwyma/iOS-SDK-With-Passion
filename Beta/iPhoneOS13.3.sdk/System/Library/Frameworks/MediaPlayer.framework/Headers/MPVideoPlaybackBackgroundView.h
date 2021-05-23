/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIView.h>

@class MPAVController, UIImageView, UILabel;

@interface MPVideoPlaybackBackgroundView : UIView

{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    struct UIEdgeInsets _edgeInsets;
    MPAVController *_player;
}

@property (retain, nonatomic) MPAVController *player;
@property (nonatomic) struct UIEdgeInsets edgeInsets;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_isExternalPlaybackActiveDidChange:(id)arg1;
- (void)_activeAudioRouteDidChange:(id)arg1;
- (void)_videoViewDidMoveToWindow:(id)arg1;
- (id)_imageNamed:(id)arg1;
- (void)_updateDisplay;

@end

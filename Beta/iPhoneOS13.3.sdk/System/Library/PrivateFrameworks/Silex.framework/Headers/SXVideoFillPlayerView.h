/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <UIKit/UIView.h>

@class AVPlayerLayer, SXAVPlayer, SXImageView, SXVideoResource;

@interface SXVideoFillPlayerView : UIView

{
    _Bool _shouldLoop;
    _Bool _hasRequestedPlayback;
    unsigned long long _fillMode;
    SXVideoResource *_videoResource;
    AVPlayerLayer *_playerLayer;
    SXAVPlayer *_player;
    SXImageView *_stillImageView;
}

@property (retain, nonatomic) SXVideoResource *videoResource;
@property (retain, nonatomic) AVPlayerLayer *playerLayer;
@property (retain, nonatomic) SXAVPlayer *player;
@property (retain, nonatomic) SXImageView *stillImageView;
@property (nonatomic) _Bool hasRequestedPlayback;
@property (nonatomic) unsigned long long fillMode;
@property (nonatomic) _Bool shouldLoop;

- (void)dealloc;
- (void)pause;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)reset;
- (void)play;
- (void)layoutSubviews;
- (id)initWithVideoResource:(id)arg1 imageView:(id)arg2;
- (void)playIfPossible;
- (void)switchToPlayer;

@end

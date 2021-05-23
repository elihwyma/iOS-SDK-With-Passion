/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIView.h>

@class AVPlayerLayer, MPAVController, NSDictionary, NSString, _MPAVPlayerView;

@interface MPVideoView : UIView

{
    MPAVController *_player;
    double _startTime;
    double _stopTime;
    NSDictionary *_AVURLAssetOptions;
    _MPAVPlayerView *_playerView;
    UIView *_contentView;
    NSString *_movieSubtitle;
    NSString *_movieTitle;
    long long _scaleMode;
}

@property (weak, nonatomic) MPAVController *player;
@property (retain, nonatomic) NSString *movieSubtitle;
@property (retain, nonatomic) NSString *movieTitle;
@property (nonatomic) double startTime;
@property (nonatomic) double stopTime;
@property (nonatomic, readonly) _Bool canChangeScaleMode;
@property (nonatomic) long long scaleMode;
@property (nonatomic, readonly) long long effectiveScaleMode;
@property (nonatomic, readonly) struct CGRect movieFrame;
@property (nonatomic, readonly) struct CGRect movieContentFrame;
@property (retain, nonatomic) NSDictionary *AVURLAssetOptions;
@property (nonatomic, readonly) AVPlayerLayer *playerLayer;
@property (nonatomic, readonly) UIView *contentView;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setScaleMode:(long long)arg1 animated:(_Bool)arg2;
- (void)toggleScaleMode:(_Bool)arg1;
- (void)setScaleMode:(long long)arg1 duration:(float)arg2;

@end

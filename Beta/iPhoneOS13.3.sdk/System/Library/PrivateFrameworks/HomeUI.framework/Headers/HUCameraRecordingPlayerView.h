/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerLayer, UIProgressView;

@interface HUCameraRecordingPlayerView : UIView

{
    AVPlayer *_player;
    UIProgressView *_progressView;
}

@property (nonatomic, readonly) AVPlayer *player;
@property (nonatomic, readonly) AVPlayerLayer *playerLayer;
@property (nonatomic, readonly) UIProgressView *progressView;

+ (Class)layerClass;

- (id)initWithPlayer:(id)arg1 displayingProgressView:(_Bool)arg2;

@end

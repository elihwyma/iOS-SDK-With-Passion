/*
 Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerLayer;

@interface PLAVPlayerView : UIView

{
    long long _scaleMode;
}

@property (retain, nonatomic, readonly) AVPlayerLayer *layer;
@property (retain, nonatomic) AVPlayer *player;
@property (nonatomic) long long scaleMode;
@property (nonatomic, readonly) struct CGRect videoRect;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setScaleMode:(long long)arg1 duration:(double)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

#import <UIKit/UIView.h>

@class AVAsset, AVPlayer, UIImage, UIImageView;

@interface BKUIPearlMovieLoopView : UIView

{
    AVPlayer *_player;
    AVAsset *_assets;
    UIImage *_selfPortraite;
    UIImageView *_imageView;
}

@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AVAsset *assets;
@property (retain, nonatomic) UIImage *selfPortraite;
@property (retain, nonatomic) UIImageView *imageView;

+ (Class)layerClass;

- (id)playerLayer;
- (_Bool)portrait;
- (id)selfPortrait;
- (id)initWithFrame:(struct CGRect)arg1 player:(id)arg2 asset:(id)arg3;
- (void)unhideAVPlayerRemoveSnapshot;
- (void)hideAVPlayerReplaceWithSnapshot;
- (void)setAlphaHideOnZero:(double)arg1;

@end

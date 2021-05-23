/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <UIKit/UIView.h>

@class ISAVPlayerUIView, ISWrappedAVPlayer;

@interface ISVideoPlayerUIView : UIView

{
    ISAVPlayerUIView *_playerView;
    _Bool _videoLayerReadyForDisplay;
    ISWrappedAVPlayer *_videoPlayer;
    struct CGRect _contentsRect;
}

@property (retain, nonatomic) ISWrappedAVPlayer *videoPlayer;
@property (nonatomic) struct CGRect contentsRect;
@property (copy, nonatomic) CDUnknownBlockType videoLayerReadyForDisplayChangeHandler;
@property (nonatomic, readonly) _Bool videoLayerReadyForDisplay;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setContentMode:(long long)arg1;
- (id)playerLayer;
- (void)_ISVideoPlayerUIView_commonInitialization;
- (void)_updateVideoGravity;

@end

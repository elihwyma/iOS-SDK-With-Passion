/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBFScrollableStaticWallpaperView.h>

#import <SpringBoardFoundation/Swift-Protocol.h>

@class AVAsset, ISPlayerView, NSString, NSURL;

@protocol SBFIrisWallpaperViewDelegate;

@interface SBFScrollableIrisWallpaperView : SBFScrollableStaticWallpaperView <Swift>

{
    AVAsset *_video;
    ISPlayerView *_playerView;
    long long _playbackState;
    id <SBFIrisWallpaperViewDelegate> _irisDelegate;
    double _stillTimeInVideo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SBFIrisWallpaperViewDelegate> irisDelegate;
@property (nonatomic, readonly) long long irisPlaybackState;
@property (nonatomic, readonly) _Bool isIrisInteracting;
@property (copy, nonatomic, readonly) NSURL *videoFileURL;
@property (nonatomic, readonly) double stillTimeInVideo;

- (void)dealloc;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)_newImageView;
- (void)playerViewPlaybackStateDidChange:(id)arg1;
- (void)playerViewIsInteractingDidChange:(id)arg1;
- (id)irisGestureRecognizer;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2 wallpaperVideo:(id)arg3 variant:(long long)arg4;

@end

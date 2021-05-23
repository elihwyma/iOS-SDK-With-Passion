/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKBackgroundImageFaceView.h>

@class CLKVideoPlayerView, NSString, UIImageView;

@interface NTKAVFaceBaseView : NTKBackgroundImageFaceView

{
    UIImageView *_posterImageView;
    CLKVideoPlayerView *_videoPlayerView;
}

@property (retain, nonatomic) CLKVideoPlayerView *videoPlayerView;
@property (retain, nonatomic) UIImageView *posterImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_reset;
- (void)layoutSubviews;
- (void)_mediaServicesWereReset:(id)arg1;
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1;
- (void)videoPlayerViewDidBeginPlayingQueuedVideo:(id)arg1;
- (void)videoPlayerViewDidBeginPlaying:(id)arg1;
- (void)_createVideoPlayerViewIfNeeded;
- (void)pauseVideoPlayerViewIfItExists;
- (id)_posterImageView;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (void)_cleanupAfterTransitionToOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_prepareForEditing;
- (id)_selectedContentView;
- (void)_transitionToPosterView:(id)arg1;
- (void)_beginTransitionToOption;

@end

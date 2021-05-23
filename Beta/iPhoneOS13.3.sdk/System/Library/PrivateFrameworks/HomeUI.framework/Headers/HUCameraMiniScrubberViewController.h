/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIViewController.h>

@class AVBackgroundView, CADisplayLink, HFCameraPlaybackEngine, HMCameraClip, HUBlendedSeparatorView, HUMiniScrubber, NSDate, NSString, UIButton;

@interface HUCameraMiniScrubberViewController : UIViewController

{
    _Bool _isVisible;
    _Bool _isScrubbing;
    UIButton *_playPauseButton;
    HUMiniScrubber *_playbackPositionSlider;
    AVBackgroundView *_backgroundView;
    HFCameraPlaybackEngine *_playbackEngine;
    HMCameraClip *_currentClip;
    UIButton *_liveButton;
    CADisplayLink *_displayLink;
    NSDate *_clipStartDate;
    HUBlendedSeparatorView *_rightBlendedSeparator;
}

@property (retain, nonatomic) UIButton *playPauseButton;
@property (retain, nonatomic) HUMiniScrubber *playbackPositionSlider;
@property (retain, nonatomic) AVBackgroundView *backgroundView;
@property (retain, nonatomic) HFCameraPlaybackEngine *playbackEngine;
@property (retain, nonatomic) HMCameraClip *currentClip;
@property (retain, nonatomic) UIButton *liveButton;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) _Bool isVisible;
@property (nonatomic) _Bool isScrubbing;
@property (retain, nonatomic) NSDate *clipStartDate;
@property (retain, nonatomic) HUBlendedSeparatorView *rightBlendedSeparator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double currentScrubberResolution;

- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)beginScrubbing:(id)arg1;
- (void)endScrubbing:(id)arg1;
- (void)scrubberValueChanged:(id)arg1;
- (void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateClipManager:(id)arg2;
- (void)_updateSliderPosition;
- (void)_displayLinkUpdated:(id)arg1;
- (void)playPauseButtonPressed:(id)arg1;
- (void)toggleLive:(id)arg1;
- (double)_playbackLength;
- (void)_updateScrubberDisplayLinkState;
- (void)_seekToCurrentScrubberValue;
- (void)_loopPlaybackIfNeeded;
- (id)initWithPlaybackEngine:(id)arg1 startDate:(id)arg2;

@end

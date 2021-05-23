/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <UIView.h>

@class ADPrerollButton, ADVolumeSlider, NSTimer, UIImage, UILabel;

@protocol ADPrerollBottomBarDelegate;

@interface ADPrerollBottomBar : UIView

{
    _Bool _layoutForExpandedSize;
    _Bool _isFullscreen;
    _Bool _skipButtonCountingDown;
    id <ADPrerollBottomBarDelegate> _delegate;
    ADPrerollButton *_actionButton;
    UILabel *_skipLabel;
    UILabel *_shortSkipLabel;
    ADPrerollButton *_skipButton;
    double _skipDuration;
    double _lastViewingStartTime;
    double _accumulatedViewingTime;
    NSTimer *_skipAccumulationTimer;
    UIImage *_playImage;
    UIImage *_pauseImage;
    ADPrerollButton *_playPauseButton;
    ADVolumeSlider *_volumeSlider;
}

@property (retain, nonatomic) ADPrerollButton *actionButton;
@property (retain, nonatomic) UILabel *skipLabel;
@property (retain, nonatomic) UILabel *shortSkipLabel;
@property (retain, nonatomic) ADPrerollButton *skipButton;
@property (nonatomic) _Bool skipButtonCountingDown;
@property (nonatomic) double skipDuration;
@property (nonatomic) double lastViewingStartTime;
@property (nonatomic) double accumulatedViewingTime;
@property (retain, nonatomic) NSTimer *skipAccumulationTimer;
@property (retain, nonatomic) UIImage *playImage;
@property (retain, nonatomic) UIImage *pauseImage;
@property (retain, nonatomic) ADPrerollButton *playPauseButton;
@property (retain, nonatomic) ADVolumeSlider *volumeSlider;
@property (weak, nonatomic) id <ADPrerollBottomBarDelegate> delegate;
@property (nonatomic) _Bool layoutForExpandedSize;
@property (nonatomic) _Bool isFullscreen;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_actionButtonTapped:(id)arg1;
- (void)_playButtonTapped:(id)arg1;
- (void)displayAsPaused:(_Bool)arg1;
- (void)_skipButtonTapped:(id)arg1;
- (void)_pauseButtonTapped:(id)arg1;
- (void)_pauseCountdown;
- (void)_resumeCountdown;
- (void)_updateSkipLabel;
- (void)_accumulateViewingTime;
- (void)showActionButton:(_Bool)arg1;
- (void)beginCountdownWithDuration:(double)arg1;

@end

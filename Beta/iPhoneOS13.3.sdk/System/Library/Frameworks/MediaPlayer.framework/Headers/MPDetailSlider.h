/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UISlider.h>

@class AVTimeFormatter, MPDetailScrubController, NSString, NSTimer, UIImageView, UILabel, UIView;

@protocol MPDetailSliderDelegate;

@interface MPDetailSlider : UISlider

{
    UILabel *_currentTimeInverseLabel;
    UILabel *_currentTimeLabel;
    MPDetailScrubController *_scrubController;
    _Bool _allowsScrubbing;
    _Bool _autoscrubActive;
    NSTimer *_autoscrubTimer;
    _Bool _canCommit;
    double _currentTime;
    UIView *_downloadingTrackOverlay;
    UIImageView *_glowDetailScrubImageView;
    _Bool _isTracking;
    double _maxTrackWidth;
    struct CGPoint _previousLocationInView;
    long long _style;
    UIImageView *_thumbImageView;
    double _trackInset;
    AVTimeFormatter *_formatter;
    id <MPDetailSliderDelegate> _delegate;
    double _detailScrubbingVerticalRange;
    double _duration;
    double _availableDuration;
    long long _timeLabelStyle;
    double _minTimeLabelWidth;
}

@property (weak, nonatomic) id <MPDetailSliderDelegate> delegate;
@property (nonatomic) _Bool allowsScrubbing;
@property (nonatomic) _Bool allowsDetailScrubbing;
@property (nonatomic) double detailScrubbingVerticalRange;
@property (nonatomic) double duration;
@property (nonatomic) double availableDuration;
@property (nonatomic, readonly) _Bool detailScrubbingAvailableForCurrentDuration;
@property (nonatomic) long long timeLabelStyle;
@property (nonatomic) double minTimeLabelWidth;
@property (nonatomic, readonly) NSString *localizedScrubSpeedText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)labelClass;

- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (_Bool)isTracking;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (id)createThumbView;
- (id)currentThumbImage;
- (struct UIEdgeInsets)_thumbHitEdgeInsets;
- (void)detailScrubController:(id)arg1 didChangeValue:(float)arg2;
- (void)detailScrubController:(id)arg1 didChangeScrubSpeed:(long long)arg2;
- (struct CGRect)thumbHitRect;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 maxTrackWidth:(double)arg3;
- (void)setValue:(float)arg1 duration:(double)arg2;
- (void)_setValueWhileTracking:(float)arg1 duration:(double)arg2;
- (void)_autoscrubTick:(id)arg1;
- (void)cancelTracking;
- (id)timeLabelFontForStyle:(long long)arg1;
- (id)timeLabelTextColorForStyle:(long long)arg1;
- (id)_modernThumbImageWithColor:(id)arg1 height:(double)arg2 includeShadow:(_Bool)arg3;
- (id)_colorSliceImageWithColor:(id)arg1 height:(double)arg2;
- (void)_setupControlsForStyle;
- (void)_updateTrackInset;
- (void)_updateTimeDisplayForTime:(double)arg1;
- (void)_updateTimeDisplayForTime:(double)arg1 force:(_Bool)arg2;
- (id)_stringForTime:(double)arg1 elapsed:(_Bool)arg2;
- (id)_stringForCurrentTime:(double)arg1;
- (id)_stringForInverseCurrentTime:(double)arg1;
- (void)_resetScrubInfo;
- (void)_commitValue;
- (void)_updateForAvailableDuraton;

@end

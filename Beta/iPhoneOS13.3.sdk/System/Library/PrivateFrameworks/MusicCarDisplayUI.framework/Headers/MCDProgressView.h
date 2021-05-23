/*
 Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

#import <UIKit/UIView.h>

@class CADisplayLink, MCDProgressBarView, UILabel;

@interface MCDProgressView : UIView

{
    UILabel *_timeLabel;
    UILabel *_timeRemainingLabel;
    UILabel *_liveLabel;
    MCDProgressBarView *_progressBarView;
    CADisplayLink *_displayLink;
    double _lastTargetTimestamp;
    CDStruct_fce57115 _durationSnapshot;
}

@property (nonatomic) CDStruct_fce57115 durationSnapshot;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_displayLinkTick:(id)arg1;
- (void)setupConstraints;
- (void)_updateLabelsForElapsedTime:(double)arg1 duration:(double)arg2;
- (void)_updateProgressForElapsedTime:(double)arg1 duration:(double)arg2;
- (void)runUntilNextDisplayLinkEvent;
- (void)pauseDisplayLinkIfNeeded;

@end

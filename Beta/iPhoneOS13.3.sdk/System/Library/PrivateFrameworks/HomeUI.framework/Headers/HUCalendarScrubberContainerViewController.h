/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIViewController.h>

@class AVBackgroundView, HFCameraPlaybackEngine, HUCalendarScrubberViewController, NSDate, NSLayoutConstraint, NSString, UIButton, UIView;

@interface HUCalendarScrubberContainerViewController : UIViewController

{
    HUCalendarScrubberViewController *_calendarScrubber;
    UIButton *_prevWeekButton;
    UIButton *_nextWeekButton;
    AVBackgroundView *_backgroundView;
    UIView *_hairlineViewLeft;
    UIView *_hairlineViewRight;
    NSLayoutConstraint *_backgroundWidthConstraint;
    HFCameraPlaybackEngine *_playbackEngine;
    NSDate *_lastSelectedDate;
}

@property (retain, nonatomic) HUCalendarScrubberViewController *calendarScrubber;
@property (retain, nonatomic) UIButton *prevWeekButton;
@property (retain, nonatomic) UIButton *nextWeekButton;
@property (retain, nonatomic) AVBackgroundView *backgroundView;
@property (retain, nonatomic) UIView *hairlineViewLeft;
@property (retain, nonatomic) UIView *hairlineViewRight;
@property (retain, nonatomic) NSLayoutConstraint *backgroundWidthConstraint;
@property (weak, nonatomic) HFCameraPlaybackEngine *playbackEngine;
@property (retain, nonatomic) NSDate *lastSelectedDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)updateViewConstraints;
- (id)initWithPlaybackEngine:(id)arg1;
- (void)playbackEngine:(id)arg1 didUpdateTimeControlStatus:(unsigned long long)arg2;
- (void)playbackEngine:(id)arg1 didUpdatePlaybackPosition:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateClipManager:(id)arg2;
- (void)playbackEngine:(id)arg1 didUpdateClips:(id)arg2;
- (void)handleNextButton:(id)arg1;
- (void)scrubberViewController:(id)arg1 didSelectItemAtIndex:(id)arg2;
- (void)scrubberViewController:(id)arg1 didMoveToSection:(unsigned long long)arg2;
- (void)handlePreviousButton:(id)arg1;
- (void)_updateNextPreviousButtonState;
- (void)_jumpToDate:(id)arg1 animated:(_Bool)arg2;

@end

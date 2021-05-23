/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIView.h>

@class NSTimer, UILabel;

@interface PMiOSTimeLabelView : UIView

{
    _Bool _showsRemainingTime;
    _Bool _showsTotalTime;
    double _elapsedTime;
    double _totalTime;
    UILabel *_timeLabel;
    NSTimer *_hideDelayTimer;
}

@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) NSTimer *hideDelayTimer;
@property (nonatomic) double elapsedTime;
@property (nonatomic) double totalTime;
@property (nonatomic) _Bool showsRemainingTime;
@property (nonatomic) _Bool showsTotalTime;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setup;
- (id)_stringFromTimeInterval:(double)arg1;
- (id)_labelTextForElapsedInterval:(double)arg1;
- (void)hideAfterDelay:(double)arg1;
- (void)hideTimerAction;
- (void)showMomentarilyAnimated:(_Bool)arg1;

@end

/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIView.h>

@class CAShapeLayer, NSDate, NSTimer;

@interface MFRoundProgressView : UIView

{
    struct CGPoint _pieCenter;
    double _pieRadius;
    NSTimer *_progressTimer;
    NSDate *_prevUpdateTime;
    double _uiProgress;
    double _realProgress;
    double _increaseRate;
    UIView *_contentView;
    CAShapeLayer *_sliceLayer;
    CAShapeLayer *_circleLayer;
    double _progress;
}

@property (nonatomic) double progress;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateSubviews;
- (void)resetProgress;
- (void)setPieRadius:(double)arg1;
- (void)_updateUIProgress;
- (void)increaseUIProgress:(id)arg1;
- (void)stopProgressTimer;
- (double)toRadian:(double)arg1;
- (void)startProgressTimer;
- (void)recalculateIncreaseProgress:(double)arg1 withTimeDiff:(double)arg2;

@end

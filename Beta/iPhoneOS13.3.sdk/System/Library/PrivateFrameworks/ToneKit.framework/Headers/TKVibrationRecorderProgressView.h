/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSMutableArray, TKVibrationRecorderProgressDotImageView;

@protocol TKVibrationRecorderStyleProvider;

@interface TKVibrationRecorderProgressView : UIView

{
    double _maximumTimeInterval;
    double _currentVibrationComponentDidBeginTimeInterval;
    double _previousPauseDidBeginTimeInterval;
    id <TKVibrationRecorderStyleProvider> _styleProvider;
    UIView *_progressView;
    NSLayoutConstraint *_progressViewWidthConstraint;
    TKVibrationRecorderProgressDotImageView *_dotForCurrentVibrationComponent;
    NSLayoutConstraint *_dotForCurrentVibrationComponentLeftConstraint;
    NSLayoutConstraint *_dotForCurrentVibrationComponentRightConstraint;
    NSMutableArray *_dots;
    int _roundedCornersCompensationDelayMode;
    double _currentTimeInterval;
}

@property (nonatomic) double currentTimeInterval;
@property (nonatomic) int roundedCornersCompensationDelayMode;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (_Bool)isAccessibilityElement;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)initWithMaximumTimeInterval:(double)arg1 styleProvider:(id)arg2;
- (void)clearAllVibrationComponents;
- (void)vibrationComponentDidEnd;
- (void)vibrationComponentDidStart;
- (double)_cappedValueForTimeInterval:(double)arg1;
- (struct UIOffset)_dotInsets;
- (struct CGSize)_dotSize;
- (struct CGRect)_frameForDotAtTimeInterval:(double)arg1 duration:(double)arg2;
- (void)_updateHorizontalConstraintsOfDotForCurrentVibrationComponent:(id)arg1 withFrame:(struct CGRect)arg2;
- (id)_resizableDotImage;
- (id)_dotTintColor;
- (void)_updateProgressViewBackgroundColor;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

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

@property(nonatomic) int roundedCornersCompensationDelayMode; // @synthesize roundedCornersCompensationDelayMode=_roundedCornersCompensationDelayMode;
@property(nonatomic) double currentTimeInterval; // @synthesize currentTimeInterval=_currentTimeInterval;
// - (void).cxx_destruct;
- (CGRect)accessibilityFrame;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (double)_cappedValueForTimeInterval:(double)arg1;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (CGRect)_frameForDotAtTimeInterval:(double)arg1 duration:(double)arg2;
- (void)_updateHorizontalConstraintsOfDotForCurrentVibrationComponent:(id)arg1 withFrame:(CGRect)arg2;
- (CGSize)intrinsicContentSize;
- (void)clearAllVibrationComponents;
- (void)vibrationComponentDidEnd;
- (void)vibrationComponentDidStart;
- (id)_dotTintColor;
- (UIOffset)_dotInsets;
- (CGSize)_dotSize;
- (id)_resizableDotImage;
- (void)_updateProgressViewBackgroundColor;
- (id)initWithMaximumTimeInterval:(double)arg1 styleProvider:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;

@end


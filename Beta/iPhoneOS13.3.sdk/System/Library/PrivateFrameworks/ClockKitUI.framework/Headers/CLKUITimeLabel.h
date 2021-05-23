/*
 Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

#import <UIKit/UIView.h>

@class CLKDevice, CLKTimeFormatter, CLKUITimeLabelStyle, NSAttributedString, NSString, UIColor, UIFont;

@protocol _CLKUITimeLabelManager;

@interface CLKUITimeLabel : UIView

{
    unsigned long long _options;
    id <_CLKUITimeLabelManager> _labelManager;
    _Bool _styleTransitioning;
    double _styleTransitionFraction;
    struct CGRect _styleTransitionEndFrame;
    CLKUITimeLabelStyle *_fromStyle;
    id <_CLKUITimeLabelManager> _fromLabelManager;
    double _fadeStart;
    double _fadeEnd;
    NSString *_timeText;
    _Bool _showsDesignator;
    _Bool _paused;
    _Bool _showSeconds;
    CLKDevice *_device;
    CLKTimeFormatter *_timeFormatter;
    double _maxWidth;
    CDUnknownBlockType _didResizeHandler;
    CLKUITimeLabelStyle *_style;
}

@property (copy, nonatomic) CLKUITimeLabelStyle *style;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic, readonly) CLKTimeFormatter *timeFormatter;
@property (nonatomic) _Bool showsDesignator;
@property (nonatomic) _Bool paused;
@property (nonatomic) double maxWidth;
@property (nonatomic, readonly) struct CGSize intrinsicSize;
@property (copy, nonatomic) CDUnknownBlockType didResizeHandler;
@property (nonatomic) _Bool showSeconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long textAlignment;
@property (nonatomic, readonly) double _lastLineBaseline;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic, readonly) struct UIEdgeInsets opticalInsets;

+ (id)labelWithOptions:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)labelWithOptions:(unsigned long long)arg1;

- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)didMoveToWindow;
- (void)setTimeOffset:(double)arg1;
- (void)timeFormatterTextDidChange:(id)arg1;
- (id)identifyingInfoForTimeFormatter:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;
- (id)initWithTimeLabelOptions:(unsigned long long)arg1 forDevice:(id)arg2;
- (id)_newLabelManager;
- (void)_resizeIfNecessary;
- (void)setBlinkingPaused:(_Bool)arg1;
- (void)_cancelAnimation;
- (void)setTimeFont:(id)arg1 designatorFont:(id)arg2;
- (void)setThreeDigitFont:(id)arg1 fourDigitFont:(id)arg2 designatorFont:(id)arg3;
- (void)cleanupAfterStyleTransition;
- (void)setStyleTransitionFraction:(double)arg1;
- (void)_scaleTransitionLabels;
- (void)_fadeTransitionLabels;
- (id)_newUnderlyingLabel:(_Bool)arg1;
- (id)initWithTimeLabelOptions:(unsigned long long)arg1;
- (id)labelManagerContentView;
- (void)prepareToTransitionToStyle:(id)arg1;
- (struct CGSize)styleTransitionEndSize;
- (struct CGSize)styleTransitionCurrentSize;
- (void)_enumerateUnderlyingLabelsWithBlock:(CDUnknownBlockType)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;

@end

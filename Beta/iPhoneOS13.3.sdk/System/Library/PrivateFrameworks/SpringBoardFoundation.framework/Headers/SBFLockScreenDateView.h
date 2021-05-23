/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <UIKit/UIView.h>

@class NSDate, NSTimeZone, SBFLockScreenDateSubtitleDateView, SBFLockScreenDateSubtitleView, SBUILegibilityLabel, UIColor, _UILegibilitySettings;

@interface SBFLockScreenDateView : UIView

{
    SBUILegibilityLabel *_timeLabel;
    double _timeAlpha;
    double _subtitleAlpha;
    SBFLockScreenDateSubtitleDateView *_dateSubtitleView;
    SBFLockScreenDateSubtitleView *_customSubtitleView;
    NSTimeZone *_timeZone;
    _Bool _useCompactDateFormat;
    NSDate *_date;
    UIColor *_overrideTextColor;
    _UILegibilitySettings *_legibilitySettings;
    double _alignmentPercent;
    double _dateToTimeStretch;
    double _timeLegibilityStrength;
    double _subtitleLegibilityStrength;
    double _maximumSubtitleWidth;
    struct CGRect _restingFrame;
}

@property (nonatomic, getter=isSubtitleHidden) _Bool subtitleHidden;
@property (nonatomic) _Bool useCompactDateFormat;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double timeLegibilityStrength;
@property (nonatomic) double subtitleLegibilityStrength;
@property (nonatomic) double alignmentPercent;
@property (nonatomic) double dateToTimeStretch;
@property (nonatomic) double maximumSubtitleWidth;
@property (nonatomic, readonly) double timeBaselineOffsetFromOrigin;
@property (nonatomic, readonly) double subtitleBaselineOffsetFromOrigin;
@property (nonatomic) struct CGRect restingFrame;
@property (nonatomic, readonly) double contentAlpha;
@property (retain, nonatomic) SBFLockScreenDateSubtitleView *customSubtitleView;

+ (double)defaultHeight;
+ (id)timeFont;
+ (CDStruct_91d2e2b9)timeFontMetrics;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)_timeLabel;
- (void)_setDate:(id)arg1 inTimeZone:(id)arg2;
- (void)updateFormat;
- (void)_setSubtitleAlpha:(double)arg1;
- (void)_updateUsesCompactDateFormat;
- (void)_updateLabels;
- (void)_updateLabelAlpha;
- (struct CGRect)_timeLabelFrameForAlignmentPercent:(double)arg1;
- (struct CGRect)_subtitleViewFrameForView:(id)arg1 alignmentPercent:(double)arg2;
- (struct CGRect)chargingVisualInformationTimeFrame;
- (struct UIEdgeInsets)_timeLabelInsetsForTimeString:(id)arg1;
- (struct UIEdgeInsets)_cachedGlyphInsetsTimeFontForString:(id)arg1;
- (void)setContentAlpha:(double)arg1 withSubtitleVisible:(_Bool)arg2;
- (struct CGRect)presentationExtentForAlignmentPercent:(double)arg1;
- (struct CGRect)chargingVisualInformationTimeSubtitleFrame;

@end

/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBFLockScreenDateSubtitleView.h>

@class NSDate, NSTimeZone, SBFLockScreenAlternateDateLabel;

@interface SBFLockScreenDateSubtitleDateView : SBFLockScreenDateSubtitleView

{
    NSTimeZone *_timeZone;
    _Bool _useCompactDateFormat;
    NSDate *_date;
    SBFLockScreenAlternateDateLabel *_alternateDateLabel;
    double _alignmentPercent;
}

@property (retain, nonatomic) SBFLockScreenAlternateDateLabel *alternateDateLabel;
@property (nonatomic) double alignmentPercent;
@property (retain, nonatomic) NSDate *date;
@property (nonatomic) _Bool useCompactDateFormat;

+ (id)dateTimeLunarDateFont;
+ (double)scaledFontSize:(double)arg1 withMaximumFontSizeCategory:(id)arg2;
+ (CDStruct_91d2e2b9)dateTimeLunarDateFontMetrics;
+ (double)subtitleLabelToLunarDateLabelBaselineDifferenceY;

- (void)dealloc;
- (id)initWithDate:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setLegibilitySettings:(id)arg1;
- (void)setStrength:(double)arg1;
- (void)_setupAlternateDateLabel;
- (void)_overlayCalendarDidChange;
- (void)_setDate:(id)arg1 inTimeZone:(id)arg2;
- (void)_updateDateLabelForCompact;
- (struct CGRect)alternateDateLabelFrame;
- (double)_lunarDateLabelYOffsetFromDateLabel;
- (struct CGRect)subtitleLabelFrame;

@end

/*
 Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

#import <UIKit/UIView.h>

@class CLKTimeFormatter, NSString, UIColor, _CLKUIBasicTimeLabelManager;

@interface _CLKUIBlinkingTimeLabelManager : UIView

{
    CLKTimeFormatter *_timeFormatter;
    _CLKUIBasicTimeLabelManager *_numbersLabelManager;
    _CLKUIBasicTimeLabelManager *_blinkerLabelManager;
    struct NSNumber *_blinkTimerToken;
    _Bool _animationsPaused;
    _Bool _showSeconds;
}

@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) struct CGSize intrinsicSize;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) _Bool animationsPaused;
@property (nonatomic, readonly) struct UIEdgeInsets opticalInsets;
@property (nonatomic) _Bool showSeconds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setStyle:(id)arg1;
- (void)setMaxWidth:(double)arg1;
- (void)layoutSubviews;
- (id)viewForLastBaselineLayout;
- (double)_lastLineBaseline;
- (void)updateTimeText;
- (struct CGSize)sizeThatFits;
- (void)timeFormatterReportingLiveTimeDidChange:(id)arg1;
- (void)_startBlinking;
- (void)_stopBlinking;
- (id)effectiveFont;
- (id)initWithForDevice:(id)arg1 timeFormatter:(id)arg2 options:(unsigned long long)arg3 labelFactory:(CDUnknownBlockType)arg4;
- (void)setShowsDesignator:(_Bool)arg1;
- (void)sizeViewToFit;
- (id)effectiveAttributedText;
- (void)enumerateUnderlyingLabelsWithBlock:(CDUnknownBlockType)arg1;
- (void)_startOrStopBlinking;
- (void)_updateBlinkerAlphaForSecondFraction:(double)arg1;

@end

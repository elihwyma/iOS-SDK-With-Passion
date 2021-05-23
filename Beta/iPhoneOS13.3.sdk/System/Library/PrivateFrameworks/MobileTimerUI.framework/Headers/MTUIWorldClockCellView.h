/*
 Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
 */

#import <UIKit/UIView.h>

@class MTUIDigitalClockLabel, NSTimeZone, UILabel;

@protocol MTUIWorldClockCellViewDelegate;

@interface MTUIWorldClockCellView : UIView

{
    NSTimeZone *_timeZone;
    long long _nowInMinutes;
    _Bool _editing;
    _Bool _started;
    _Bool _shouldStackViews;
    id <MTUIWorldClockCellViewDelegate> _delegate;
    MTUIDigitalClockLabel *_digitalClock;
    UILabel *_nameLabel;
    UILabel *_combinedLabel;
}

@property (weak, nonatomic) id <MTUIWorldClockCellViewDelegate> delegate;
@property (nonatomic, readonly) _Bool started;
@property (nonatomic, readonly) MTUIDigitalClockLabel *digitalClock;
@property (nonatomic, readonly) UILabel *nameLabel;
@property (nonatomic, readonly) UILabel *combinedLabel;
@property (nonatomic) _Bool shouldStackViews;
@property (nonatomic, readonly) long long runMode;

+ (double)defaultHeight;
+ (id)dayAndTimeZoneOffsetStringFromDate:(id)arg1 withTimeZoneOffset:(long long)arg2 timeZoneAbbreviation:(id)arg3 spaceBeforeTimeDesignator:(_Bool)arg4;

- (void)setTimeZone:(id)arg1;
- (void)stop;
- (void)start;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (double)updateInterval;
- (void)updateTime;
- (void)significantTimeChange:(id)arg1;
- (void)localeChange:(id)arg1;
- (void)_configureFonts;
- (void)handleTextSizeChange:(id)arg1;
- (void)updateLabelAdjustFontSize;
- (void)updateTimeContinuously:(long long)arg1;
- (double)coarseUpdateInterval;

@end

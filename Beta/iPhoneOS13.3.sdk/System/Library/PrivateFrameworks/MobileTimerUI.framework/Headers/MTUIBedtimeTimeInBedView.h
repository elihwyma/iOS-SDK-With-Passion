/*
 Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
 */

#import <UIKit/UIView.h>

@class MTAlarm, MTUIBedtimeGraphView, MTUIDigitalClockLabel, NSArray, UIButton, UIFont, UIImageView, UILabel;

@interface MTUIBedtimeTimeInBedView : UIView

{
    double _glyphSize;
    long long _options;
    UILabel *_titleLabel;
    MTUIDigitalClockLabel *_bedtimeLabel;
    MTUIDigitalClockLabel *_wakeLabel;
    UIImageView *_bedtimeGlyph;
    UIImageView *_wakeGlyph;
    MTUIBedtimeGraphView *_graphView;
    UIButton *_moreHistoryButton;
}

@property (nonatomic) long long options;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MTUIDigitalClockLabel *bedtimeLabel;
@property (retain, nonatomic) MTUIDigitalClockLabel *wakeLabel;
@property (retain, nonatomic) UIImageView *bedtimeGlyph;
@property (retain, nonatomic) UIImageView *wakeGlyph;
@property (retain, nonatomic) MTUIBedtimeGraphView *graphView;
@property (retain, nonatomic) UIButton *moreHistoryButton;
@property (nonatomic) double glyphSize;
@property (copy, nonatomic) MTAlarm *sleepAlarm;
@property (retain, nonatomic) NSArray *sleepData;
@property (nonatomic, readonly) UIFont *titleFont;

+ (long long)defaultOptions;

- (id)initWithOptions:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1 options:(long long)arg2;
- (void)moreHistoryButtonPressed:(id)arg1;

@end

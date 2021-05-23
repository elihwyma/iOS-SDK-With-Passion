/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKModuleView.h>

@class CALayer, NSCalendar, NSDate, NSDateComponentsFormatter, UILabel, UIView;

@protocol NTKTimeTravelModuleViewTapClient;

@interface NTKTimeTravelModuleView : NTKModuleView

{
    UIView *_backgroundView;
    UILabel *_timeScrubDifferenceLabel;
    UILabel *_timeScrubNowLabel;
    NSDate *_date;
    NSDateComponentsFormatter *_offsetDateFormatter;
    _Bool _is24HourMode;
    _Bool _shouldUseNowText;
    NSCalendar *_cal;
    CALayer *_borderLayer;
    double _nowLabelCenterY;
    id <NTKTimeTravelModuleViewTapClient> _tapDelegate;
}

@property (weak, nonatomic) id <NTKTimeTravelModuleViewTapClient> tapDelegate;

+ (double)cornerRadius;
+ (id)timeTravelColor;
+ (double)_actualCornerRadiusForDevice:(id)arg1;
+ (double)_defaultHeightForDevice:(id)arg1;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)prepareToAppear;
- (void)_layoutContentView;
- (void)scrubToDate:(id)arg1;
- (void)_setupBorder;
- (id)_formatDateStringForIntervalBetweenReferenceDate:(id)arg1 andOverrideDate:(id)arg2;
- (id)initWithMaximumWidth:(double)arg1;

@end

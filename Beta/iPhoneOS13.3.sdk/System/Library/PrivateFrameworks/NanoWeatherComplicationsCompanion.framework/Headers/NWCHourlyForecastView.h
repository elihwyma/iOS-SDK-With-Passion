/*
 Image: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
 */

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@protocol NWMDataFormatter;

@interface NWCHourlyForecastView : UIView

{
    UILabel *_topLabel;
    UIImageView *_middleImageView;
    UILabel *_middleLabel;
    UILabel *_timeLabel;
    id <NWMDataFormatter> _formatter;
}

@property (nonatomic, readonly) UILabel *topLabel;
@property (nonatomic, readonly) UIImageView *middleImageView;
@property (nonatomic, readonly) UILabel *middleLabel;
@property (nonatomic, readonly) UILabel *timeLabel;
@property (weak, nonatomic) id <NWMDataFormatter> formatter;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)applyStyle;
- (void)_applyConstraintsWithConstants:(CDStruct_d2b197d1)arg1;
- (void)applyConditions:(id)arg1 date:(id)arg2 timeZone:(id)arg3;

@end

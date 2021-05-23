/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIStackView.h>

@class HKSelectedRangeLabel, UIColor;

@interface HKInteractiveChartAnnotationViewKeyValueLabel : UIStackView

{
    HKSelectedRangeLabel *_keyLabel;
    HKSelectedRangeLabel *_valueLabel;
    UIColor *_textColor;
}

@property (nonatomic, readonly) HKSelectedRangeLabel *keyLabel;
@property (nonatomic, readonly) HKSelectedRangeLabel *valueLabel;
@property (retain, nonatomic) UIColor *textColor;

- (id)initWithFrame:(struct CGRect)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIStackView.h>

@class HKLegendEntry, UIImageView, UILabel, _HKLegendDot;

@interface _HKLegendEntryView : UIStackView

{
    HKLegendEntry *_currentLegendEntry;
    UILabel *_legendLabel;
    _HKLegendDot *_legendDot;
    UIImageView *_legendIcon;
    HKLegendEntry *_legendEntry;
}

@property (retain, nonatomic) HKLegendEntry *legendEntry;

- (id)initWithLegendEntry:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
 */

#import <UIKit/UISlider.h>

@class NSMutableArray, UIColor;

@interface AXHAStepSlider : UISlider

{
    _Bool _restrictsValuesToTicks;
    _Bool _supportsVibrancy;
    unsigned long long _segmentCount;
    UIColor *_tickColor;
    NSMutableArray *_ticks;
}

@property (retain, nonatomic) NSMutableArray *ticks;
@property (nonatomic) unsigned long long segmentCount;
@property (nonatomic) _Bool restrictsValuesToTicks;
@property (nonatomic) _Bool supportsVibrancy;
@property (retain, nonatomic) UIColor *tickColor;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)traitCollection;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (void)sliderTapped:(id)arg1;
- (unsigned long long)numberOfTicks;
- (float)offsetBetweenTicksForNumberOfTicks:(unsigned long long)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
 */

#import <UIKit/UIView.h>

@class NSString, PNPGradientView;

@interface PNPWizardInkWeightControl : UIView

{
    double _value;
    PNPGradientView *_gradient;
    UIView *_knob;
}

@property (nonatomic, readonly) double value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setValue:(double)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_knobColor;
- (void)eventSource:(id)arg1 hadPencilDoubleTapped:(CDUnknownBlockType)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UIControl.h>

@class CAShapeLayer;

__attribute__((visibility("hidden")))
@interface WFCameraShutterButton : UIControl

{
    CAShapeLayer *_outlineLayer;
    CAShapeLayer *_buttonLayer;
}

@property (weak, nonatomic) CAShapeLayer *outlineLayer;
@property (weak, nonatomic) CAShapeLayer *buttonLayer;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
 */

#import <UIKit/UIView.h>

@protocol AXPIFingerAppearanceDelegate;

@interface AXPIPinchChainView : UIView

{
    _Bool _pressed;
    _Bool _selected;
    id <AXPIFingerAppearanceDelegate> _appearanceDelegate;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

@property (nonatomic) struct CGPoint startPoint;
@property (nonatomic) struct CGPoint endPoint;
@property (nonatomic, getter=isPressed) _Bool pressed;
@property (nonatomic, getter=isSelected) _Bool selected;
@property (weak, nonatomic) id <AXPIFingerAppearanceDelegate> appearanceDelegate;

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isUserInteractionEnabled;
- (void)drawRect:(struct CGRect)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <UIKit/UIView.h>

@class UIColor;

@interface SXViewportDebuggerOverlayView : UIView

{
    UIColor *_borderColor;
}

@property (retain, nonatomic) UIColor *borderColor;

- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

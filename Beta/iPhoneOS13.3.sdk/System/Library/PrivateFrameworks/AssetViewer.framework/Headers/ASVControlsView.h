/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <UIKit/UIView.h>

@class NSString, UIAccessibilityHUDGestureManager, UIStackView;

@interface ASVControlsView : UIView

{
    UIStackView *_stackView;
    UIAccessibilityHUDGestureManager *_largeTextHUDGestureManager;
}

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIAccessibilityHUDGestureManager *largeTextHUDGestureManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(struct CGPoint)arg2;
- (void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(struct CGPoint)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithArrangedSubviews:(id)arg1;
- (id)_buttonAtPoint:(struct CGPoint)arg1;

@end

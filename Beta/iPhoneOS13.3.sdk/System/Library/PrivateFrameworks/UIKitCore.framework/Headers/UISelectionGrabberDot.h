/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UISelectionGrabber;

__attribute__((visibility("hidden")))
@interface UISelectionGrabberDot : UIView

{
    UISelectionGrabber *m_grabber;
}

@property (weak, nonatomic) UISelectionGrabber *grabber;

- (void)setFrame:(struct CGRect)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (int)textEffectsVisibilityLevel;
- (int)textEffectsVisibilityLevelInKeyboardWindow;
- (struct CGRect)_extendedHitTestingRectIncludingCalloutBarAdjustments:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 container:(id)arg2;

@end

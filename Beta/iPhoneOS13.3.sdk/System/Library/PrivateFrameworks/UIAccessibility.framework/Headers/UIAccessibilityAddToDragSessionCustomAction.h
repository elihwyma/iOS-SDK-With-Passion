/*
 Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <UIKit/UIAccessibilityCustomAction.h>

@class UIView;

@interface UIAccessibilityAddToDragSessionCustomAction : UIAccessibilityCustomAction

{
    struct CGPoint _pt;
    UIView *_view;
}

- (id)_accessibilityCustomActionIdentifier;
- (id)initWithPoint:(struct CGPoint)arg1 inSourceView:(id)arg2;
- (_Bool)_accessibilityInvokeAddToSession;

@end

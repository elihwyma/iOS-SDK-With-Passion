/*
 Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <UIKit/UINavigationBar.h>

@class UIView;

@interface UIAccessibilityMathNavigationBar : UINavigationBar

{
    UIView *_titleView;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)accessibilityPerformEscape;
- (id)_popNavigationItemWithTransition:(int)arg1;
- (void)_pushNavigationItem:(id)arg1 transition:(int)arg2;

@end

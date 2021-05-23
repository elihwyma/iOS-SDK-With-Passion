/*
 Image: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
 */

#import <UIKit/UIViewController.h>

@interface UIViewController (NAUIAdditions)

+ (id)recursiveDescription;

- (id)recursiveDescription;
- (void)naui_addChildViewWithViewController:(id)arg1 toView:(id)arg2;
- (_Bool)naui_canAnimate;
- (void)naui_loadViewIfNecessary;
- (_Bool)naui_isHorizontalSizeClassRegularOrGreater;
- (_Bool)naui_isVerticalSizeClassRegularOrGreater;
- (_Bool)naui_isDescendantOfViewController:(id)arg1;
- (void)naui_addChildViewWithViewController:(id)arg1;
- (_Bool)naui_hasAxisWithRegularSizeClassOrGreater;
- (void)naui_applicationDidEnterBackground;
- (void)naui_applicationWillEnterForeground;
- (id)_recursiveDescriptionWithInset:(id)arg1;

@end

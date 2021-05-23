/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UISearchControllerAnimator.h>

__attribute__((visibility("hidden")))
@interface _UISearchControllerATVSearchBarAnimator : _UISearchControllerAnimator

{
    _Bool _shouldLayoutTabBar;
}

- (id)init;
- (void)animateTransition:(id)arg1;
- (void)didRelayoutSearchBarForController:(id)arg1;
- (void)didFocusSearchBarForController:(id)arg1;
- (void)didUnfocusSearchBarForController:(id)arg1;
- (void)willFocusOffscreenViewForController:(id)arg1 withHeading:(unsigned long long)arg2;

@end

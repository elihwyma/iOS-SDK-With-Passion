/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UINavigationBarTransitionContext.h>

@class UISearchBar;

__attribute__((visibility("hidden")))
@interface _UINavigationBarTransitionContextDismissSearch : _UINavigationBarTransitionContext

{
    UISearchBar *_transitioningSearchBar;
}

- (void)cancel;
- (void)complete;
- (void)animate;
- (void)prepare;
- (int)transition;

@end

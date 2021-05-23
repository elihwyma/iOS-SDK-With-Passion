/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIView, _UISearchBarLayout, _UISearchBarTransitionContext;

__attribute__((visibility("hidden")))
@interface _UISearchBarTransitionerBase : NSObject

{
    _UISearchBarLayout *_activeLayout;
    UIView *_searchBar;
    _UISearchBarTransitionContext *_transitionContext;
}

@property (weak, nonatomic, readonly) UIView *searchBar;
@property (retain, nonatomic) _UISearchBarTransitionContext *transitionContext;
@property (nonatomic, readonly) _UISearchBarLayout *activeLayout;

- (id)init;
- (void)cancel;
- (void)complete;
- (void)animate;
- (void)prepare;
- (id)initWithTransitionContext:(id)arg1 forSearchBar:(id)arg2;
- (id)initWithNewTransitionContextForSearchBar:(id)arg1;

@end

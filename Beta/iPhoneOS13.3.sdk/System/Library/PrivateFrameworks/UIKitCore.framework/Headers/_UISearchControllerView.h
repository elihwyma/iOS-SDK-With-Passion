/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface _UISearchControllerView : UIView

{
    _Bool __disableSearchBarContainerViewOrdering;
}

@property (nonatomic) _Bool _disableSearchBarContainerViewOrdering;

- (void)sendSubviewToBack:(id)arg1;
- (void)bringSubviewToFront:(id)arg1;
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_ensureViewOfClassIsOnTop:(Class)arg1;
- (void)_ensureContainerIsOnTop;
- (void)_ensureCarPlayLimitedUIIsOnTop;

@end

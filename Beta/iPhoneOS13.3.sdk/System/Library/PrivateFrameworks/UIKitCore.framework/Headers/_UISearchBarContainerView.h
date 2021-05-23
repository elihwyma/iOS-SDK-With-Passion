/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface _UISearchBarContainerView : UIView

{
    UIView *_subview;
    int _resizingMask;
    _Bool _shouldSendContainerSafeAreaInsetsDidChange;
}

- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (void)willRemoveSubview:(id)arg1;
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_uncontainerSubview:(id)arg1;
- (void)enforceSubviewAtBottomIfNecessary;
- (void)_didRemoveSubview:(id)arg1;

@end

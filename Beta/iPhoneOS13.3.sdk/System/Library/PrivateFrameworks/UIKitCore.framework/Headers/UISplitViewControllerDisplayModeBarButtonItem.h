/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIBarButtonItem.h>

@protocol UISplitViewControllerImpl;

__attribute__((visibility("hidden")))
@interface UISplitViewControllerDisplayModeBarButtonItem : UIBarButtonItem

{
    _Bool _hasBeenUsed;
    id <UISplitViewControllerImpl> _impl;
}

@property (weak, nonatomic, getter=_impl, setter=_setImpl:) id <UISplitViewControllerImpl> impl;
@property (nonatomic, readonly, getter=_hasBeenUsed) _Bool hasBeenUsed;

- (id)target;
- (SEL)action;
- (void)_setOwningNavigationItem:(id)arg1;
- (void)_wasUsed;

@end

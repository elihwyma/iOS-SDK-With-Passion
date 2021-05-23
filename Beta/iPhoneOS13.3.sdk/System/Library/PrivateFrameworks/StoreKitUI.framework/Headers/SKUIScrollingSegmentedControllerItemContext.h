/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class UIScrollView, UIViewController;

@protocol SKUIScrollingSegmentedControllerItemContextDelegate;

__attribute__((visibility("hidden")))
@interface SKUIScrollingSegmentedControllerItemContext : NSObject

{
    struct UIEdgeInsets _appliedContentInsetsAdjustment;
    struct UIEdgeInsets _desiredContentInsetsAdjustment;
    UIScrollView *_insetAdjustedContentScrollView;
    id <SKUIScrollingSegmentedControllerItemContextDelegate> _delegate;
    UIViewController *_viewController;
}

@property (weak, nonatomic) id <SKUIScrollingSegmentedControllerItemContextDelegate> delegate;
@property (nonatomic, readonly) UIViewController *viewController;

- (id)init;
- (id)initWithViewController:(id)arg1;
- (void)applyNewContentInset:(struct UIEdgeInsets)arg1;
- (void)updateAppliedContentInsetsAdjustment;
- (void)_applyNewContentInset:(struct UIEdgeInsets)arg1 withOldContentInset:(struct UIEdgeInsets)arg2 toContentScrollView:(id)arg3;

@end

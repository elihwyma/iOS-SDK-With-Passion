/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface UICollectionViewControllerWrapperView : UIView

- (id)preferredFocusedView;
- (void)didMoveToSuperview;
- (id)_viewControllerToNotifyOnLayoutSubviews;
- (id)_collectionViewController;

@end

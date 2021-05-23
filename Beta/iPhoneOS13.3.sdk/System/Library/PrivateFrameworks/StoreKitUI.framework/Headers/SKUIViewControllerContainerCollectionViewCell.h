/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSIndexPath, SKUIViewControllerContainerView, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface SKUIViewControllerContainerCollectionViewCell : UICollectionViewCell

{
    SKUIViewControllerContainerView *_viewControllerContainerView;
    _Bool _managesViewControllerContainerViewLayout;
    double _maximumContentWidth;
    NSIndexPath *_indexPath;
}

@property (nonatomic) double maximumContentWidth;
@property (retain, nonatomic) UIViewController *viewController;
@property (nonatomic, readonly) UIView *viewControllerContainerView;
@property (nonatomic) _Bool managesViewControllerContainerViewLayout;
@property (nonatomic, readonly) NSIndexPath *indexPath;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;

@end

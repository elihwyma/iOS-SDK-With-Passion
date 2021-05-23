/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSArray;

@interface _PXActionStackedViewController : UIViewController

{
    double _separatorHeight;
    NSArray *_separatorViews;
    NSArray *_viewControllers;
}

@property (copy, nonatomic, readonly) NSArray *viewControllers;

- (void)loadView;
- (struct CGSize)preferredContentSize;
- (void)viewWillLayoutSubviews;
- (id)initWithViewControllers:(id)arg1;

@end

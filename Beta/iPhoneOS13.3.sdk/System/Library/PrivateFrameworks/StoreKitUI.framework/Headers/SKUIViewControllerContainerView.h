/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class UIViewController;

__attribute__((visibility("hidden")))
@interface SKUIViewControllerContainerView : UIView

{
    UIViewController *_viewController;
}

@property (retain, nonatomic) UIViewController *viewController;

- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateLayoutOfViewControllerView;

@end

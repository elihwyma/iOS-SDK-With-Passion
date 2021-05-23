/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

__attribute__((visibility("hidden")))
@interface SKUISimpleContainerViewController : UIViewController

{
    UIViewController *_contentViewController;
}

@property (retain, nonatomic) UIViewController *contentViewController;

+ (_Bool)_shouldForwardViewWillTransitionToSize;

- (void)loadView;
- (void)setPreferredContentSize:(struct CGSize)arg1;

@end

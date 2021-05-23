/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

__attribute__((visibility("hidden")))
@interface SKUIBackdropContentViewController : UIViewController

{
    long long _backdropViewPrivateStyle;
    UIViewController *_contentViewController;
}

@property (nonatomic) long long backdropViewPrivateStyle;
@property (retain, nonatomic) UIViewController *contentViewController;

- (void)loadView;
- (id)initWithContentViewController:(id)arg1;

@end

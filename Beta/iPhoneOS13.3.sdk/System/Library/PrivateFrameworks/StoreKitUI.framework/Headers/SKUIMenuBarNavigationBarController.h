/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUINavigationBarController.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface SKUIMenuBarNavigationBarController : SKUINavigationBarController

{
    UIView *_titleView;
}

@property (retain, nonatomic) UIView *titleView;

- (id)fallbackTitleView;

@end

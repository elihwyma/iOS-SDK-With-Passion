/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSArray, UIViewController;

__attribute__((visibility("hidden")))
@interface SKUIIPadChartsColumnView : UIView

{
    struct UIEdgeInsets _contentInset;
    NSArray *_contentViewControllers;
    long long _selectedViewControllerIndex;
}

@property (nonatomic) struct UIEdgeInsets contentInset;
@property (copy, nonatomic) NSArray *contentViewControllers;
@property (nonatomic, readonly) UIViewController *selectedViewController;

- (void)layoutSubviews;
- (void)setSelectedViewControllerIndex:(long long)arg1;
- (void)_addSelectedViewController;

@end

/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIScrollView.h>

@protocol SKUIProxyScrollViewDelegate;

@interface SKUIProxyScrollView : UIScrollView

@property (nonatomic) id <SKUIProxyScrollViewDelegate> delegate;

- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)didMoveToWindow;

@end

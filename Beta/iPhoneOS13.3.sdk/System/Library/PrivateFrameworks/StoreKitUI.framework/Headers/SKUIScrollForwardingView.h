/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class UIScrollView;

@interface SKUIScrollForwardingView : UIView

{
    UIScrollView *_scrollView;
}

@property (retain, nonatomic) UIScrollView *scrollView;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

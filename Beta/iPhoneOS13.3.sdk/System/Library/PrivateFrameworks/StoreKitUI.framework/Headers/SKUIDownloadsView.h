/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface SKUIDownloadsView : UIView

{
    UIView *_contentView;
    UIView *_overlayView;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *overlayView;

- (void)layoutSubviews;

@end

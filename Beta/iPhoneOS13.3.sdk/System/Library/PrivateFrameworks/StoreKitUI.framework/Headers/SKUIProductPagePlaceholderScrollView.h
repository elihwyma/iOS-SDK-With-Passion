/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIScrollView.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface SKUIProductPagePlaceholderScrollView : UIScrollView

{
    UIView *_placeholderView;
    double _offset;
    _Bool _isPad;
}

@property (nonatomic) _Bool isPad;
@property (retain, nonatomic) UIView *placeholderView;
@property (nonatomic) double offset;

- (void)layoutSubviews;

@end

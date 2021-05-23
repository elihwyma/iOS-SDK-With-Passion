/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface SKUIScreenshotsView : UIView

{
    UIView *_primaryView;
    UIView *_separatorView;
}

@property (retain, nonatomic) UIView *primaryView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

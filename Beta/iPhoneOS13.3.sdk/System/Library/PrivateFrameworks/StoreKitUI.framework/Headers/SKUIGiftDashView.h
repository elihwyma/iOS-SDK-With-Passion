/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface SKUIGiftDashView : UIView

{
    UIColor *_dashColor;
    struct CGSize _dashSize;
    double _dashSpacing;
}

@property (copy, nonatomic) UIColor *dashColor;
@property (nonatomic) struct CGSize dashSize;
@property (nonatomic) double dashSpacing;

- (void)drawRect:(struct CGRect)arg1;

@end

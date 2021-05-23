/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface SKUIDividerView : UIView

{
    long long _dividerOrientation;
    double _dividerSize;
}

@property (retain, nonatomic) UIColor *dividerColor;
@property (nonatomic) long long dividerOrientation;
@property (nonatomic) double dividerSize;

- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

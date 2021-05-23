/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIControl.h>

@class NSString, SKUIColorScheme, UIColor, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SKUIProductPageTableExpandableHeaderView : UIControl

{
    UILabel *_actionLabel;
    UIView *_bottomBorderView;
    UILabel *_titleLabel;
    UIView *_topBorderView;
    SKUIColorScheme *_colorScheme;
}

@property (copy, nonatomic) NSString *actionString;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (copy, nonatomic) UIColor *bottomBorderColor;
@property (copy, nonatomic) UIColor *topBorderColor;

- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end

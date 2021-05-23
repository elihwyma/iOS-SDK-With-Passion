/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSString, UIColor, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIQuicklinksView : UIView

{
    UIView *_borderView;
    UIView *_collectionView;
    UIColor *_titleColor;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIView *collectionView;
@property (copy, nonatomic) NSString *title;

- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setColoringWithColorScheme:(id)arg1;

@end

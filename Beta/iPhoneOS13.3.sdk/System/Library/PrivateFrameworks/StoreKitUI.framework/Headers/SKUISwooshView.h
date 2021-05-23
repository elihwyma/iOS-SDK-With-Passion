/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSString, SKUILinkButton, UIButton, UICollectionView, UIColor, UIControl, UILabel;

@interface SKUISwooshView : UIView

{
    UIView *_borderView;
    UICollectionView *_collectionView;
    struct UIEdgeInsets _collectionViewInsets;
    UIButton *_seeAllButton;
    _Bool _showsChevronForTitle;
    SKUILinkButton *_titleButton;
    UIColor *_titleColor;
    UILabel *_titleLabel;
    struct UIEdgeInsets _contentInsets;
}

@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) struct UIEdgeInsets collectionViewInsets;
@property (nonatomic, readonly) UIControl *seeAllControl;
@property (copy, nonatomic) NSString *seeAllTitle;
@property (nonatomic, readonly) UIControl *chevronTitleControl;
@property (nonatomic) _Bool showsChevronForTitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIColor *titleColor;

- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setColoringWithColorScheme:(id)arg1;
- (id)_seeAllArrowImage;
- (void)setSeeAllColor:(id)arg1 forControlState:(unsigned long long)arg2;
- (id)seeAllColorForControlState:(unsigned long long)arg1;

@end

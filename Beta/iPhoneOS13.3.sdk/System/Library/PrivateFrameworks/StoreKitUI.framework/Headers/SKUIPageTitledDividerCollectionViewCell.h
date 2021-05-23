/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UICollectionViewCell.h>

@class NSNumber, NSString, SKUIButtonViewElement, UIButton, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SKUIPageTitledDividerCollectionViewCell : UICollectionViewCell

{
    double _buttonContentHorizontalPadding;
    SKUIButtonViewElement *_buttonViewElement;
    struct UIEdgeInsets _contentEdgeInsets;
    struct UIEdgeInsets _contentInset;
    UIButton *_dividerButton;
    NSNumber *_dividerButtonImageRequestIdentifier;
    UILabel *_dividerLabel;
    struct UIEdgeInsets _imageVerticalPadding;
    struct UIEdgeInsets _internalHorizontalMargins;
    UIView *_leftLine;
    UIView *_rightLine;
    struct UIEdgeInsets _titleVerticalPadding;
    double _topEdgeInset;
}

@property (nonatomic) double topEdgeInset;
@property (copy, nonatomic) NSString *dividerTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (id)_attributedStringForDividerTitle:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForButtonViewElement:(id)arg1 context:(id)arg2;
+ (struct UIEdgeInsets)_imageVerticalPaddingForViewElement:(id)arg1;
+ (id)_attributedStringForViewElementText:(id)arg1 style:(id)arg2 context:(id)arg3;
+ (struct UIEdgeInsets)_titleVerticalPaddingForViewElement:(id)arg1;
+ (struct UIEdgeInsets)_contentEdgeInsetsForViewElement:(id)arg1;
+ (double)viewElementInsetDividerHeight:(id)arg1;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 dividerTitle:(id)arg2 context:(id)arg3;

- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (id)viewForElementIdentifier:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (id)_imageForImageViewElement:(id)arg1 returningRequestIdentifier:(out id *)arg2 context:(id)arg3;
- (void)setColoringWithColorScheme:(id)arg1;

@end

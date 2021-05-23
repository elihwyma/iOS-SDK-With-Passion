/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionReusableView.h>

@class UICollectionViewTableLayout, UICollectionViewTableLayoutAttributes, UIColor, UILabel, UITableViewHeaderFooterView, UIView;

@interface UICollectionViewTableHeaderFooterView : UICollectionReusableView

{
    _Bool _floating;
    UITableViewHeaderFooterView *_tableViewHeaderFooterView;
}

@property (retain, nonatomic) UITableViewHeaderFooterView *tableViewHeaderFooterView;
@property (nonatomic, readonly, getter=_tableLayout) UICollectionViewTableLayout *tableLayout;
@property (nonatomic, readonly, getter=_tableAttributes) UICollectionViewTableLayoutAttributes *tableAttributes;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic, readonly) UILabel *textLabel;
@property (nonatomic, readonly) UILabel *detailTextLabel;
@property (nonatomic, readonly) UIView *contentView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) _Bool floating;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)prepareForReuse;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end

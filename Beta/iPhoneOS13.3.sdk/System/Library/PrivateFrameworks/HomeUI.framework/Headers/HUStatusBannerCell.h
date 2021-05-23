/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionViewCell.h>

@class HFItem, HUGridStatusBannerCellLayoutOptions, NSArray, NSString, UIButton, UIImageView, UILabel, UIView;

@protocol HUResizableCellDelegate;

@interface HUStatusBannerCell : UICollectionViewCell

{
    _Bool _cellContentsHidden;
    HUGridStatusBannerCellLayoutOptions *_layoutOptions;
    HFItem *_item;
    UIButton *_continueButton;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIView *_lineView;
    UIView *_lipView;
    UILabel *_continueLabel;
    NSArray *_layoutConstraints;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView *lipView;
@property (retain, nonatomic) UILabel *continueLabel;
@property (retain, nonatomic) UIButton *continueButton;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (retain, nonatomic) HUGridStatusBannerCellLayoutOptions *layoutOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id <HUResizableCellDelegate> resizingDelegate;
@property (nonatomic, getter=areCellContentsHidden) _Bool cellContentsHidden;
@property (nonatomic, getter=isRearranging) _Bool rearranging;

+ (_Bool)requiresConstraintBasedLayout;
+ (Class)layoutOptionsClass;

- (id)initWithCoder:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateConstraints;
- (void)setSelected:(_Bool)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)layoutOptionsDidChange;
- (void)_setupCommonCellAppearance;
- (void)_configureBannerForUnfinishedOnboardingFlowKeyPath:(id)arg1;
- (_Bool)_isCellSizeSubclassSmallPhone;

@end

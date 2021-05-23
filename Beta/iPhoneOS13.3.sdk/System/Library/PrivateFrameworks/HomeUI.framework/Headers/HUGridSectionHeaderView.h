/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UICollectionReusableView.h>

@class HUGridLayoutOptions, NSArray, NSString, UIButton, UILabel;

@interface HUGridSectionHeaderView : UICollectionReusableView

{
    NSString *_sectionTitle;
    UIButton *_button;
    HUGridLayoutOptions *_layoutOptions;
    UILabel *_titleLabel;
    NSArray *_headerCellConstraints;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) NSArray *headerCellConstraints;
@property (retain, nonatomic) NSString *sectionTitle;
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions;

+ (_Bool)requiresConstraintBasedLayout;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)_updateTitleLabel;
- (void)_invalidateConstraints;

@end

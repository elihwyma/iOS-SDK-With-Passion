/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <UIKit/UICollectionViewCell.h>

@class HKDisplayCategory, NSLayoutConstraint, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface WDHealthDataTopLevelCategoryCollectionViewCell : UICollectionViewCell

{
    UIImageView *_categoryImageView;
    UILabel *_categoryLabel;
    NSLayoutConstraint *_categoryLabelBaselineAnchor;
    HKDisplayCategory *_displayCategory;
    double _fontSize;
}

@property (retain, nonatomic) HKDisplayCategory *displayCategory;
@property (nonatomic) double fontSize;

+ (id)reuseIdentifier;
+ (id)categoryNameLabelWithText:(id)arg1;
+ (double)internalHorizontalPadding;
+ (id)categoryNameLabelFontWithSize:(double)arg1;
+ (id)categoryNameLabelFont;
+ (double)categoryNameLabelDefaultFontSize;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)_updateForCurrentSizeCategory;

@end

/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UICollectionViewCell.h>

@class PXRoundedCornerOverlayView, UIImageView, UILabel;

@interface PXSearchZeroKeywordCollectionViewCell : UICollectionViewCell

{
    UIImageView *_imageView;
    UILabel *_textLabel;
    PXRoundedCornerOverlayView *_imageCornerOverlayView;
}

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic, readonly) PXRoundedCornerOverlayView *imageCornerOverlayView;

+ (id)reuseIdentifier;
+ (struct CGSize)thumbnailSize;
+ (struct CGSize)cellSizeWithoutTextLabel;
+ (struct CGSize)cellSizeWithTextLabelNumberOfLines:(unsigned long long)arg1;
+ (struct CGSize)cellSizeForAccessibilityTextWithoutTextLabelUsingCollectionInset:(struct UIEdgeInsets)arg1 collectionCellSpacing:(double)arg2 screenWidth:(double)arg3;
+ (struct CGSize)cellSizeForAccessibilityTextWithTextLabelNumberOfLines:(unsigned long long)arg1 collectionInset:(struct UIEdgeInsets)arg2 collectionCellSpacing:(double)arg3 screenWidth:(double)arg4;
+ (struct CGSize)thumbnailSizeForAccessibilityTextUsingCollectionInset:(struct UIEdgeInsets)arg1 cellSpacing:(double)arg2 screenWidth:(double)arg3;
+ (struct CGSize)_thumbnailSizeWithMetric:(double)arg1;
+ (double)expectedNumberOfCellsVisibleWithAccessibilityText:(_Bool)arg1 withInset:(struct UIEdgeInsets)arg2 cellSpacing:(double)arg3 screenWidth:(double)arg4;
+ (double)_calculateHeightNeededForTextLabelWithNumberOfLines:(unsigned long long)arg1;
+ (id)attributedStringForCellLabelWithString:(id)arg1;
+ (_Bool)cellLabelTextNeedsMultipleLines:(id)arg1 cellWidth:(double)arg2;
+ (double)verticalSpacing;
+ (id)thumbnailWidthInterpolator;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

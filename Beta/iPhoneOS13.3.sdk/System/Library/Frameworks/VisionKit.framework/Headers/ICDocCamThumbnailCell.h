/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <UIKit/UICollectionViewCell.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface ICDocCamThumbnailCell : UICollectionViewCell

{
    UIImageView *_imageView;
}

@property (retain, nonatomic) UIImageView *imageView;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (_Bool)isAccessibilityElement;
- (void)applyLayoutAttributes:(id)arg1;
- (id)indexStringForAccessibility;
- (id)parentCollectionView;

@end

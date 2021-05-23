/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UICollectionViewCell.h>

@class PKPaletteShape, UIImageView;

@interface PKPaletteShapeCell : UICollectionViewCell

{
    UIImageView *_imageView;
    PKPaletteShape *_shape;
}

@property (nonatomic, readonly) UIImageView *imageView;
@property (retain, nonatomic) PKPaletteShape *shape;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

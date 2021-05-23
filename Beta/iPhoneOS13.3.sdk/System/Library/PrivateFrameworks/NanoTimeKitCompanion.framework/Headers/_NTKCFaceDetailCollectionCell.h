/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UICollectionViewCell.h>

@class CAShapeLayer, NSString, UIImage, UIImageView, _NTKCFaceDetailCollectionCellLabel;

@interface _NTKCFaceDetailCollectionCell : UICollectionViewCell

{
    UIImageView *_imageView;
    CAShapeLayer *_outlineView;
    _NTKCFaceDetailCollectionCellLabel *_label;
    _Bool _active;
    double _outlineOutset;
    UIImage *_image;
    NSString *_text;
    long long _style;
    struct CGRect _swatchFrame;
}

@property (nonatomic) struct CGRect swatchFrame;
@property (nonatomic) double outlineOutset;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) long long style;
@property (nonatomic) _Bool active;

+ (id)reuseIdentifier;
+ (double)outlineLineWidth;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2;

@end

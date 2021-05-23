/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <MPUFoundation/MPUStackItemView.h>

@class UIImage, UIImageView;

@interface MPUImageStackItemView : MPUStackItemView

{
    UIImageView *_imageView;
    UIImage *_image;
    double _imageAlpha;
    struct CGRect _imageContentsRect;
    struct CGAffineTransform _imageTransform;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) double imageAlpha;
@property (nonatomic) struct CGRect imageContentsRect;
@property (nonatomic) struct CGAffineTransform imageTransform;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end

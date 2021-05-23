/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <UIKit/UIView.h>

@class CALayer, UIImage;

@interface ICDocCamImageQuadEditImageView : UIView

{
    double _imageOpacity;
    CALayer *_imageLayer;
    UIImage *_image;
    long long _orientation;
}

@property (retain, nonatomic) CALayer *imageLayer;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long orientation;
@property (nonatomic) double imageOpacity;

- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)accessibilityIgnoresInvertColors;
- (void)setImage:(id)arg1 orientation:(long long)arg2;

@end

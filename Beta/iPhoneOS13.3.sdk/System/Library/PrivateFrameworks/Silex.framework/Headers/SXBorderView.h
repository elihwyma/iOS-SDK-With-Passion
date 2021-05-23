/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <UIKit/UIView.h>

@class UIImage;

@interface SXBorderView : UIView

{
    UIImage *_image;
}

@property (retain, nonatomic) UIImage *image;

+ (Class)layerClass;

- (id)init;
- (void)drawRect:(struct CGRect)arg1;

@end

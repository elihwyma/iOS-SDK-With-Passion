/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface SKUIStackViewItemView : UIView

{
    UIColor *_borderColor;
    UIImage *_image;
    _Bool _shouldFlipImageHorizontal;
    _Bool _shouldFlipImageVertical;
}

@property (copy, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) _Bool shouldFlipImageHorizontal;
@property (nonatomic) _Bool shouldFlipImageVertical;

- (void)drawRect:(struct CGRect)arg1;

@end

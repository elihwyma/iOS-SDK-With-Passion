/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIImageDataConsumer.h>

@class UIColor;

@interface SKUISizeToFitImageDataConsumer : SKUIImageDataConsumer

{
    struct CGSize _constraintSize;
    _Bool _custom;
    UIColor *_gradientEndColor;
    double _gradientHeight;
}

@property (nonatomic) struct CGSize constraintSize;
@property (retain, nonatomic) UIColor *gradientEndColor;
@property (nonatomic) double gradientHeight;

+ (id)consumerWithConstraintSize:(struct CGSize)arg1;
+ (id)consumerWithConstraintSize2:(struct CGSize)arg1;

- (id)imageForImage:(id)arg1;
- (void)_drawGradientWithContext:(struct CGContext *)arg1 imageRect:(struct CGRect)arg2;

@end

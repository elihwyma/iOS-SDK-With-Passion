/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIImageDataConsumer.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface SKUIOnboardingCircleImageDataConsumer : SKUIImageDataConsumer

{
    struct CGSize _outputSize;
    UIColor *_tintColor;
    _Bool _usesSaturationFilter;
}

@property (nonatomic) struct CGSize outputSize;
@property (copy, nonatomic) UIColor *tintColor;
@property (nonatomic) _Bool usesSaturationFilter;

- (id)imageForImage:(id)arg1;
- (id)_saturationBackgroundImageWithSize:(struct CGSize)arg1;

@end

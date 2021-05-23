/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIImageDataConsumer.h>

@class IKColor, UIColor, UITraitCollection;

@interface SKUIStyledImageDataConsumer : SKUIImageDataConsumer

{
    struct UIEdgeInsets _borderRadii;
    IKColor *_iKBackgroundColor;
    UITraitCollection *_startingTraitCollection;
    UIColor *_backgroundColor;
    UIColor *_borderColor;
    long long _imageContentMode;
    long long _imageTreatment;
    double _shadowRadius;
    UIColor *_shadowColor;
    struct CGSize _imageSize;
    struct CGSize _shadowOffset;
    struct UIEdgeInsets _borderWidths;
    struct UIEdgeInsets _borderMargins;
    struct UIEdgeInsets _imagePadding;
}

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) struct UIEdgeInsets borderWidths;
@property (nonatomic) struct UIEdgeInsets borderMargins;
@property (nonatomic) long long imageContentMode;
@property (nonatomic) struct UIEdgeInsets imagePadding;
@property (nonatomic) long long imageTreatment;
@property (nonatomic) struct CGSize imageSize;
@property (nonatomic) struct CGSize shadowOffset;
@property (nonatomic) double shadowRadius;
@property (retain, nonatomic) UIColor *shadowColor;

+ (id)safariBannerIconConsumer;
+ (id)safariBannerProductImageConsumer;
+ (id)shareSheetIconConsumer;
+ (id)roomIconConsumer;
+ (id)giftComposeProductImageConsumer;
+ (id)giftResultIconConsumer;
+ (id)giftResultProductImageConsumer;
+ (id)giftThemeIconConsumer;
+ (id)giftThemeProductImageConsumer;
+ (id)lockupIconConsumerWithSize:(long long)arg1;
+ (id)appIconConsumerWithSize:(struct CGSize)arg1;
+ (id)brickConsumerWithBrickSize:(struct CGSize)arg1;
+ (id)productImageConsumerWithSize:(struct CGSize)arg1;
+ (id)roomProductImageConsumer;
+ (id)applePackIconConsumer;
+ (id)brickConsumer;
+ (id)cardIconConsumer;
+ (id)cardProductImageConsumer;
+ (id)categoryIconConsumer;
+ (id)gridIconConsumer;
+ (id)listIconConsumer;
+ (id)lockupProductImageConsumerWithSize:(long long)arg1;
+ (id)mixedTopChartsNewsstandConsumer;
+ (id)newsstandRoomNewsstandConsumer;
+ (id)newsstandSwooshNewsstandConsumer;
+ (id)parentBundleIconConsumer;
+ (id)productPageProductImageConsumer;
+ (id)purchasedIconConsumer;
+ (id)purchasedProductImageConsumer;
+ (id)swooshNewsstandConsumer;
+ (id)topChartsIconConsumer;
+ (id)topChartsNewsstandConsumer;
+ (id)updatesIconConsumer;
+ (id)updatesProductImageConsumer;
+ (id)wishlistIconConsumer;
+ (id)wishlistProductImageConsumer;
+ (id)manageMessagesConsumer;
+ (id)categoriesMessagesConsumer;
+ (id)purchasedMessagesConsumer;
+ (_Bool)isImageCompressionEnabled;

- (id)init;
- (id)imageForImage:(id)arg1;
- (_Bool)isImagePlaceholderAvailable;
- (id)imagePlaceholderForColor:(id)arg1;
- (id)initWithViewElement:(id)arg1;
- (id)imageForColor:(id)arg1;
- (id)imageForColor:(id)arg1 size:(struct CGSize)arg2;
- (id)initWithSize:(struct CGSize)arg1 treatment:(long long)arg2;
- (id)_defaultPlaceholderColor;
- (id)_outputImageWithInputSize:(struct CGSize)arg1 outputSize:(struct CGSize)arg2 drawBlock:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)_placeholderCornerPathBlock;
- (id)_arcRoundedImageWithBounds:(struct CGRect)arg1 contentRect:(struct CGRect)arg2 cornerRadius:(double)arg3 drawBlock:(CDUnknownBlockType)arg4;
- (id)_scaledImageWithBounds:(struct CGRect)arg1 contentRect:(struct CGRect)arg2 drawBlock:(CDUnknownBlockType)arg3;
- (id)_leftToRightGradient:(struct CGRect)arg1 contentRect:(struct CGRect)arg2 drawBlock:(CDUnknownBlockType)arg3;
- (id)_radialBlurImageWithBounds:(struct CGRect)arg1 contentRect:(struct CGRect)arg2 drawBlock:(CDUnknownBlockType)arg3;
- (id)_dynamicUberImageWithBounds:(struct CGRect)arg1 inputSize:(struct CGSize)arg2 drawBlock:(CDUnknownBlockType)arg3;
- (id)_uberBannerImageWithBounds:(struct CGRect)arg1 inputSize:(struct CGSize)arg2 drawBlock:(CDUnknownBlockType)arg3;
- (id)_roundedBorderWithBounds:(struct CGRect)arg1 contentRect:(struct CGRect)arg2 drawBlock:(CDUnknownBlockType)arg3;
- (id)_imageWithSize:(struct CGSize)arg1 isOpaque:(_Bool)arg2 drawBlock:(CDUnknownBlockType)arg3;
- (_Bool)_backgroundIsOpaque;
- (void)_drawBordersWithImageRect:(struct CGRect)arg1 bounds:(struct CGRect)arg2;
- (id)_uberImageWithBounds:(struct CGRect)arg1 inputSize:(struct CGSize)arg2 backgroundColor:(id)arg3 drawBlock:(CDUnknownBlockType)arg4;

@end

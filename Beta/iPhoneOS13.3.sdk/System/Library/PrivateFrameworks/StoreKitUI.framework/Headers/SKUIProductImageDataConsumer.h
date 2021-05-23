/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIImageDataConsumer.h>

#import <StoreKitUI/Swift-Protocol.h>

@class SKUIColorScheme, UIColor;

@interface SKUIProductImageDataConsumer : SKUIImageDataConsumer <Swift>

{
    UIColor *_backgroundColor;
    struct CGSize _iconSize;
    SKUIColorScheme *_colorScheme;
}

@property (nonatomic, readonly) struct CGSize iconSize;
@property (nonatomic, readonly) struct CGSize imageSize;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) SKUIColorScheme *colorScheme;

+ (id)smartBannerConsumer;
+ (id)giftComposePosterConsumer;
+ (id)giftComposeLetterboxConsumer;
+ (id)giftComposeConsumer;
+ (id)giftResultConsumer;
+ (id)giftThemePosterConsumer;
+ (id)giftThemeLetterboxConsumer;
+ (id)giftThemeConsumer;
+ (id)lockupConsumerWithSize:(long long)arg1 itemKind:(long long)arg2;
+ (id)consumerWithSize:(struct CGSize)arg1;
+ (id)gridConsumer;
+ (id)wishlistConsumer;
+ (id)cardConsumer;
+ (id)chartsConsumer;
+ (id)updatesConsumer;
+ (id)purchasedConsumer;
+ (id)productPageConsumer;
+ (id)swooshConsumer;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)imageForImage:(id)arg1;
- (id)imageForColor:(id)arg1;
- (id)imageForColor:(id)arg1 size:(struct CGSize)arg2;

@end

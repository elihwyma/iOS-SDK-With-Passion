/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, SKUIColorScheme, SKUIProductImageDataConsumer, SKUIStyledImageDataConsumer, UIColor;

@interface SKUIItemArtworkContext : NSObject

{
    UIColor *_backgroundColor;
    SKUIColorScheme *_colorScheme;
    SKUIProductImageDataConsumer *_generalImageConsumer;
    SKUIStyledImageDataConsumer *_iconConsumer;
    SKUIProductImageDataConsumer *_letterboxConsumer;
    SKUIStyledImageDataConsumer *_newsstandConsumer;
    NSMutableDictionary *_placeholders;
    SKUIProductImageDataConsumer *_posterConsumer;
    SKUIStyledImageDataConsumer *_messagesIconConsumer;
}

@property (retain, nonatomic) SKUIProductImageDataConsumer *generalConsumer;
@property (retain, nonatomic) SKUIStyledImageDataConsumer *iconConsumer;
@property (retain, nonatomic) SKUIProductImageDataConsumer *letterboxConsumer;
@property (retain, nonatomic) SKUIStyledImageDataConsumer *newsstandConsumer;
@property (retain, nonatomic) SKUIProductImageDataConsumer *posterConsumer;
@property (retain, nonatomic) SKUIStyledImageDataConsumer *messagesIconConsumer;
@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (retain, nonatomic) UIColor *backgroundColor;

+ (id)wishlistContext;
+ (id)lockupContextWithSize:(long long)arg1;
+ (id)roomContext;

- (id)placeholderImageForItem:(id)arg1;
- (id)dataConsumerForItem:(id)arg1;
- (struct CGSize)imageSizeForItem:(id)arg1;
- (id)URLForItem:(id)arg1;
- (struct CGSize)largestImageSizeForLockups:(id)arg1;
- (id)artworkForItem:(id)arg1;
- (struct CGSize)largestImageSizeForItems:(id)arg1;

@end

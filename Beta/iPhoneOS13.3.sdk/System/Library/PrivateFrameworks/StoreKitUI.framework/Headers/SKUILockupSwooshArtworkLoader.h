/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUISwooshArtworkLoader.h>

@class SKUIItemArtworkContext, SKUILockupSwooshViewController, SKUIVideoImageDataConsumer, UIImage;

@interface SKUILockupSwooshArtworkLoader : SKUISwooshArtworkLoader

{
    SKUIItemArtworkContext *_context;
    SKUIVideoImageDataConsumer *_videoImageConsumer;
    UIImage *_videoPlaceholderImage;
}

@property (nonatomic, readonly) SKUILockupSwooshViewController *swooshViewController;

- (id)placeholderImageForItem:(id)arg1;
- (id)initWithArtworkLoader:(id)arg1 swoosh:(id)arg2;
- (void)setImage:(id)arg1 forRequest:(id)arg2;
- (void)loadImagesForNextPageWithReason:(long long)arg1;
- (_Bool)loadImageForItem:(id)arg1 reason:(long long)arg2;
- (_Bool)loadImageForVideo:(id)arg1 reason:(long long)arg2;
- (id)cachedImageForItem:(id)arg1;
- (id)cachedImageForVideo:(id)arg1;
- (id)placeholderImageForVideo:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableIndexSet, NSString, SKUIImageDataConsumer, SKUIResourceLoader, SKUISwooshViewController, UIImage;

@interface SKUISwooshArtworkLoader : NSObject

{
    SKUIResourceLoader *_artworkLoader;
    NSMapTable *_artworkRequestIDs;
    SKUIImageDataConsumer *_imageDataConsumer;
    NSMutableIndexSet *_outstandingRequestIDs;
    UIImage *_placeholderImage;
    SKUISwooshViewController *_swooshViewController;
}

@property (nonatomic, readonly) SKUIResourceLoader *artworkLoader;
@property (nonatomic, readonly) SKUISwooshViewController *swooshViewController;
@property (retain, nonatomic) SKUIImageDataConsumer *imageDataConsumer;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)initWithArtworkLoader:(id)arg1 swoosh:(id)arg2;
- (id)cachedImageForObject:(id)arg1;
- (_Bool)loadImageForObject:(id)arg1 URL:(id)arg2 reason:(long long)arg3;
- (unsigned long long)artworkRequestIdentifierForObject:(id)arg1;
- (void)setImage:(id)arg1 forRequest:(id)arg2;
- (void)loadImagesForNextPageWithReason:(long long)arg1;
- (void)deprioritizePendingImageLoads;
- (void)setPlaceholderColorWithColorScheme:(id)arg1;
- (_Bool)loadImageForObject:(id)arg1 artworkRequest:(id)arg2 reason:(long long)arg3;
- (void)cancelImageLoading;

@end

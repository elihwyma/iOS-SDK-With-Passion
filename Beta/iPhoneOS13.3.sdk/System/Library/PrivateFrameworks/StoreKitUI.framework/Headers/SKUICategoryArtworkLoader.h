/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMapTable, NSString, SKUIImageDataConsumer, SKUIResourceLoader, UIImage;

__attribute__((visibility("hidden")))
@interface SKUICategoryArtworkLoader : NSObject

{
    NSMapTable *_artworkRequestIDs;
    SKUIImageDataConsumer *_imageDataConsumer;
    SKUIResourceLoader *_loader;
    NSHashTable *_observers;
    UIImage *_placeholderImage;
}

@property (nonatomic, readonly) SKUIResourceLoader *artworkLoader;
@property (retain, nonatomic) SKUIImageDataConsumer *imageDataConsumer;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (nonatomic, readonly) struct CGSize imageSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)initWithArtworkLoader:(id)arg1;
- (id)cachedImageForCategory:(id)arg1;
- (void)loadImageForCategory:(id)arg1 reason:(long long)arg2;

@end

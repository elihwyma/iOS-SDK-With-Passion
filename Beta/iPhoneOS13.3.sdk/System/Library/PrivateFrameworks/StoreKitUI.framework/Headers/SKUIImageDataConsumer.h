/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreServices/SSVURLDataConsumer.h>

@interface SKUIImageDataConsumer : SSVURLDataConsumer

@property (nonatomic, readonly, getter=isImagePlaceholderAvailable) _Bool imagePlaceholderAvailable;

- (id)objectForData:(id)arg1 response:(id)arg2 error:(id *)arg3;
- (id)imageForImage:(id)arg1;
- (id)imagePlaceholderForColor:(id)arg1;
- (id)imageForColor:(id)arg1;
- (id)imageForColor:(id)arg1 size:(struct CGSize)arg2;

@end

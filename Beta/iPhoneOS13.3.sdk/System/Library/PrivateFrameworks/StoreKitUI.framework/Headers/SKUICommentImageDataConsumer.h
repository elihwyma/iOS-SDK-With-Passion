/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIStyledImageDataConsumer.h>

__attribute__((visibility("hidden")))
@interface SKUICommentImageDataConsumer : SKUIStyledImageDataConsumer

{
    CDUnknownBlockType _completionBlock;
}

@property (copy) CDUnknownBlockType completionBlock;

- (id)imageForImage:(id)arg1;
- (id)_scaledImageWithBounds:(struct CGSize)arg1 contentRect:(struct CGRect)arg2 drawBlock:(CDUnknownBlockType)arg3;

@end

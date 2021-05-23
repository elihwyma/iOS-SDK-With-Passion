/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIStyledImageDataConsumer.h>

@interface SKUIScreenshotDataConsumer : SKUIStyledImageDataConsumer

{
    _Bool _forcesPortrait;
}

@property (nonatomic) _Bool forcesPortrait;

+ (id)consumer;
+ (id)consumerWithScreenshotSize:(struct CGSize)arg1;

- (id)imageForImage:(id)arg1;
- (id)imageForColor:(id)arg1 size:(struct CGSize)arg2;

@end

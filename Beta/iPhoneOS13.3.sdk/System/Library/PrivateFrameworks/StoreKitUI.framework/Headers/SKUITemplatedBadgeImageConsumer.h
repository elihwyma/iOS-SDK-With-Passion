/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIImageDataConsumer.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface SKUITemplatedBadgeImageConsumer : SKUIImageDataConsumer

{
    UIColor *_templateColor;
}

@property (retain, nonatomic) UIColor *templateColor;

- (id)objectForData:(id)arg1 response:(id)arg2 error:(id *)arg3;

@end

/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIImageDataConsumer.h>

@class SKUIColorScheme, UIColor;

__attribute__((visibility("hidden")))
@interface SKUIVideoImageDataConsumer : SKUIImageDataConsumer

{
    unsigned long long _allowedOrientations;
    UIColor *_backgroundColor;
    SKUIColorScheme *_colorScheme;
    struct CGSize _landscapeSize;
    struct CGSize _portraitSize;
}

@property (nonatomic) unsigned long long allowedOrientations;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (nonatomic) struct CGSize landscapeSize;
@property (nonatomic) struct CGSize portraitSize;

- (id)imageForColor:(id)arg1 orientation:(unsigned long long)arg2;
- (id)imageForImage:(id)arg1;

@end

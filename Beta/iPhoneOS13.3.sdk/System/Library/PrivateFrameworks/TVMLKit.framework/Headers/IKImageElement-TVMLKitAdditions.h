/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <ITMLKit/IKImageElement.h>

@class TVImageProxy, UIImage;

@interface IKImageElement (TVMLKitAdditions)

@property (nonatomic, readonly) _Bool tv_isResource;
@property (nonatomic, readonly) UIImage *tv_resourceImage;
@property (nonatomic, readonly) TVImageProxy *tv_imageProxy;
@property (nonatomic, readonly) struct CGSize tv_imageScaleToSize;
@property (nonatomic, readonly) long long tv_imageType;

- (id)tv_imageProxyWithLayout:(id)arg1;
- (id)tv_associatedViewElement;
- (id)tv_urlWithLayout:(id)arg1;
- (id)tv_urlWithSize:(struct CGSize)arg1 focusSizeIncrease:(double)arg2 centerGrowth:(_Bool)arg3 cropCode:(id)arg4;
- (id)tv_urlWithSize:(struct CGSize)arg1 focusSizeIncrease:(double)arg2;

@end

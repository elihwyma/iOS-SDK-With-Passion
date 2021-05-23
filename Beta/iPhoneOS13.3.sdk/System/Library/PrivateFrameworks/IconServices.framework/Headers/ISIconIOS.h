/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <IconServices/ISIcon.h>

@class LSResourceProxy, NSArray;

__attribute__((visibility("hidden")))
@interface ISIconIOS : ISIcon

{
    NSArray *_decorations;
    LSResourceProxy *_resourceProxy;
}

@property (retain) LSResourceProxy *resourceProxy;
@property (copy, nonatomic) NSArray *decorations;

+ (id)backgroundQueue;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithURL:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithType:(id)arg1;
- (double)_aspectRatio;
- (id)imageForImageDescriptor:(id)arg1;
- (id)initWithResourceProxy:(id)arg1;
- (id)imageForDescriptor:(id)arg1;
- (void)prepareImagesForImageDescriptors:(id)arg1;
- (struct CGImage *)CGImageForImageDescriptor:(id)arg1;
- (void)getImageForImageDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_initTransparent;
- (void)getCGImageForImageDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareImagesForDescriptors:(id)arg1;
- (id)initWithResourceProxy:(id)arg1 decorations:(id)arg2;
- (_Bool)isEqualToIcon:(id)arg1;
- (int)variantForSize:(struct CGSize)arg1 scale:(double)arg2 options:(unsigned long long)arg3;
- (id)_prepareImageForImageDescriptor:(id)arg1;
- (void)_prepareImageForSymbolImageDescriptor:(id)arg1;
- (id)_imageForSymbolImageDescriptor:(id)arg1;

@end

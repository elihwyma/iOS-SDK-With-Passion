/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <IconServices/ISIcon.h>

@class ISImageCache;

__attribute__((visibility("hidden")))
@interface ISGenericIconIOS : ISIcon

{
    ISImageCache *_imageCache;
}

@property (retain) ISImageCache *imageCache;

- (id)_init;
- (id)imageForImageDescriptor:(id)arg1;
- (void)prepareImagesForImageDescriptors:(id)arg1;
- (struct CGImage *)CGImageForImageDescriptor:(id)arg1;
- (void)getImageForImageDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getCGImageForImageDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_prepareImageForImageDescriptor:(id)arg1;

@end

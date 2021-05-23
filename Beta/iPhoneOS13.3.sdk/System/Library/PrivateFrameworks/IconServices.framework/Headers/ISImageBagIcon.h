/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <IconServices/ISIcon.h>

@class ISImageCache, NSArray;

__attribute__((visibility("hidden")))
@interface ISImageBagIcon : ISIcon

{
    NSArray *_images;
    NSArray *_decorations;
    ISImageCache *_imageCache;
}

@property (retain) ISImageCache *imageCache;
@property (readonly) NSArray *images;

- (id)decorations;
- (id)imageForImageDescriptor:(id)arg1;
- (id)initWithImages:(id)arg1;
- (void)prepareImagesForImageDescriptors:(id)arg1;
- (struct CGImage *)CGImageForImageDescriptor:(id)arg1;
- (void)getImageForImageDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithImages:(id)arg1 decorations:(id)arg2;
- (void)getCGImageForImageDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

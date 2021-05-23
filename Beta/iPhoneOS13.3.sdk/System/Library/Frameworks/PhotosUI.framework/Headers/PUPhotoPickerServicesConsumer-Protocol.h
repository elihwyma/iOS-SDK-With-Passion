/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/Swift-Protocol.h>

@protocol PUPhotoPicker;

@protocol PUPhotoPickerServicesConsumer <Swift>

@property (weak, nonatomic) id <PUPhotoPicker> photoPicker;

- (unsigned short)setPhotoPickerMediaTypes: /* Error: Ran out of types for this method. */;

@end

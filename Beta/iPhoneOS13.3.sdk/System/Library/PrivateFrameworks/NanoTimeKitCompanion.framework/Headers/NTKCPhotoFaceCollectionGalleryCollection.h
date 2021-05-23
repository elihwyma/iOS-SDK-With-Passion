/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCFaceCollectionGalleryCollection.h>

@class CLKDevice, NSString;

@interface NTKCPhotoFaceCollectionGalleryCollection : NTKCFaceCollectionGalleryCollection

{
    CLKDevice *_device;
    NSString *_albumName;
}

- (void)dealloc;
- (id)initForDevice:(id)arg1;
- (id)newFace;
- (void)photoAlbumChanged:(id)arg1;

@end

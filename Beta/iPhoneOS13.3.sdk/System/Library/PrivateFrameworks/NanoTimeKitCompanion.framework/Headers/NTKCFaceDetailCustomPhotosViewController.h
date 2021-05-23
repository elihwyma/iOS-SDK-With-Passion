/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCNavigationController.h>

@class NSString, NTKCompanionCustomPhotosEditor, NTKFace, _NTKCFaceDetailCustomPhotosViewController;

@protocol NTKCFaceDetailCustomPhotosViewControllerDelegate;

@interface NTKCFaceDetailCustomPhotosViewController : NTKCNavigationController

{
    _NTKCFaceDetailCustomPhotosViewController *_implementationVC;
    NTKFace *_face;
    NTKCompanionCustomPhotosEditor *_editor;
}

@property (retain, nonatomic) NTKCompanionCustomPhotosEditor *editor;
@property (retain, nonatomic) NTKFace *face;
@property (nonatomic, readonly) _Bool inGallery;
@property (weak, nonatomic) id <NTKCFaceDetailCustomPhotosViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithPhotosEditor:(id)arg1 forFace:(id)arg2 inGallery:(_Bool)arg3 faceView:(id)arg4 externalImagesSet:(_Bool)arg5;
- (void)customPhotosControllerDidFinish:(id)arg1;

@end

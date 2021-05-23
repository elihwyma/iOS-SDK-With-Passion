/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@interface EspressoFaceLandmarkDetector : NSObject

{
    struct vImage_Buffer crop_scaled;
    struct vImage_Buffer crop_192;
    shared_ptr_d082c67d net;
    shared_ptr_d082c67d net_detect;
    struct vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net>>> nets_sub_landmark;
    struct CGRect _newface;
}

@property struct CGRect newface;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (vector_72a15614)detect:(struct vImage_Buffer)arg1 face:(struct CGRect)arg2 sublandmark:(_Bool)arg3 doFaceRectFix:(_Bool)arg4;
- (id)initWithNetworkAtPath:(id)arg1 contextObjC:(id)arg2 platform:(int)arg3 computePath:(int)arg4;
- (vector_72a15614)extractSubLandmarksFromCrop192:(struct vImage_Buffer)arg1 centers192:(vector_72a15614 *)arg2;
- (vector_72a15614)detectInImageRect:(struct vImage_Buffer)arg1 face:(struct CGRect)arg2 sublandmark:(_Bool)arg3;
- (id)initWithNetworkAtPath:(id)arg1 context:(shared_ptr_ae8b808b)arg2 platform:(int)arg3 computePath:(int)arg4;
- (void)commonInit:(id)arg1 context:(shared_ptr_ae8b808b)arg2 platform:(int)arg3 computePath:(int)arg4;

@end

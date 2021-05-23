/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <VectorKit/VKLabelNavTrafficFeature.h>

@class VKTrafficCameraFeature;

__attribute__((visibility("hidden")))
@interface VKLabelNavTrafficCamera : VKLabelNavTrafficFeature

{
    VKTrafficCameraFeature *_trafficCamera;
}

@property (nonatomic, readonly) VKTrafficCameraFeature *trafficCamera;

- (void)dealloc;
- (void)swapExternalFeature:(id)arg1;
- (shared_ptr_ed5e0db7)createIcon:(struct NavContext *)arg1;
- (id)initWithTrafficCamera:(id)arg1 previousMercatorPoint:(const Mercator2_57ec32b6 *)arg2 nextMercatorPoint:(const Mercator2_57ec32b6 *)arg3;

@end

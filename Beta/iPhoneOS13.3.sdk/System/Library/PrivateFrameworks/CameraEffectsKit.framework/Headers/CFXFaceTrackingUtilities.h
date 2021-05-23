/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@interface CFXFaceTrackingUtilities : NSObject

+ (struct CGSize)faceRectScaleFactorForInterfaceOrientation:(long long)arg1 andDeviceInterfaceOrientation:(long long)arg2;
+ (_Bool)isFaceAnchorInRange:(id)arg1;
+ (struct CGSize)renderSizeForBufferSize:(struct CGSize)arg1 orientation:(long long)arg2;
+ (CDStruct_8e0628e6)adjustIntrinsics:(CDStruct_8e0628e6)arg1 forRenderSize:(struct CGSize)arg2 capturedSize:(struct CGSize)arg3 interfaceOrientation:(long long)arg4;
+ (struct CGSize)planeSizeInModelSpaceWithFaceAnchor:(id)arg1 bufferSize:(struct CGSize)arg2;
+ (struct SCNVector3)pointOnFaceMesh;
+ (_Bool)inputBufferIsLandscapeAspect:(struct CGSize)arg1;
+ (CDStruct_14d5dc5e)CFX_projectionMatrixWithFaceAnchor:(id)arg1 bufferSize:(struct CGSize)arg2;
+ (struct SCNVector3)CFX_modelPointFromCompositionPoint:(struct CGPoint)arg1 withFaceAnchor:(id)arg2 bufferSize:(struct CGSize)arg3;
+ (struct SCNVector3)CFX_screenPointFromModelPoint:(struct SCNVector3)arg1 withFaceAnchor:(id)arg2 locatedOnFace:(_Bool)arg3 bufferSize:(struct CGSize)arg4;
+ (double)maxCameraToFaceDistance;
+ (struct CGPoint)compositionPointFromScreenPoint:(struct CGPoint)arg1 locatedOnFace:(_Bool)arg2 withFaceAnchor:(id)arg3 bufferSize:(struct CGSize)arg4;
+ (struct CGPoint)screenPointFromCompositionPoint:(struct CGPoint)arg1 locatedOnFace:(_Bool)arg2 withFaceAnchor:(id)arg3 bufferSize:(struct CGSize)arg4;
+ (struct CGRect)screenRectOfFaceWithFaceAnchor:(id)arg1 bufferSize:(struct CGSize)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

#import <Foundation/NSObject.h>

@interface PVFaceCropAnalyzer : NSObject

+ (id)faceFromFaceCrop:(id)arg1 visionIntegration:(id)arg2 faceAlgorithmUmbrellaVersion:(unsigned int)arg3 createFaceTorsoprint:(_Bool)arg4 error:(id *)arg5;
+ (id)bestFaceForFaceDetectionRequest:(id)arg1 withRect:(struct CGRect)arg2;

@end

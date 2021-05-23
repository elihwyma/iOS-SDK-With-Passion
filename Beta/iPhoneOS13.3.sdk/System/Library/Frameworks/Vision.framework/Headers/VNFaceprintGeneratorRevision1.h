/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Vision/VNFaceprintGenerator.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface VNFaceprintGeneratorRevision1 : VNFaceprintGenerator

+ (unsigned int)pixelFormat;
+ (id)modelPath;
+ (int)clusteringConfidence;
+ (unsigned long long)numberOfChannels;
+ (int)imageType;
+ (CDUnknownFunctionPointerType)faceDescriptorCreator;
+ (struct CGRect)faceBoundingBox:(id)arg1;
+ (struct __CVBuffer *)cropFaceBoundingBoxFrom:(id)arg1 cropBounds:(struct CGRect)arg2 error:(id *)arg3;
+ (MISSING_TYPE *)frontalizer;
+ (CDUnknownFunctionPointerType)getFaceJunkClassifier;
+ (float)magnifiedBBoxScaleFactor;

@end

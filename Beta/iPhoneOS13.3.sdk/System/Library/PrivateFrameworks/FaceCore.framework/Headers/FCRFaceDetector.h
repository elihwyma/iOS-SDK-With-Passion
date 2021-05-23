/*
 Image: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
 */

#import <Foundation/NSObject.h>

@interface FCRFaceDetector : NSObject

{
    void *api;
    NSObject *lock;
}

+ (id)faceDetectorWithOptions:(id)arg1;
+ (id)faceDetector;
+ (id)fastFaceDetector;
+ (int)findProfileInParameters:(id)arg1;
+ (id)preciseFaceDetector;
+ (id)standardTrackingDetector;
+ (id)keypointTrackingDetector;

- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (id)version;
- (id)detectFacesInData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 options:(id)arg5 error:(id *)arg6;
- (id)extractDetailsForFaces:(id)arg1 inData:(id)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5 options:(id)arg6 error:(id *)arg7;
- (id)detectFacesInCGImage:(struct CGImage *)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithProfile:(int)arg1 parameters:(id)arg2;
- (void)createFaceCoreLightApiWithProfile:(int)arg1 parameters:(id)arg2;
- (id)detectFacesInImage:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (void)setParam:(id)arg1 toValue:(id)arg2 withDefaultValue:(id)arg3 usingApi:(struct FaceCoreAPI *)arg4;
- (id)parseRegionOfInterestParam:(id)arg1;
- (id)convertRectsToString:(id)arg1;
- (void)updateDetectionParamsValues:(id)arg1 image:(id)arg2;
- (id)createFCRFace:(struct face *)arg1 image:(id)arg2;
- (id)createFCRImage:(struct CGImage *)arg1;
- (id)extractDetailsForFaces:(id)arg1 inImage:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void)updateExtractionParamsValues:(id)arg1;
- (struct image)createImage:(id)arg1;
- (struct face)createFace:(id)arg1 image:(id)arg2;
- (void)updateFCRFace:(id)arg1 from:(struct face *)arg2 image:(id)arg3;
- (struct coord)makeYFlippedCoordFromPoint:(struct CGPoint)arg1 image:(id)arg2;
- (float)interpretAsFloat:(id)arg1 withDefault:(float)arg2;
- (struct CGPoint)makeYFlippedPointFromCoord:(struct coord *)arg1 image:(id)arg2;
- (struct CGRect)makeYFlippedRectFromRect:(struct CGRect)arg1 image:(id)arg2;
- (void)addLandmarkOfType:(id)arg1 fromMesh:(vector_88fc712c *)arg2 indexes:(id)arg3 to:(id)arg4 image:(id)arg5;
- (id)parseOption:(id)arg1 value:(id)arg2;
- (id)parseNumericOrBoolValue:(id)arg1;
- (id)transformROIs:(id)arg1 image:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)extractDetailsForFaces:(id)arg1 inCGImage:(struct CGImage *)arg2 options:(id)arg3 error:(id *)arg4;
- (float)compareFace:(id)arg1 toFace:(id)arg2 error:(id *)arg3;

@end

/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class FigUtlROIProcessor, NSArray, VNImageRequestHandler;

__attribute__((visibility("hidden")))
@interface FigUtlFaceDetection : NSObject

{
    VNImageRequestHandler *_requestHandler;
    NSArray *_faces;
    unsigned int _pixelFormat;
    float _landmarksModelFraction;
    FigUtlROIProcessor *_roi;
}

@property (nonatomic, readonly) FigUtlROIProcessor *roi;
@property (readonly) _Bool isBlinking;
@property (readonly) float blink;
@property (readonly) int landmarkCount;

+ (id)createFaceLandmarksRequest:(float)arg1;
+ (_Bool)prewarmBoxAlignmentAndLandmarksDetectorUsingFractionOfLandmarksModelFile:(float)arg1;
+ (void)deallocateResources;

- (_Bool)start;
- (void)end;
- (id)initWithMaxImageWidth:(int)arg1 height:(int)arg2 pixelFormat:(unsigned int)arg3 landmarksModelFraction:(float)arg4;
- (_Bool)computeQuality:(struct __CVBuffer *)arg1 orientation:(int)arg2 rectangle:(struct CGRect)arg3 quality:(float *)arg4 alignedRectangle:(struct CGRect *)arg5;
- (_Bool)computeLandmarks;
- (struct CGPoint)landmark:(int)arg1;

@end

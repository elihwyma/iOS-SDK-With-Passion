/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderJob.h>

@class NSArray, NUFaceDetectionRequest;

@interface NUFaceDetectionJob : NURenderJob

{
    NSArray *_faces;
    CDStruct_d58201db _imageSize;
}

@property (readonly) NUFaceDetectionRequest *faceDetectionRequest;

- (id)result;
- (id)cacheKey;
- (_Bool)render:(out id *)arg1;
- (id)initWithRequest:(id)arg1;
- (void)cleanUp;
- (_Bool)wantsCompleteStage;
- (_Bool)wantsOutputGeometry;
- (_Bool)wantsOutputImage;
- (id)scalePolicy;
- (id)initWithFaceDetectionRequest:(id)arg1;
- (id)detectFaceRectsInBuffer:(struct __CVBuffer *)arg1 maxResultCount:(unsigned long long)arg2 error:(out id *)arg3;
- (id)detectFaceLandmarksInBuffer:(struct __CVBuffer *)arg1 withFaceRects:(id)arg2 error:(out id *)arg3;

@end

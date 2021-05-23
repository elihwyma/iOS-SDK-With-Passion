/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/NUAutoCalculator.h>

@class NUFaceDetectionRequest;

@interface PIApertureRedEyeAutoCalculator : NUAutoCalculator

{
    NUFaceDetectionRequest *_faceRequest;
}

- (void)cancel;
- (void)submit:(CDUnknownBlockType)arg1;
- (id)apertureRedEyeResultFromFaceObservations:(id)arg1 imageSize:(CDStruct_912cb5d2)arg2;

@end

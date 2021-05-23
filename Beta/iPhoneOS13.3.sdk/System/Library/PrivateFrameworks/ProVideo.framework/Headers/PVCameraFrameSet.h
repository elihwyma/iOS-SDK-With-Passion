/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class AVDepthData, NSDictionary, PVImageBuffer;

@interface PVCameraFrameSet : NSObject

{
    long long deviceOrientation;
    long long _cameraPosition;
    struct opaqueCMSampleBuffer *_colorSampleBuffer;
    AVDepthData *_depthData;
    NSDictionary *_metadata;
    PVImageBuffer *_alphaMaskImageBuffer;
    double _rollRadians;
    CDStruct_91d2e2b9 orientation;
    struct CGAffineTransform _colorTransform;
    struct CGAffineTransform _depthTransform;
}

@property (nonatomic) struct CGAffineTransform colorTransform;
@property (nonatomic) struct CGAffineTransform depthTransform;
@property (nonatomic) long long cameraPosition;
@property (nonatomic, readonly) struct opaqueCMSampleBuffer *colorSampleBuffer;
@property (nonatomic, readonly) CDStruct_1b6d18a9 presentationTimeStamp;
@property (nonatomic, readonly) PVImageBuffer *colorImageBuffer;
@property (nonatomic, readonly) AVDepthData *depthData;
@property (retain) NSDictionary *metadata;
@property (retain) PVImageBuffer *alphaMaskImageBuffer;
@property (nonatomic) CDStruct_91d2e2b9 orientation;
@property (nonatomic) double rollRadians;
@property (nonatomic) long long deviceOrientation;

- (void)dealloc;
- (id)initWithColorBuffer:(struct opaqueCMSampleBuffer *)arg1 depthData:(id)arg2 metadata:(id)arg3;
- (id)initWithColorBuffer:(struct opaqueCMSampleBuffer *)arg1 metadata:(id)arg2;
- (void)_sharedInitColorBuffer:(struct opaqueCMSampleBuffer *)arg1 colorTransform:(struct CGAffineTransform)arg2 depthData:(id)arg3 depthTransform:(struct CGAffineTransform)arg4 metadata:(id)arg5;

@end

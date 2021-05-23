/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class ARFaceData, AVDepthData, MISSING_TYPE, NSDate, NSString;

@interface ARImageData : NSObject <Swift>

{
    _Bool _mirrored;
    _Bool _secondary;
    float _exposureTargetOffset;
    float _temperature;
    float _signalToNoiseRatio;
    float _ISO;
    double _timestamp;
    NSDate *_captureDate;
    double _currentCaptureTimestamp;
    struct __CVBuffer *_pixelBuffer;
    unsigned long long _lensType;
    double _exposureDuration;
    long long _deviceOrientation;
    ARFaceData *_faceData;
    AVDepthData *_depthData;
    double _depthDataTimestamp;
    struct __CVBuffer *_visionData;
    long long _cameraPosition;
    NSString *_cameraType;
    long long _captureFramesPerSecond;
    struct CGSize _imageResolution;
    MISSING_TYPE *_tangentialDistortion;
    MISSING_TYPE *_radialDistortion;
    CDStruct_8e0628e6 _cameraIntrinsics;
}

@property (nonatomic) double timestamp;
@property (copy, nonatomic) NSDate *captureDate;
@property (nonatomic) double currentCaptureTimestamp;
@property (nonatomic) CDStruct_8e0628e6 cameraIntrinsics;
@property (nonatomic) struct __CVBuffer *pixelBuffer;
@property (nonatomic, getter=isMirrored) _Bool mirrored;
@property (nonatomic) struct CGSize imageResolution;
@property (nonatomic) unsigned long long lensType;
@property (nonatomic) MISSING_TYPE *radialDistortion;
@property (nonatomic) MISSING_TYPE *tangentialDistortion;
@property (nonatomic) double exposureDuration;
@property (nonatomic) float exposureTargetOffset;
@property (nonatomic) float temperature;
@property (nonatomic) float signalToNoiseRatio;
@property (nonatomic) float ISO;
@property (nonatomic) long long deviceOrientation;
@property (retain, nonatomic) ARFaceData *faceData;
@property (retain, nonatomic) AVDepthData *depthData;
@property (nonatomic) double depthDataTimestamp;
@property (nonatomic) struct __CVBuffer *visionData;
@property (nonatomic) long long cameraPosition;
@property (retain, nonatomic) NSString *cameraType;
@property (nonatomic) long long captureFramesPerSecond;
@property (nonatomic, readonly) ARImageData *originalImage;
@property (nonatomic, getter=isSecondary) _Bool secondary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)captureDateFromPresentationTimestamp:(CDStruct_1b6d18a9)arg1 session:(id)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithImageData:(id)arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 captureFramePerSecond:(long long)arg2 captureDevice:(id)arg3 captureSession:(id)arg4 timestamp:(CDStruct_1b6d18a9)arg5 intrinsics:(CDStruct_8e0628e6)arg6 exif:(id)arg7;
- (_Bool)matchesPixelBufferPointerRecursively:(void *)arg1;
- (id)encodeToDictionary;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 captureFramePerSecond:(long long)arg2 captureDevice:(id)arg3 captureSession:(id)arg4;

@end

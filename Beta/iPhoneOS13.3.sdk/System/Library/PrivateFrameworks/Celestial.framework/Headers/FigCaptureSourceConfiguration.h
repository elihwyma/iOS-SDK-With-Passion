/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

#import <Celestial/Swift-Protocol.h>

@class FigCaptureSourceDepthDataFormat, FigCaptureSourceVideoFormat, NSDictionary, NSString;

@interface FigCaptureSourceConfiguration : NSObject <Swift>

{
    NSString *_sourceID;
    struct OpaqueFigCaptureSource *_source;
    int _sourceType;
    NSDictionary *_sourceAttributes;
    FigCaptureSourceVideoFormat *_requiredFormat;
    float _requiredMaxFrameRate;
    float _requiredMinFrameRate;
    float _maxFrameRateClientOverride;
    float _maxGainClientOverride;
    _Bool _hasSetVideoZoomFactorOnCaptureSource;
    float _videoZoomFactor;
    float _videoZoomRampAcceleration;
    int _imageControlMode;
    _Bool _applyMaxExposureDurationFrameworkOverrideWhenAvailable;
    CDStruct_1b6d18a9 _maxExposureDurationClientOverride;
    NSDictionary *_faceDetectionConfiguration;
    _Bool _sensorHDREnabled;
    _Bool _highlightRecoveryEnabled;
    int _colorSpace;
    _Bool _depthDataDeliveryEnabled;
    FigCaptureSourceDepthDataFormat *_depthDataFormat;
    float _depthDataMaxFrameRate;
    _Bool _lowLightVideoCaptureEnabled;
    _Bool _spatialOverCaptureEnabled;
    _Bool _nonDestructiveCropEnabled;
    _Bool _geometricDistortionCorrectionEnabled;
}

@property (readonly) _Bool smartCameraEnabled;
@property (readonly) _Bool bravoShiftMitigationEnabled;
@property (copy, nonatomic) NSString *sourceID;
@property (nonatomic, readonly) struct OpaqueFigCaptureSource *source;
@property (retain, nonatomic) FigCaptureSourceVideoFormat *requiredFormat;
@property (nonatomic) float requiredMaxFrameRate;
@property (nonatomic) float requiredMinFrameRate;
@property (nonatomic) float maxFrameRateClientOverride;
@property (nonatomic) float maxGainClientOverride;
@property (nonatomic) _Bool hasSetVideoZoomFactorOnCaptureSource;
@property (nonatomic) float videoZoomFactor;
@property (nonatomic) float videoZoomRampAcceleration;
@property (copy, nonatomic) NSDictionary *faceDetectionConfiguration;
@property (nonatomic, readonly) int sourcePosition;
@property (nonatomic, readonly) int sourceType;
@property (nonatomic, readonly) int sourceDeviceType;
@property (nonatomic) int imageControlMode;
@property (nonatomic) _Bool applyMaxExposureDurationFrameworkOverrideWhenAvailable;
@property (nonatomic) CDStruct_1b6d18a9 maxExposureDurationClientOverride;
@property (nonatomic) _Bool sensorHDREnabled;
@property (nonatomic) _Bool highlightRecoveryEnabled;
@property (nonatomic) int colorSpace;
@property (nonatomic) _Bool depthDataDeliveryEnabled;
@property (nonatomic) float depthDataMaxFrameRate;
@property (retain, nonatomic) FigCaptureSourceDepthDataFormat *depthDataFormat;
@property (nonatomic) _Bool lowLightVideoCaptureEnabled;
@property (nonatomic) _Bool spatialOverCaptureEnabled;
@property (nonatomic) _Bool nonDestructiveCropEnabled;
@property (nonatomic) _Bool geometricDistortionCorrectionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)stringForSourceDeviceType:(int)arg1;
+ (id)stringForSourcePosition:(int)arg1;
+ (id)stringForSourceType:(int)arg1;
+ (int)sourceTypeForString:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSource:(struct OpaqueFigCaptureSource *)arg1;
- (id)initWithSourceType:(int)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (_Bool)_isCameraSource;
- (int)_sourceToken;
- (_Bool)_isMicSource;
- (id)_sourceUID;
- (id)_sourceAttributes;

@end

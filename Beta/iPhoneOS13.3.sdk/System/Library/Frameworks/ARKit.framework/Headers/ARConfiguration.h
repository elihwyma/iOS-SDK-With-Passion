/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class ARImageSensorSettings, ARParentImageSensorSettings, ARVideoFormat, NSArray, NSString;

@protocol ARReplaySensorProtocol;

@interface ARConfiguration : NSObject <Swift>

{
    ARVideoFormat *_videoFormat;
    _Bool _providesAudioData;
    _Bool _autoFocusEnabled;
    _Bool _allowCameraInMultipleForegroundAppLayout;
    _Bool _mirroredFrameOutput;
    long long _worldAlignment;
    unsigned long long _frameSemantics;
    NSArray *_customSensors;
    unsigned long long _lightEstimation;
    unsigned long long _frameDebugOptions;
    long long _cameraPosition;
}

@property (nonatomic, getter=isAutoFocusEnabled) _Bool autoFocusEnabled;
@property (nonatomic, readonly) NSString *deviceModel;
@property (nonatomic, readonly) ARParentImageSensorSettings *parentImageSensorSettings;
@property (nonatomic, readonly) ARImageSensorSettings *imageSensorSettings;
@property (retain, nonatomic) NSArray *customSensors;
@property (nonatomic) unsigned long long lightEstimation;
@property (nonatomic) unsigned long long frameDebugOptions;
@property (nonatomic) long long cameraPosition;
@property (nonatomic) _Bool allowCameraInMultipleForegroundAppLayout;
@property (nonatomic) _Bool mirroredFrameOutput;
@property (nonatomic, readonly) id <ARReplaySensorProtocol> replaySensor;
@property (retain, nonatomic) ARVideoFormat *videoFormat;
@property (nonatomic) long long worldAlignment;
@property (nonatomic, getter=isLightEstimationEnabled) _Bool lightEstimationEnabled;
@property (nonatomic) _Bool providesAudioData;
@property (nonatomic) unsigned long long frameSemantics;

+ (_Bool)isSupported;
+ (_Bool)supportsFrameSemantics:(unsigned long long)arg1;
+ (id)supportedVideoFormats;
+ (id)recordingConfigurationWithConfiguration:(id)arg1 recordingTechnique:(id *)arg2 fileURL:(id)arg3;
+ (id)recordingConfigurationWithConfiguration:(id)arg1 recordingTechnique:(id *)arg2;
+ (id)replayConfigurationWithConfiguration:(id)arg1 replaySensor:(id)arg2 replayingResultDataClasses:(id)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initPrivate;
- (void)createTechniquesWithParallelTechniques:(id)arg1 serialTechniques:(id)arg2;
- (id)secondaryTechniques;
- (id)renderingTechnique;
- (id)techniques;
- (id)descriptionWithoutBrackets;
- (_Bool)isKindOfConfiguration:(Class)arg1;

@end

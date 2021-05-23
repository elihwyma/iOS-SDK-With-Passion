/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSDictionary;

@interface BWCameraParameters : NSObject

{
    NSDictionary *_cameraParameters;
    NSDictionary *_motionAttachmentsParameters;
    NSDictionary *_videoStabilizationParameters;
    NSDictionary *_stereoDisparityParameters;
}

@property (nonatomic, readonly) NSDictionary *cameraParameters;
@property (nonatomic, readonly) NSDictionary *cameraTuningParameters;
@property (nonatomic, readonly) NSDictionary *motionAttachmentsParameters;
@property (nonatomic, readonly) NSDictionary *videoStabilizationParameters;
@property (nonatomic, readonly) NSDictionary *stereoDisparityParameters;

+ (void)initialize;
+ (id)sharedInstance;
+ (id)sensorIDStringFromModuleInfo:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)panoramaRequiresLTMLockingForPortType:(id)arg1 sensorIDString:(id)arg2;
- (_Bool)disparityRequiresRawInputData;
- (id)_initWithModelSpecificName:(id)arg1;
- (id)sensorIDDictionaryForPortType:(id)arg1 sensorIDString:(id)arg2;
- (id)sensorIDDictionaryForStream:(struct OpaqueFigCaptureStream *)arg1;
- (int)disparityVersion;
- (id)portraitSceneMonitoringParametersForPortType:(id)arg1 sensorIDString:(id)arg2;
- (id)focalLengthCharacterizationForStream:(struct OpaqueFigCaptureStream *)arg1;
- (int)disparityVersionForPortType:(id)arg1 sensorIDString:(id)arg2;
- (int)mattingVersionForPortType:(id)arg1 sensorIDString:(id)arg2;
- (int)portraitSceneMonitorVersionForPortType:(id)arg1 sensorIDString:(id)arg2;
- (_Bool)disparityRefinementEnabledForPortType:(id)arg1 sensorIDString:(id)arg2;
- (_Bool)chromaticDefringingEnabledForVideoForPortType:(id)arg1 sensorIDString:(id)arg2;
- (_Bool)chromaticDefringingEnabledForSlomoForPortType:(id)arg1 sensorIDString:(id)arg2;
- (id)chromaticDefringingParametersForPortType:(id)arg1 sensorIDString:(id)arg2;
- (double)overCaptureGatingEffectiveIntegrationTimeThresholdForPortType:(id)arg1 sensorIDString:(id)arg2;

@end

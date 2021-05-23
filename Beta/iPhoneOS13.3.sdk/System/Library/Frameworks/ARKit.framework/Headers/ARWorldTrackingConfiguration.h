/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARConfiguration.h>

@class ARImageSensorSettings, ARWorldMap, NSSet, NSString;

@interface ARWorldTrackingConfiguration : ARConfiguration

{
    _Bool _wantsHDREnvironmentTextures;
    _Bool _automaticImageScaleEstimationEnabled;
    _Bool _collaborationEnabled;
    _Bool _userFaceTrackingEnabled;
    _Bool _relocalizationEnabled;
    _Bool _mlModelEnabled;
    _Bool _deliverRawSceneUnderstandingResults;
    _Bool _skeletonDetectionEnabled;
    _Bool _shouldUseSuperWideIfAvailable;
    long long _environmentTexturing;
    unsigned long long _planeDetection;
    ARWorldMap *_initialWorldMap;
    NSSet *_detectionImages;
    long long _maximumNumberOfTrackedImages;
    NSSet *_detectionObjects;
    NSString *_slamConfiguration;
    double _minVergenceAngle;
}

@property (nonatomic) _Bool relocalizationEnabled;
@property (copy, nonatomic) NSString *slamConfiguration;
@property (nonatomic) double minVergenceAngle;
@property (nonatomic, getter=isMLModelEnabled) _Bool mlModelEnabled;
@property (nonatomic) _Bool deliverRawSceneUnderstandingResults;
@property (nonatomic, getter=isSkeletonDetectionEnabled) _Bool skeletonDetectionEnabled;
@property (nonatomic) _Bool shouldUseSuperWideIfAvailable;
@property (nonatomic, readonly) ARImageSensorSettings *imageSensorSettingsForSuperWide;
@property (nonatomic, getter=isAutoFocusEnabled) _Bool autoFocusEnabled;
@property (nonatomic) long long environmentTexturing;
@property (nonatomic) _Bool wantsHDREnvironmentTextures;
@property (nonatomic) unsigned long long planeDetection;
@property (retain, nonatomic) ARWorldMap *initialWorldMap;
@property (copy, nonatomic) NSSet *detectionImages;
@property (nonatomic) _Bool automaticImageScaleEstimationEnabled;
@property (nonatomic) long long maximumNumberOfTrackedImages;
@property (copy, nonatomic) NSSet *detectionObjects;
@property (nonatomic, getter=isCollaborationEnabled) _Bool collaborationEnabled;
@property (nonatomic, getter=userFaceTrackingEnabled) _Bool userFaceTrackingEnabled;

+ (id)new;
+ (_Bool)isSupported;
+ (_Bool)supportsFrameSemantics:(unsigned long long)arg1;
+ (id)supportedVideoFormats;
+ (_Bool)supportsUserFaceTracking;
+ (id)supportedVideoFormatsForUserFaceTracking;
+ (id)supportedVideoFormatsForSuperWide;
+ (_Bool)supportsFrontCameraFaceAnchors;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)createTechniquesWithParallelTechniques:(id)arg1 serialTechniques:(id)arg2;
- (id)parentImageSensorSettings;
- (id)imageSensorSettings;
- (id)secondaryTechniques;
- (_Bool)shouldUseSuperWide;
- (id)imageSensorSettingsForUserFaceTracking;
- (_Bool)shouldEnableVisionDataForImageSensorSettings:(id)arg1;
- (id)_trackingOptions;
- (void)setFrontCameraFaceAnchorsEnabled:(_Bool)arg1;

@end

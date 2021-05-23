/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARConfiguration.h>

@class ARImageSensorSettings, ARWorldMap, NSSet;

@interface ARBodyTrackingConfiguration : ARConfiguration

{
    _Bool _wantsHDREnvironmentTextures;
    _Bool _automaticImageScaleEstimationEnabled;
    _Bool _automaticSkeletonScaleEstimationEnabled;
    ARWorldMap *_initialWorldMap;
    long long _environmentTexturing;
    unsigned long long _planeDetection;
    NSSet *_detectionImages;
    long long _maximumNumberOfTrackedImages;
}

@property (nonatomic, readonly) ARImageSensorSettings *imageSensorSettingsForSuperWide;
@property (nonatomic, getter=isAutoFocusEnabled) _Bool autoFocusEnabled;
@property (retain, nonatomic) ARWorldMap *initialWorldMap;
@property (nonatomic) long long environmentTexturing;
@property (nonatomic) _Bool wantsHDREnvironmentTextures;
@property (nonatomic) unsigned long long planeDetection;
@property (copy, nonatomic) NSSet *detectionImages;
@property (nonatomic) _Bool automaticImageScaleEstimationEnabled;
@property (nonatomic) _Bool automaticSkeletonScaleEstimationEnabled;
@property (nonatomic) long long maximumNumberOfTrackedImages;

+ (id)new;
+ (_Bool)isSupported;
+ (_Bool)supportsFrameSemantics:(unsigned long long)arg1;
+ (id)supportedVideoFormats;
+ (id)supportedVideoFormatsForSuperWide;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)createTechniquesWithParallelTechniques:(id)arg1 serialTechniques:(id)arg2;
- (id)parentImageSensorSettings;
- (id)imageSensorSettings;
- (_Bool)shouldUseSuperWide;
- (_Bool)shouldEnableVisionDataForImageSensorSettings:(id)arg1;
- (id)_trackingOptions;

@end

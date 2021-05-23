/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARConfiguration.h>

@interface ARFaceTrackingConfiguration : ARConfiguration

{
    _Bool _worldTrackingEnabled;
    _Bool _lowPower;
    long long _maximumNumberOfTrackedFaces;
}

@property (nonatomic) _Bool lowPower;
@property (nonatomic) long long maximumNumberOfTrackedFaces;
@property (nonatomic, getter=isWorldTrackingEnabled) _Bool worldTrackingEnabled;

+ (id)new;
+ (_Bool)isSupported;
+ (_Bool)supportsWorldTracking;
+ (id)supportedVideoFormatsForWorldTracking;
+ (long long)supportedNumberOfTrackedFaces;
+ (_Bool)supportsFrameSemantics:(unsigned long long)arg1;
+ (id)supportedVideoFormats;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setLightEstimationEnabled:(_Bool)arg1;
- (void)setCameraPosition:(long long)arg1;
- (void)createTechniquesWithParallelTechniques:(id)arg1 serialTechniques:(id)arg2;
- (id)imageSensorSettingsForWorldTracking;
- (id)parentImageSensorSettings;
- (id)imageSensorSettingsForLowPower;
- (id)imageSensorSettings;
- (void)setMirroredFrameOutput:(_Bool)arg1;
- (id)secondaryTechniques;
- (id)renderingTechnique;

@end

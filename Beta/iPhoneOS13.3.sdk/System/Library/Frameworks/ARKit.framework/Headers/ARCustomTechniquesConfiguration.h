/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARConfiguration.h>

@class ARWorldMap, NSArray;

@interface ARCustomTechniquesConfiguration : ARConfiguration

{
    NSArray *_techniques;
    ARConfiguration *_templateConfiguration;
}

@property (copy, nonatomic) NSArray *techniques;
@property (nonatomic, readonly) ARWorldMap *initialWorldMap;
@property (copy, nonatomic) ARConfiguration *templateConfiguration;

+ (id)new;
+ (id)supportedVideoFormats;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initPrivate;
- (void)setVideoFormat:(id)arg1;
- (void)setCameraPosition:(long long)arg1;
- (long long)worldAlignment;
- (id)imageSensorSettings;
- (id)imageSensorSettingsForSuperWide;
- (void)setCustomSensors:(id)arg1;
- (_Bool)isLightEstimationEnabled;
- (void)setProvidesAudioData:(_Bool)arg1;
- (void)ensureTechniqueAndCustomSensorCompatibility;
- (void)configureRecordingTechnique;
- (void)_updateCaptureSettings;

@end

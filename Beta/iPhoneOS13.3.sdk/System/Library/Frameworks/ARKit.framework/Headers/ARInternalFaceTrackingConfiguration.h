/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARConfiguration.h>

@interface ARInternalFaceTrackingConfiguration : ARConfiguration

{
    _Bool _useAlternativeResources;
    long long _maximumNumberOfTrackedFaces;
}

@property (nonatomic) long long maximumNumberOfTrackedFaces;
@property (nonatomic) _Bool useAlternativeResources;

+ (id)new;
+ (_Bool)isSupported;
+ (id)supportedVideoFormats;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setLightEstimationEnabled:(_Bool)arg1;
- (void)setCameraPosition:(long long)arg1;
- (void)createTechniquesWithParallelTechniques:(id)arg1 serialTechniques:(id)arg2;
- (id)imageSensorSettings;
- (void)setMirroredFrameOutput:(_Bool)arg1;
- (id)renderingTechnique;

@end

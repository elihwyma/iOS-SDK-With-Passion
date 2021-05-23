/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARConfiguration.h>

@class ARWorldMap;

@interface ARPositionalTrackingConfiguration : ARConfiguration

{
    _Bool _relocalizationEnabled;
    _Bool _vioFusionEnabled;
    unsigned long long _planeDetection;
    ARWorldMap *_initialWorldMap;
}

@property (nonatomic, getter=isRelocalizationEnabled) _Bool relocalizationEnabled;
@property (nonatomic, getter=isVIOFusionEnabled) _Bool vioFusionEnabled;
@property (nonatomic) unsigned long long planeDetection;
@property (retain, nonatomic) ARWorldMap *initialWorldMap;

+ (id)new;
+ (_Bool)isSupported;
+ (id)supportedVideoFormats;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)createTechniquesWithParallelTechniques:(id)arg1 serialTechniques:(id)arg2;
- (id)imageSensorSettings;
- (id)worldTrackingOptions;

@end

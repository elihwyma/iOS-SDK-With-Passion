/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARConfiguration.h>

@interface ARObjectScanningConfiguration : ARConfiguration

{
    _Bool _mlModelEnabled;
    _Bool _deliverRawSceneUnderstandingResults;
    unsigned long long _planeDetection;
}

@property (nonatomic, getter=isMLModelEnabled) _Bool mlModelEnabled;
@property (nonatomic) _Bool deliverRawSceneUnderstandingResults;
@property (nonatomic, getter=isAutoFocusEnabled) _Bool autoFocusEnabled;
@property (nonatomic) unsigned long long planeDetection;

+ (id)new;
+ (_Bool)isSupported;
+ (_Bool)supportsFrameSemantics:(unsigned long long)arg1;
+ (id)supportedVideoFormats;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)createTechniquesWithParallelTechniques:(id)arg1 serialTechniques:(id)arg2;
- (id)imageSensorSettings;

@end

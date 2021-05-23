/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARImageBasedTechnique.h>

@class NSUUID;

@interface ARFaceTrackingTechnique : ARImageBasedTechnique

{
    NSUUID *_singleUserAnchorIdentifier;
    _Bool _isFaceTracked;
    long long _maximumNumberOfTrackedFaces;
}

@property _Bool isFaceTracked;
@property (nonatomic, readonly) long long maximumNumberOfTrackedFaces;

+ (_Bool)isSupported;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)processData:(id)arg1;
- (id)resultDataClasses;
- (unsigned long long)requiredSensorDataTypes;
- (id)initWithMaximumNumberOfTrackedFaces:(long long)arg1;

@end

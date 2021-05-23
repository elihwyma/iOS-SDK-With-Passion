/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/ARLightEstimate.h>

#import <ARKit/Swift-Protocol.h>

@class MISSING_TYPE, NSData;

@interface ARDirectionalLightEstimate : ARLightEstimate <Swift>

{
    CDStruct_9c26ff66 _sphericalHarmonicIntensity;
    NSData *_sphericalHarmonicsCoefficients;
    double _primaryLightIntensity;
    double _timestamp;
    double _confidenceRating;
    MISSING_TYPE *_primaryLightDirection;
}

@property (nonatomic) double timestamp;
@property (nonatomic) double confidenceRating;
@property (copy, nonatomic, readonly) NSData *sphericalHarmonicsCoefficients;
@property (nonatomic, readonly) MISSING_TYPE *primaryLightDirection;
@property (nonatomic, readonly) double primaryLightIntensity;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSphericalHarmonics:(CDStruct_9c26ff66)arg1 ambientIntensity:(double)arg2 temperature:(double)arg3;
- (id)initWithDirectionalLightEstimate:(id)arg1;
- (id)lightEstimateByApplyingRotation:(CDStruct_8e0628e6)arg1;

@end

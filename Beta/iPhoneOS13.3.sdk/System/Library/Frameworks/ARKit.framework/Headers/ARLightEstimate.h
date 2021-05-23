/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface ARLightEstimate : NSObject

{
    double _ambientIntensity;
    double _ambientColorTemperature;
}

@property (copy, nonatomic, readonly) NSData *sphericalHarmonicsCoefficients;
@property (nonatomic, readonly) double ambientIntensity;
@property (nonatomic, readonly) double ambientColorTemperature;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAmbientIntensity:(double)arg1 temperature:(double)arg2;

@end

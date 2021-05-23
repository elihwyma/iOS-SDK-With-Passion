/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HFTemperatureColorProfile : NSObject

{
    float _minimumTemperature;
    float _maximumTemperature;
}

@property (nonatomic, readonly) float minimumTemperature;
@property (nonatomic, readonly) float maximumTemperature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)adjustedColorPrimitiveForPrimitive:(id)arg1;
- (float)adjustedTemperatureForTemperature:(float)arg1;
- (id)initWithMinimumTemperature:(float)arg1 maximumTemperature:(float)arg2;

@end

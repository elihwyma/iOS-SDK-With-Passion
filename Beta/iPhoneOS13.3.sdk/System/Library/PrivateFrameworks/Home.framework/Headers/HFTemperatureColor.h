/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSString;

@interface HFTemperatureColor : NSObject <Swift>

{
    float _temperatureInMired;
}

@property (nonatomic, readonly) float temperatureInMired;
@property (nonatomic, readonly) float temperatureInKelvin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)hf_RGBColorRepresentation;
- (id)hf_temperatureColorRepresentation;
- (id)initWithTemperatureInMired:(float)arg1;
- (id)initWithTemperatureInKelvin:(float)arg1;

@end

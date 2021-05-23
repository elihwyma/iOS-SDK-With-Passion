/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HFTemperatureIconDescriptor : NSObject

{
    _Bool _shouldForceLTR;
    NSString *_formattedTemperature;
    long long _heatingCoolingMode;
    long long _targetHeatingCoolingMode;
}

@property (nonatomic, readonly) NSString *formattedTemperature;
@property (nonatomic, readonly) long long heatingCoolingMode;
@property (nonatomic, readonly) long long targetHeatingCoolingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _Bool shouldForceLTR;

- (_Bool)isEqual:(id)arg1;
- (id)initWithFormattedTemperature:(id)arg1 heatingCoolingMode:(long long)arg2 targetHeatingCoolingMode:(long long)arg3;

@end

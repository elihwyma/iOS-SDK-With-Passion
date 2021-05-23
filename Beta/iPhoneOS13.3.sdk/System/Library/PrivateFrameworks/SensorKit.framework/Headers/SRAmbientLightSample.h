/*
 Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

#import <Foundation/NSObject.h>

@class NSMeasurement, NSString;

@interface SRAmbientLightSample : NSObject

{
    long long _type;
    long long _placement;
    CDStruct_6e3f967a _chromaticity;
    NSMeasurement *_lux;
}

@property (copy, readonly) NSString *typeString;
@property (copy, readonly) NSString *placementString;
@property (readonly) long long placement;
@property (readonly) CDStruct_6e3f967a chromaticity;
@property (copy, readonly) NSMeasurement *lux;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)binarySampleRepresentation;
- (id)sr_dictionaryRepresentation;
- (id)initWithSRALSSampleStruct:(CDStruct_76bbbbff *)arg1;

@end

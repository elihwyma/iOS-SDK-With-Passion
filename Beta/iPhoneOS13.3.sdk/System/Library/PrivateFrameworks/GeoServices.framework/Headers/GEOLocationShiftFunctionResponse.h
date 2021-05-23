/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@interface GEOLocationShiftFunctionResponse : NSObject <Swift>

{
    CDStruct_2c43369c _originalCoordinate;
    double _params[9];
    double _radius;
    _Bool _shouldUsePolyShiftFunction;
    unsigned int _version;
}

@property (nonatomic, readonly) CDStruct_c3b9c2ee originalCoordinate;
@property (nonatomic, readonly) double radius;
@property (nonatomic, readonly) unsigned int version;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isValidForCoordinate:(CDStruct_c3b9c2ee)arg1;
- (CDStruct_c3b9c2ee)shiftedCoordinateForCoordinate:(CDStruct_c3b9c2ee)arg1 accuracy:(double *)arg2;
- (id)initWithPolyLocationShiftResponse:(id)arg1 originalCoordinate:(CDStruct_c3b9c2ee)arg2 version:(unsigned int)arg3;

@end

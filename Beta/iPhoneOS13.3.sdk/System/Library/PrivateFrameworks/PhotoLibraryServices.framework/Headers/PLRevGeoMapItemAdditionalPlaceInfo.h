/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface PLRevGeoMapItemAdditionalPlaceInfo : NSObject

{
    NSString *_name;
    NSNumber *_placeType;
    unsigned long long _dominantOrderType;
    double _areaInSquareMeters;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSNumber *placeType;
@property (nonatomic, readonly) unsigned long long dominantOrderType;
@property (nonatomic, readonly) double areaInSquareMeters;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 placeType:(id)arg2 dominantOrderType:(unsigned long long)arg3 areaInSquareMeters:(double)arg4;

@end

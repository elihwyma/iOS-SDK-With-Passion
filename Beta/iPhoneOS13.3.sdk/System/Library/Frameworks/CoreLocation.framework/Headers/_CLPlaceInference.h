/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class CLLocation, CLPlacemark, NSString;

@interface _CLPlaceInference : NSObject

{
    unsigned long long _userType;
    unsigned long long _placeType;
    CLPlacemark *_placemark;
    CLLocation *_referenceLocation;
    double _confidence;
    NSString *_preferredName;
}

@property (nonatomic, readonly) unsigned long long userType;
@property (nonatomic, readonly) unsigned long long placeType;
@property (nonatomic, readonly) CLPlacemark *placemark;
@property (nonatomic, readonly) CLLocation *referenceLocation;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) NSString *preferredName;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserType:(unsigned long long)arg1 placeType:(unsigned long long)arg2 placemark:(id)arg3 referenceLocation:(id)arg4 confidence:(double)arg5 preferredName:(id)arg6;

@end

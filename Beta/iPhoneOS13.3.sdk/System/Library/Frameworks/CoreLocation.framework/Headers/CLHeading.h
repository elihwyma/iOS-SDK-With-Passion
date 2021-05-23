/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface CLHeading : NSObject

{
    id _internal;
}

@property (nonatomic, readonly) double magneticHeading;
@property (nonatomic, readonly) double trueHeading;
@property (nonatomic, readonly) double headingAccuracy;
@property (nonatomic, readonly) double x;
@property (nonatomic, readonly) double y;
@property (nonatomic, readonly) double z;
@property (copy, nonatomic, readonly) NSDate *timestamp;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (id)initWithClientHeading:(CDStruct_b560b707)arg1;

@end

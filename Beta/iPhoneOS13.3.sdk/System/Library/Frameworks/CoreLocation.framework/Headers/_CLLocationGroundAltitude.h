/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@interface _CLLocationGroundAltitude : NSObject

{
    double _estimate;
    double _uncertainty;
}

@property (nonatomic, readonly) double estimate;
@property (nonatomic, readonly) double uncertainty;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEstimate:(double)arg1 uncertainty:(double)arg2;

@end

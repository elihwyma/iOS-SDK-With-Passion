/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <CoreLocation/CLHeading.h>

@class NSString;

@interface CLHeading (MapKitAdditions)

@property (nonatomic, readonly) double heading;
@property (nonatomic, readonly) _Bool hasGeomagneticVector;
@property (retain, nonatomic, readonly) NSString *compactDescription;

- (id)initWithHeading:(double)arg1 accuracy:(double)arg2;

@end

/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <CoreLocation/CLLocation.h>

@interface CLLocation (MKLocationManagerExtras)

@property (nonatomic, readonly) int _mapkit_source;

+ (double)_mapkit_timeToExpire;

@end

/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/Swift-Protocol.h>

@class CLLocation;

@protocol MKAnnotationPrivate <Swift>

@property (nonatomic, readonly) long long representation;
@property (retain, nonatomic) CLLocation *location;

@end

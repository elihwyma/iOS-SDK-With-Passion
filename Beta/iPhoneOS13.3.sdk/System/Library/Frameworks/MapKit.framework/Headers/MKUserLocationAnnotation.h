/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class CLLocation, NSString;

__attribute__((visibility("hidden")))
@interface MKUserLocationAnnotation : NSObject

{
    struct CLLocationCoordinate2D _coordinate;
    CLLocation *_location;
}

@property (nonatomic) struct CLLocationCoordinate2D coordinate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) long long representation;
@property (retain, nonatomic) CLLocation *location;

@end

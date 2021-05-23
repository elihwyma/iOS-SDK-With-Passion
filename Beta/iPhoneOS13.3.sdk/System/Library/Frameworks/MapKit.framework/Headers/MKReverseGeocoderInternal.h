/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKMapItem;

@protocol MKMapServiceTicket, MKReverseGeocoderDelegate;

__attribute__((visibility("hidden")))
@interface MKReverseGeocoderInternal : NSObject

{
    struct CLLocationCoordinate2D coordinate;
    id <MKReverseGeocoderDelegate> delegate;
    MKMapItem *mapItem;
    id <MKMapServiceTicket> ticket;
    _Bool querying;
}

@end

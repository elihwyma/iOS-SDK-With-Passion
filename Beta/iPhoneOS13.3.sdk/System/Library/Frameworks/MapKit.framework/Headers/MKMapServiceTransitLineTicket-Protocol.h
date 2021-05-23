/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/Swift-Protocol.h>

@class GEOMapServiceTraits;

@protocol MKMapServiceTransitLineTicket <Swift>

@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (unsigned short)cancel;
- (unsigned short)submitWithHandler:networkActivity: /* Error: Ran out of types for this method. */;

@end

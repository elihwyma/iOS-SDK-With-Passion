/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class GEOMapServiceTraits;

@protocol GEOMapServiceBatchSpatialLookupTicket <Swift>

@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (unsigned short)cancel;
- (unsigned short)submitWithHandler:networkActivity: /* Error: Ran out of types for this method. */;
- (unsigned short)submitWithHandler:networkActivity:queue: /* Error: Ran out of types for this method. */;
- (unsigned short)submitWithHandler:auditToken:networkActivity: /* Error: Ran out of types for this method. */;
- (unsigned short)submitWithHandler:auditToken:networkActivity:queue: /* Error: Ran out of types for this method. */;
- (unsigned short)mapItemsForParameters: /* Error: Ran out of types for this method. */;

@end

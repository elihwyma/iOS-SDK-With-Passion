/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class GEOMapServiceTraits, NSArray;

@protocol GEOMapServiceSpatialEventLookupTicket <Swift>

@property (nonatomic, readonly) NSArray *parameters;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (unsigned short)cancel;
- (unsigned short)submitWithHandler:auditToken:queue: /* Error: Ran out of types for this method. */;
- (unsigned short)submitWithHandler:queue: /* Error: Ran out of types for this method. */;

@end

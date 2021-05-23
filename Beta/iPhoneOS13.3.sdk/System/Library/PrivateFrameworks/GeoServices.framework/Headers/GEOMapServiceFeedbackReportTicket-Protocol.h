/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class GEOMapServiceTraits;

@protocol GEOMapServiceFeedbackReportTicket <Swift>

@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (unsigned short)cancel;
- (unsigned short)submitWithHandler:networkActivity: /* Error: Ran out of types for this method. */;

@end

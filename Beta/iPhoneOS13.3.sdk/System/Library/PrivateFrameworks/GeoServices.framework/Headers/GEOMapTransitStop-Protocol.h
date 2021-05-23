/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@protocol GEOMapTransitStop <Swift>

@property (nonatomic, readonly) unsigned long long hallID;

- (unsigned short)findHall:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)findLinksIn:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)findLinksOut:completionHandler: /* Error: Ran out of types for this method. */;

@end

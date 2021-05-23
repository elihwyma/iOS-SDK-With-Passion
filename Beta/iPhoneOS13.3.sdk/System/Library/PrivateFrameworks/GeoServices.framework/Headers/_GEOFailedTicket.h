/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOAbstractMapServiceTicket.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface _GEOFailedTicket : GEOAbstractMapServiceTicket

{
    NSError *_error;
}

- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4;
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4;
- (id)initWithError:(id)arg1 traits:(id)arg2;

@end

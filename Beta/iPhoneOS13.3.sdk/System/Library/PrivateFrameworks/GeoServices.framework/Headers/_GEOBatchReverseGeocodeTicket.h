/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOAbstractMapServiceTicket.h>

@class GEOBatchRevGeocodeRequest;

__attribute__((visibility("hidden")))
@interface _GEOBatchReverseGeocodeTicket : GEOAbstractMapServiceTicket

{
    GEOBatchRevGeocodeRequest *_batchReverseGeocodeRequest;
    _Bool _shiftLocationsIfNeeded;
}

- (id)description;
- (void)cancel;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4;
- (void)_batchReverseGeocodeWithRequest:(id)arg1 auditToken:(id)arg2 handler:(CDUnknownBlockType)arg3 networkActivity:(CDUnknownBlockType)arg4;
- (id)initWithBatchReverseGeocodeRequest:(id)arg1 shiftLocationsIfNeeded:(_Bool)arg2 traits:(id)arg3;
- (_Bool)isEqualForHistoryToTicket:(id)arg1;

@end

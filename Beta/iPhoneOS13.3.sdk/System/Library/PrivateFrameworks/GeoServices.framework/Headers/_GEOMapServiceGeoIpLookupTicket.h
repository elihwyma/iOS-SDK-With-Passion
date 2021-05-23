/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOAbstractTicket.h>

@class GEOPDPlaceRequest, NSString;

__attribute__((visibility("hidden")))
@interface _GEOMapServiceGeoIpLookupTicket : GEOAbstractTicket

{
    GEOPDPlaceRequest *_placeRequest;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;
@property (nonatomic, readonly) CDStruct_d1a7ebee dataRequestKind;

- (void)cancel;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 networkActivity:(CDUnknownBlockType)arg3 handlerQueue:(id)arg4;
- (id)initWithIpAddress:(id)arg1;

@end

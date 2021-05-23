/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOAbstractTicket.h>

@class GEOPDPlaceRequest, GEOPDPlaceResponse;

@interface GEOAbstractRequestResponseTicket : GEOAbstractTicket

{
    GEOPDPlaceRequest *_request;
    GEOPDPlaceResponse *_response;
}

- (void)cancel;
- (id)initWithTraits:(id)arg1;
- (CDStruct_d1a7ebee)dataRequestKind;
- (void)performSubmitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(double)arg3 networkActivity:(CDUnknownBlockType)arg4;
- (id)initWithRequest:(id)arg1 traits:(id)arg2;
- (void)performSubmitWithHandler:(CDUnknownBlockType)arg1 timeout:(double)arg2 networkActivity:(CDUnknownBlockType)arg3;

@end

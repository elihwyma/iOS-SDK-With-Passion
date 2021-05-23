/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEOAbstractMapServiceTicket.h>

@class GEOPDPlaceRequest, GEOPDPlaceResponse;

@protocol GEOMapItem;

__attribute__((visibility("hidden")))
@interface _GEOPlaceRequestTicket : GEOAbstractMapServiceTicket

{
    GEOPDPlaceRequest *_request;
    GEOPDPlaceResponse *_response;
    id <GEOMapItem> _mapItemToRefine;
}

- (id)description;
- (void)cancel;
- (id)initWithTraits:(id)arg1;
- (CDStruct_d1a7ebee)dataRequestKind;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4;
- (id)initWithRequest:(id)arg1 traits:(id)arg2;
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)applyToPlaceInfo:(id)arg1;
- (id)resultSectionHeader;
- (id)initWithRequest:(id)arg1 traits:(id)arg2 mapItemToRefine:(id)arg3;
- (void)_processRequest:(id)arg1 auditToken:(id)arg2 timeout:(double)arg3 withHandler:(CDUnknownBlockType)arg4 refinedHandler:(CDUnknownBlockType)arg5 networkActivity:(CDUnknownBlockType)arg6;

@end

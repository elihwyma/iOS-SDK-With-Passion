/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class GEODirectionsRequest, GEOQuickETARequest, GEOQuickETARequester, MKDirectionsRequest;

@protocol MKLocationManagerOperation, OS_dispatch_group;

@interface MKDirections : NSObject

{
    MKDirectionsRequest *_request;
    GEODirectionsRequest *_geoRequest;
    GEOQuickETARequest *_etaRequest;
    GEOQuickETARequester *_etaRequester;
    id <MKLocationManagerOperation> _locationOperation;
    NSObject<OS_dispatch_group> *_waypointsDispatchGroup;
}

@property (nonatomic, readonly, getter=isCalculating) _Bool calculating;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (id)initWithRequest:(id)arg1;
- (void)calculateETAWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_cleanupLocationOperation;
- (void)_establishCurrentLocationAndThen:(CDUnknownBlockType)arg1;
- (void)_performWithValidCurrentLocationAndWaypointsForQuickETA:(_Bool)arg1 traits:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_calculateETAWithTraits:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)calculateDirectionsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

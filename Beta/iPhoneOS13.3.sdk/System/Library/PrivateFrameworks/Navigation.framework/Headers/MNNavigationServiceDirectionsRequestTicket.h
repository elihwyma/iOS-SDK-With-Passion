/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEODirectionsRequest, GEODirectionsResponse, MNDirectionsRequestDetails, MNNavigationClientProxy, MNTraceRecordingData, NSUUID;

@interface MNNavigationServiceDirectionsRequestTicket : NSObject

{
    NSUUID *_requestIdentifier;
    MNNavigationClientProxy *_proxy;
    MNDirectionsRequestDetails *_request;
    GEODirectionsRequest *_directionsRequest;
    GEODirectionsResponse *_directionsResponse;
    MNTraceRecordingData *_traceRecordingData;
}

@property (nonatomic, readonly) GEODirectionsRequest *directionsRequest;
@property (nonatomic, readonly) GEODirectionsResponse *directionsResponse;
@property (nonatomic, readonly) MNTraceRecordingData *traceRecordingData;

- (void)cancel;
- (id)initWithProxy:(id)arg1 request:(id)arg2;
- (void)submitWithHandler:(CDUnknownBlockType)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEODirectionsError, GEODirectionsRequest, GEODirectionsResponse, MNTraceRecordingData, NSArray, NSError;

__attribute__((visibility("hidden")))
@interface MNDirectionsResponseInfo : NSObject

{
    NSArray *_routeInfos;
    GEODirectionsRequest *_request;
    GEODirectionsResponse *_response;
    NSError *_error;
    GEODirectionsError *_directionsError;
    MNTraceRecordingData *_traceRecordingData;
}

@property (retain, nonatomic) NSArray *routeInfos;
@property (retain, nonatomic) GEODirectionsRequest *request;
@property (retain, nonatomic) GEODirectionsResponse *response;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) GEODirectionsError *directionsError;
@property (retain, nonatomic) MNTraceRecordingData *traceRecordingData;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEODirectionsRequest, GEODirectionsResponse, NSArray, NSError, NSString;

@interface MNTraceDirectionsRow : NSObject

{
    double _requestTimestamp;
    double _responseTimestamp;
    GEODirectionsRequest *_request;
    GEODirectionsResponse *_response;
    NSError *_error;
    NSArray *_waypoints;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double position;
@property (nonatomic) double requestTimestamp;
@property (nonatomic) double responseTimestamp;
@property (retain, nonatomic) GEODirectionsRequest *request;
@property (retain, nonatomic) GEODirectionsResponse *response;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSArray *waypoints;

@end

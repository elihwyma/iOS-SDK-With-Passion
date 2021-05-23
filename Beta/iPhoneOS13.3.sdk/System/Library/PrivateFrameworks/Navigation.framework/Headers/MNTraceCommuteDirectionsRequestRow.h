/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEODirectionsRequest, GEODirectionsResponse, NSError;

@interface MNTraceCommuteDirectionsRequestRow : NSObject

{
    unsigned long long _destinationID;
    double _requestTimestamp;
    double _responseTimestamp;
    GEODirectionsRequest *_request;
    GEODirectionsResponse *_response;
    NSError *_responseError;
}

@property (nonatomic) unsigned long long destinationID;
@property (nonatomic) double requestTimestamp;
@property (nonatomic) double responseTimestamp;
@property (retain, nonatomic) GEODirectionsRequest *request;
@property (retain, nonatomic) GEODirectionsResponse *response;
@property (retain, nonatomic) NSError *responseError;

@end

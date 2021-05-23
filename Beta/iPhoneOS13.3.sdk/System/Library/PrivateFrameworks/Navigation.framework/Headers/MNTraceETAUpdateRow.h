/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEOETATrafficUpdateRequest, GEOETATrafficUpdateResponse, NSError, NSString;

@interface MNTraceETAUpdateRow : NSObject

{
    double _requestTimestamp;
    double _responseTimestamp;
    GEOETATrafficUpdateRequest *_request;
    GEOETATrafficUpdateResponse *_response;
    NSError *_error;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double position;
@property (nonatomic) double requestTimestamp;
@property (nonatomic) double responseTimestamp;
@property (retain, nonatomic) GEOETATrafficUpdateRequest *request;
@property (retain, nonatomic) GEOETATrafficUpdateResponse *response;
@property (retain, nonatomic) NSError *error;

@end

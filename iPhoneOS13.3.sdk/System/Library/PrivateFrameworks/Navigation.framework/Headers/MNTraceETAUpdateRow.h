//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNTracePlayerTimelineStreamObjectType-Protocol.h>

@class GEOETATrafficUpdateRequest, GEOETATrafficUpdateResponse, NSError;

@interface MNTraceETAUpdateRow : NSObject <MNTracePlayerTimelineStreamObjectType>
{
    double _requestTimestamp;
    double _responseTimestamp;
    GEOETATrafficUpdateRequest *_request;
    GEOETATrafficUpdateResponse *_response;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) GEOETATrafficUpdateResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) GEOETATrafficUpdateRequest *request; // @synthesize request=_request;
@property(nonatomic) double responseTimestamp; // @synthesize responseTimestamp=_responseTimestamp;
@property(nonatomic) double requestTimestamp; // @synthesize requestTimestamp=_requestTimestamp;
// - (void).cxx_destruct;
@property(readonly, nonatomic) double position;

@end


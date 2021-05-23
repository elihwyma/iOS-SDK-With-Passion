/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class GEOAlert, NSString;

@protocol GEOTransitRoutingIncidentMessage;

@interface GEODirectionsError : NSObject <Swift>

{
    GEOAlert *_alert;
    struct GEOProblemDetail *_problemDetails;
    unsigned long long _problemDetailsCount;
    id <GEOTransitRoutingIncidentMessage> _routingIncidentMessage;
}

@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) id <GEOTransitRoutingIncidentMessage> incidentMessage;
@property (nonatomic, readonly) long long firstDirectionsErrorCode;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_copyProblemDetails:(struct GEOProblemDetail *)arg1 count:(unsigned long long)arg2;
- (long long)_errorCodeForProblemDetail:(struct GEOProblemDetail)arg1;
- (_Bool)_errorCode:(long long)arg1 toProblem:(out int *)arg2;
- (id)initWithResponse:(id)arg1;
- (id)initWithWaypointIndex:(unsigned long long)arg1;
- (_Bool)hasError:(long long)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEODirectionsRequest, GEODirectionsResponse, GEORouteAttributes, MNTraceRecordingData, NSArray, NSDictionary, NSString;

@interface MNStartNavigationDetails : NSObject

{
    int _navigationType;
    _Bool _fullGuidance;
    NSString *_tracePlaybackPath;
    MNTraceRecordingData *_traceRecordingData;
    _Bool _shouldSimulateLocations;
    NSString *_traceRecordingNameOverride;
    _Bool _copyTraceToCrashReporter;
    GEORouteAttributes *_routeAttributes;
    GEODirectionsRequest *_directionsRequest;
    GEODirectionsResponse *_directionsResponse;
    NSString *_requestingAppIdentifier;
    NSArray *_routes;
    unsigned long long _selectedRouteIndex;
    NSDictionary *_traffic;
    _Bool _isReconnecting;
}

@property (nonatomic) _Bool isReconnecting;
@property (nonatomic) int navigationType;
@property (nonatomic) _Bool fullGuidance;
@property (copy, nonatomic) GEORouteAttributes *routeAttributes;
@property (copy, nonatomic) GEODirectionsRequest *directionsRequest;
@property (copy, nonatomic) GEODirectionsResponse *directionsResponse;
@property (copy, nonatomic) NSArray *routes;
@property (copy, nonatomic) NSDictionary *traffic;
@property (nonatomic) unsigned long long selectedRouteIndex;
@property (copy, nonatomic) NSString *requestingAppIdentifier;
@property (copy, nonatomic) NSString *tracePlaybackPath;
@property (retain, nonatomic) MNTraceRecordingData *traceRecordingData;
@property (nonatomic) _Bool shouldSimulateLocations;
@property (copy, nonatomic) NSString *traceRecordingNameOverride;
@property (nonatomic) _Bool copyTraceToCrashReporter;
@property (nonatomic, readonly) NSString *fullDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_findRouteWithUUID:(id)arg1;

@end

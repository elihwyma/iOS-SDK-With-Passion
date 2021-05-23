/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEODirectionsRequest, GEODirectionsResponse, MNLocationDetails, NSArray, NSError;

@interface MNTraceRecordingData : NSObject

{
    MNLocationDetails *_initialUserLocationDetails;
    NSArray *_waypoints;
    GEODirectionsRequest *_initialDirectionsRequest;
    GEODirectionsResponse *_initialDirectionsResponse;
    NSError *_initialDirectionsRequestError;
    double _initialDirectionsRequestTimestamp;
    double _initialDirectionsResponseTimestamp;
}

@property (retain, nonatomic) MNLocationDetails *initialUserLocationDetails;
@property (retain, nonatomic) NSArray *waypoints;
@property (retain, nonatomic) GEODirectionsRequest *initialDirectionsRequest;
@property (retain, nonatomic) GEODirectionsResponse *initialDirectionsResponse;
@property (retain, nonatomic) NSError *initialDirectionsRequestError;
@property (nonatomic) double initialDirectionsRequestTimestamp;
@property (nonatomic) double initialDirectionsResponseTimestamp;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface GEORouteHypothesizerAnalyticsStore : NSObject <Swift>

{
    double _observedEarlyDeltaFromRequiredTimeToLeave;
    double _observedLateDeltaFromRequiredTimeToLeave;
    unsigned long long _hypothesizerRerouteCount;
    unsigned long long _etaUpdatesAfterEventStart;
    _Bool _etaUpdatesWereReported;
    unsigned long long _hypothesisCount;
    _Bool _stopped;
    unsigned long long _uiNotificationType;
    NSDate *_lastGenerationDate;
}

@property (nonatomic) unsigned long long etaUpdatesAfterEventStart;
@property (nonatomic) _Bool etaUpdatesWereReported;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)didGenerateHypothesis;
- (void)didShowUI:(unsigned long long)arg1;
- (void)didReroute;
- (void)didStartMovingWithExpectedDepartureTime:(id)arg1;
- (void)didStopMoving;
- (void)didArriveWithExpectedArrivalTime:(id)arg1;
- (void)didStopHypothesizing;

@end

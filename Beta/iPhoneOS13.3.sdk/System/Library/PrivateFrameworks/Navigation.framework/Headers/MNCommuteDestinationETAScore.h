/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/MNCommuteDestinationScore.h>

@class MNCommuteDestination, NSDate, NSString;

@protocol GEODirectionServiceTicket;

@interface MNCommuteDestinationETAScore : MNCommuteDestinationScore

{
    int _score;
    _Bool _destinationInvalid;
    MNCommuteDestination *_otherDestination;
    double _otherDestinationTravelTime;
    NSDate *_lastRouteUpdate;
    id <GEODirectionServiceTicket> _directionsRequestTicket;
}

@property (weak, nonatomic) MNCommuteDestination *otherDestination;
@property (nonatomic) double otherDestinationTravelTime;
@property (retain, nonatomic) NSDate *lastRouteUpdate;
@property (retain, nonatomic) id <GEODirectionServiceTicket> directionsRequestTicket;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)weight;

- (int)score;
- (id)_routeAttributes;
- (id)initWithDestination:(id)arg1;
- (void)updateScoreIfPossible;
- (_Bool)destinationInvalid;
- (id)descriptionExtras;
- (id)_directionsRequestFeedback;
- (void)_handleDirectionsResponse:(id)arg1 error:(id)arg2 forRequest:(id)arg3;
- (void)commuteDestination:(id)arg1 didChangeRemainingTime:(double)arg2;
- (void)_updateScoreAndDestinationInvalid;
- (_Bool)supportsComparisonType:(unsigned long long)arg1;
- (_Bool)_readyForRoute;
- (void)_requestRoute;
- (void)updateComparisonDestination:(id)arg1 ofType:(unsigned long long)arg2;

@end

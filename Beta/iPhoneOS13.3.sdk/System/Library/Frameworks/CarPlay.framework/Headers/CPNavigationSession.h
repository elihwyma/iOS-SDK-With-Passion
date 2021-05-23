/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <Foundation/NSObject.h>

@class CPMapTemplate, CPTrip, NSArray;

@protocol CPNavigationSessionManaging;

@interface CPNavigationSession : NSObject

{
    NSArray *_upcomingManeuvers;
    CPTrip *_trip;
    id <CPNavigationSessionManaging> _manager;
    CPMapTemplate *_mapTemplate;
}

@property (retain, nonatomic) CPTrip *trip;
@property (retain, nonatomic) id <CPNavigationSessionManaging> manager;
@property (weak, nonatomic) CPMapTemplate *mapTemplate;
@property (copy, nonatomic) NSArray *upcomingManeuvers;

- (void)pauseTripForReason:(unsigned long long)arg1 description:(id)arg2;
- (void)finishTrip;
- (void)cancelTrip;
- (void)updateTravelEstimates:(id)arg1 forManeuver:(id)arg2;
- (id)initWithTrip:(id)arg1 manager:(id)arg2 mapTemplate:(id)arg3;
- (id)_currentTripId;

@end

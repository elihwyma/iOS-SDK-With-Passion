/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class CalPreferences, NSString;

@interface EKDebugPreferences : NSObject

{
    CalPreferences *_preferences;
}

@property (nonatomic) double availabilityFreshnessWindow;
@property (nonatomic) _Bool overrideTravelAdvisoryHypothesis;
@property (retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisTransportType;
@property (nonatomic) double overriddenTravelAdvisoryHypothesisConservativeTravelTime;
@property (nonatomic) double overriddenTravelAdvisoryHypothesisEstimatedTravelTime;
@property (nonatomic) double overriddenTravelAdvisoryHypothesisAggressiveTravelTime;
@property (nonatomic) _Bool overriddenTravelAdvisoryHypothesisSupportsLiveTraffic;
@property (retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisCurrentTrafficDensity;
@property (retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisRouteName;
@property (retain, nonatomic) NSString *overriddenTravelAdvisoryHypothesisTravelState;
@property (nonatomic) _Bool preventMarkingTravelAdvisoryEntriesAsDismissed;
@property (nonatomic) _Bool forceDisplayOfNewTravelAdvisoryHypotheses;
@property (nonatomic) _Bool saveGeocodedLocationsInTravelEngine;
@property (nonatomic) _Bool performAgendaEntryEqualityChecksInTravelEngine;
@property (nonatomic) _Bool verifyIntegrityOfAvailabilityTimeSearchTimelines;
@property (nonatomic) _Bool showDepartureDateForTransitTimeToLeave;
@property (nonatomic) _Bool shouldBypassTravelEngineThrottle;
@property (nonatomic) _Bool syntheticTravelAdvisoriesEnabled;

+ (id)shared;

- (id)init;

@end

/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEOComposedRoute, MNLocation, MNObserverHashTable, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MNArrivalUpdater : NSObject

{
    MNObserverHashTable *_safeDelegate;
    GEOComposedRoute *_route;
    MNLocation *_lastLocation;
    _Bool _useLegacyArrival;
    unsigned long long _arrivalState;
    NSMutableArray *_timeoutRegions;
}

@property (nonatomic, readonly) _Bool isInPreArrivalRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setDelegate:(id)arg1;
- (void)arrivalRegionTimerDidFire:(id)arg1;
- (void)updateForLocation:(id)arg1 remainingDistanceAlongRoute:(double)arg2;
- (id)initWithRoute:(id)arg1 useLegacyArrival:(_Bool)arg2;
- (void)updateForRoute:(id)arg1;
- (_Bool)_checkArrivalForLocation:(id)arg1 remainingDistanceAlongRoute:(double)arg2;
- (_Bool)_isInPreArrivalRegionForLocation:(id)arg1 remainingDistanceAlongRoute:(double)arg2;
- (_Bool)_shouldUseNewArrivalLogic;
- (_Bool)_legacyCheckArrivalForLocation:(id)arg1;
- (_Bool)_legacyCheckDrivingArrivalForLocation:(id)arg1;
- (_Bool)_legacyCheckNonDrivingArrivalForLocation:(id)arg1;

@end

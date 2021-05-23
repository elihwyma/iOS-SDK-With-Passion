/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/MNTurnByTurnLocationTracker.h>

@interface MNWalkingTurnByTurnLocationTracker : MNTurnByTurnLocationTracker

{
    int _detectedTransportType;
    CDStruct_2c43369c _detectedTransportTypeOrigin;
}

- (int)transportType;
- (id)initWithNavigationSession:(id)arg1;
- (id)_newMapMatcherForRoute:(id)arg1;
- (int)_detectedMotionForLocation:(id)arg1;
- (_Bool)_allowSwitchToTransportType:(int)arg1 forLocation:(id)arg2;

@end

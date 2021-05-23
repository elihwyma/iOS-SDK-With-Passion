/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@interface VKSceneConfiguration : NSObject

{
    shared_ptr_c37d6e02 _sceneManager;
    shared_ptr_a3c46825 _styleManager;
    struct vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D>> _pointsOfInterest;
    unsigned char _navState;
    unsigned char _distanceToCurrentManeuver;
    double _distanceToDestination;
    int _currentManeuverType;
    unsigned char _currentStepLength;
    unsigned char _nextStepLength;
    unsigned char _currentIncidentType;
    unsigned char _currentManeuverComplexity;
    unsigned long long _currentGroupedManeuverCount;
    unsigned int _lineType;
    int _rampType;
    int _nextManeuverRampType;
    unsigned char _transportType;
    unsigned char _searchAlongTheRoute;
    unsigned char _vehicleSpeed;
    unsigned char _roadSpeed;
    unsigned long long _roadSpeedZeroes;
    unsigned char _cameraMode;
    unsigned char _navigationDestination;
    struct ManeveuverDistancesRange _distanceRanges;
    shared_ptr_e963992e _taskContext;
}

- (id).cxx_construct;
- (unsigned char)navigationState;
- (void)setNavigationState:(int)arg1;
- (void)setVehicleSpeed:(double)arg1;
- (void)setLineType:(unsigned int)arg1;
- (void)setDistanceToDestination:(double)arg1;
- (void)resetState;
- (void)_updateStyleManager;
- (id)initWithTaskContext:(const shared_ptr_e963992e *)arg1;
- (void)setSceneManager:(shared_ptr_c37d6e02)arg1;
- (shared_ptr_c37d6e02)sceneManager;
- (void)setStyleManager:(shared_ptr_a3c46825)arg1;
- (shared_ptr_a3c46825)styleManager;
- (void)setDistanceToCurrentManeuver:(double)arg1;
- (void)setCurrentManeuverType:(int)arg1;
- (void)setCurrentStepLength:(double)arg1;
- (void)setNextStepLength:(double)arg1;
- (void)setCurrentIncidentType:(unsigned long long)arg1;
- (void)setCurrentManeuverJunctionsCount:(unsigned long long)arg1;
- (void)setCurrentGroupedManeuverCount:(unsigned long long)arg1;
- (void)setRampType:(int)arg1;
- (void)setNextManeuverRampType:(int)arg1;
- (void)setCurrentTransportationType:(int)arg1;
- (void)setSearchAlongTheRoute:(_Bool)arg1;
- (void)setRoadSpeed:(double)arg1;
- (void)setNavCameraMode:(unsigned long long)arg1;
- (unsigned long long)navCameraMode;
- (void)setNavigationDestination:(unsigned long long)arg1;
- (unsigned long long)navigationDestination;

@end

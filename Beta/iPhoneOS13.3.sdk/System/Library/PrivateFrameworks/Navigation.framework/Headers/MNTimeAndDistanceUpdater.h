/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNActiveRouteInfo, MNLocation, NSArray, NSTimer;

@protocol MNTimeAndDistanceUpdaterDelegate;

__attribute__((visibility("hidden")))
@interface MNTimeAndDistanceUpdater : NSObject

{
    id <MNTimeAndDistanceUpdaterDelegate> _delegate;
    MNLocation *_location;
    NSArray *_routes;
    NSTimer *_minuteTimer;
    MNActiveRouteInfo *_mainRoute;
    double _remainingTime;
    double _remainingDistance;
    double _distanceToManeuverStart;
    double _distanceToManeuverEnd;
}

@property (weak, nonatomic) id <MNTimeAndDistanceUpdaterDelegate> delegate;
@property (nonatomic, readonly) double remainingTime;
@property (nonatomic, readonly) double remainingDistance;
@property (nonatomic, readonly) double distanceToManeuverStart;
@property (nonatomic, readonly) double distanceToManeuverEnd;

- (void)dealloc;
- (void)startUpdating;
- (void)stopUpdating;
- (void)setRoutes:(id)arg1 mainRoute:(id)arg2 location:(id)arg3 notificationType:(unsigned long long)arg4;
- (void)_startTimerToNextMinute;
- (void)updateDisplayETAForRoute:(id)arg1 notificationType:(unsigned long long)arg2;
- (void)setLocation:(id)arg1 notificationType:(unsigned long long)arg2;

@end

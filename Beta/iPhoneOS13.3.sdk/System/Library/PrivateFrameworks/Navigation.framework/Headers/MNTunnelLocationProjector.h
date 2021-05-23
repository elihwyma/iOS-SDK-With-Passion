/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNLocation, NSDate, NSTimer;

@protocol MNTunnelLocationProjectorDelegate;

@interface MNTunnelLocationProjector : NSObject

{
    id <MNTunnelLocationProjectorDelegate> _delegate;
    NSTimer *_locationUpdateOverdueTimer;
    MNLocation *_lastLocation;
    NSDate *_lastLocationDate;
    double _locationOverdueTimeoutForTunnel;
    double _locationOverdueTimeoutForNotTunnel;
    double _locationOverdueTimeoutForUnknown;
    _Bool _isProjecting;
}

@property (weak, nonatomic) id <MNTunnelLocationProjectorDelegate> delegate;
@property (nonatomic, readonly) _Bool isProjecting;

- (id)init;
- (void)dealloc;
- (void)stop;
- (double)_approximateMaxSpeedForRoad:(CDStruct_123780e2 *)arg1;
- (void)updateLocation:(id)arg1;
- (_Bool)_locationIsGoodEnoughToEndProjection:(id)arg1;
- (double)_locationOverdueTimeoutForLocation:(id)arg1;
- (void)_resetLocationUpdateOverdueWithTimeout:(double)arg1;
- (void)_locationUpdateOverdueTimerFired:(id)arg1;
- (id)_projectFromLocation:(id)arg1 timeInterval:(double)arg2;

@end

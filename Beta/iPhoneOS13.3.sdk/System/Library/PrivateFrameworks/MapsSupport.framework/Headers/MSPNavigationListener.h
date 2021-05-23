/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class GEOSharedNavState, NSString;

@protocol MSPNavigationListenerDelegate;

__attribute__((visibility("hidden")))
@interface MSPNavigationListener : NSObject

{
    GEOSharedNavState *_state;
    NSString *_navSessionID;
    id <MSPNavigationListenerDelegate> _delegate;
    GEOSharedNavState *_currentState;
}

@property (retain, nonatomic) GEOSharedNavState *currentState;
@property (weak, nonatomic) id <MSPNavigationListenerDelegate> delegate;
@property (nonatomic, readonly) _Bool isInNavigatingState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_updateLocation:(id)arg1;
- (void)_updateRoute:(id)arg1;
- (void)_updateTraffic:(id)arg1;
- (void)_updateETA:(double)arg1 distance:(double)arg2;
- (int)_referenceFrameForDestination:(id)arg1;
- (void)_initState;
- (void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)navigationService:(id)arg1 didFailWithError:(id)arg2;
- (void)navigationService:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationServiceDidArrive:(id)arg1;
- (void)navigationService:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3;
- (void)navigationService:(id)arg1 didUpdateTraffic:(id)arg2;
- (void)navigationService:(id)arg1 didReroute:(id)arg2 traffic:(id)arg3;

@end

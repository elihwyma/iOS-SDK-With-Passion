//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/CLLocationManagerDelegate-Protocol.h>

@protocol WebGeolocationCoreLocationUpdateListener;

@interface WebGeolocationCoreLocationProvider : NSObject <CLLocationManagerDelegate>
{
    id <WebGeolocationCoreLocationUpdateListener> _positionListener;
    struct RetainPtr<CLLocationManager> _locationManager;
    BOOL _isWaitingForAuthorization;
    int _lastAuthorizationStatus;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)setEnableHighAccuracy:(BOOL)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)sendLocation:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)stop;
- (void)start;
- (void)requestGeolocationAuthorization;
- (void)dealloc;
- (id)initWithListener:(id)arg1;
- (void)createLocationManager;

@end


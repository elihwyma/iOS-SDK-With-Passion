//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol WebGeolocationCoreLocationUpdateListener
- (void)resetGeolocation;
- (void)errorOccurred:(NSString *)arg1;
- (void)positionChanged:(struct GeolocationPosition )arg1;
- (void)geolocationAuthorizationDenied;
- (void)geolocationAuthorizationGranted;
@end


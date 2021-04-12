//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CLHeading, MNLocation, NSDate, NSError;
@protocol MNLocationProvider;

@protocol MNLocationProviderDelegate <NSObject>
- (void)locationProvider:(id <MNLocationProvider>)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(NSDate *)arg3;
- (void)locationProvider:(id <MNLocationProvider>)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(NSDate *)arg3;
- (void)locationProviderDidResumeLocationUpdates:(id <MNLocationProvider>)arg1;
- (void)locationProviderDidPauseLocationUpdates:(id <MNLocationProvider>)arg1;
- (BOOL)locationProviderShouldPauseLocationUpdates:(id <MNLocationProvider>)arg1;
- (void)locationProviderDidChangeAuthorizationStatus:(id <MNLocationProvider>)arg1;
- (void)locationProvider:(id <MNLocationProvider>)arg1 didReceiveError:(NSError *)arg2;
- (void)locationProvider:(id <MNLocationProvider>)arg1 didUpdateHeading:(CLHeading *)arg2;
- (void)locationProvider:(id <MNLocationProvider>)arg1 didUpdateLocation:(MNLocation *)arg2;
@end


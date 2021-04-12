//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CLHeading, GEOComposedWaypoint, GEODirectionsRequest, GEODirectionsResponse, MNLocation, MNTracePlayer, NSDate, NSError;

@protocol MNTracePlayerObserver <NSObject>
- (void)tracePlayer:(MNTracePlayer *)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(NSDate *)arg3;
- (void)tracePlayer:(MNTracePlayer *)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(NSDate *)arg3;
- (void)tracePlayer:(MNTracePlayer *)arg1 didUpdateMotion:(NSUInteger)arg2 exitType:(NSUInteger)arg3 confidence:(NSUInteger)arg4;
- (void)tracePlayer:(MNTracePlayer *)arg1 didUpdateHeading:(CLHeading *)arg2;
- (void)tracePlayerDidResumeLocationUpdates:(MNTracePlayer *)arg1;
- (void)tracePlayerDidPauseLocationUpdates:(MNTracePlayer *)arg1;
- (void)tracePlayer:(MNTracePlayer *)arg1 didReceiveLocationError:(NSError *)arg2;
- (void)tracePlayer:(MNTracePlayer *)arg1 didUpdateLocation:(MNLocation *)arg2;
- (void)tracePlayerDidStayOnRoute:(MNTracePlayer *)arg1;
- (void)tracePlayer:(MNTracePlayer *)arg1 didJumpToRouteResponse:(GEODirectionsResponse *)arg2 request:(GEODirectionsRequest *)arg3 origin:(GEOComposedWaypoint *)arg4 destination:(GEOComposedWaypoint *)arg5;
- (void)tracePlayer:(MNTracePlayer *)arg1 didPlayAtTime:(double)arg2;
- (void)tracePlayer:(MNTracePlayer *)arg1 didSeekToTime:(double)arg2 fromTime:(double)arg3 location:(MNLocation *)arg4;
- (void)tracePlayer:(MNTracePlayer *)arg1 didSeekToTransportType:(int)arg2;
- (void)tracePlayerDidResume:(MNTracePlayer *)arg1;
- (void)tracePlayerDidPause:(MNTracePlayer *)arg1;
- (void)tracePlayerDidStop:(MNTracePlayer *)arg1;
- (void)tracePlayerDidStart:(MNTracePlayer *)arg1;
@end


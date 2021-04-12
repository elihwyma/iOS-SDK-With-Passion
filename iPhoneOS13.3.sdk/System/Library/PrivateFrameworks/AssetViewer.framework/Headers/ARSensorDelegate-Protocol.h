//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSError;
@protocol ARSensor, ARSensorData;

@protocol ARSensorDelegate <NSObject>
- (void)sensor:(id <ARSensor>)arg1 didFailWithError:(NSError *)arg2;
- (void)sensor:(id <ARSensor>)arg1 didOutputSensorData:(id <ARSensorData>)arg2;

@optional
- (void)sensorDidRestart:(id <ARSensor>)arg1;
- (void)sensorDidPause:(id <ARSensor>)arg1;
- (void)sensorDidStart:(id <ARSensor>)arg1;
@end


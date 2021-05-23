/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class ARLocationData, CLLocationManager, NSString;

@protocol ARSensorDelegate;

@interface ARLocationSensor : NSObject <Swift>

{
    CLLocationManager *_locationManager;
    double _lastVIOUpdateTimestamp;
    CDStruct_8e0628e6 _cameraToIMURotation;
    ARLocationData *_currentLocation;
    id <ARSensorDelegate> _delegate;
}

@property (retain) ARLocationData *currentLocation;
@property (weak, nonatomic) id <ARSensorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long powerUsage;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (unsigned long long)providedDataTypes;
- (void)_validateLocationAuthorizationAndStartUpdates;
- (void)updateEstimationFromVIOPose:(id)arg1 imageData:(id)arg2;
- (void)updateARSessionState:(unsigned long long)arg1;

@end

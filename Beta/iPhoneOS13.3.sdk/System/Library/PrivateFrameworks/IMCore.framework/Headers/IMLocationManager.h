/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class CLInUseAssertion, CLLocation, CLLocationManager, NSDate, NSError, NSMutableArray, NSString, NSTimer;

@interface IMLocationManager : NSObject

{
    CLLocationManager *_locationManager;
    NSMutableArray *_handlers;
    NSTimer *_timeoutHandler;
    CLLocation *_location;
    NSError *_error;
    NSDate *_locateStartTime;
    NSTimer *_locationUpdateTimer;
    CLInUseAssertion *_inUseAssertion;
}

@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSTimer *locationUpdateTimer;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) NSMutableArray *handlers;
@property (retain, nonatomic) NSDate *locateStartTime;
@property (retain, nonatomic) CLInUseAssertion *inUseAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool locationAuthorizationDetermined;
@property (nonatomic, readonly) _Bool locationAuthorizationDenied;

+ (id)sharedInstance;
+ (id)locationShifter;
+ (Class)__CLLocationManagerClass;
+ (Class)__CLInUseAssertionClass;

- (id)init;
- (void)dealloc;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)startUpdatingCurrentLocationWithForegroundAssertionForBundleIdentifier:(id)arg1 updateHandler:(CDUnknownBlockType)arg2;
- (void)_locationUpdateTimerFired:(id)arg1;
- (void)_fireCompletionHandlers;
- (void)startUpdatingCurrentLocationWithHandler:(CDUnknownBlockType)arg1;
- (void)_locationManagerTimedOut;
- (_Bool)_shouldSendLocation:(id)arg1 timeIntervalSinceStart:(double)arg2;
- (void)shiftedLocationWithLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

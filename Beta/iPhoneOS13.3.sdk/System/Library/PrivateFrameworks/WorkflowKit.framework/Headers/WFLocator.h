/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class CLInUseAssertion, CLLocation, CLLocationManager, NSString;

@interface WFLocator : NSObject

{
    CLLocationManager *_locationManager;
    CLInUseAssertion *_inUseAssertion;
    CLLocation *_bestEffortLocation;
    CDUnknownBlockType _completionHandler;
    double _timeout;
}

@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) CLInUseAssertion *inUseAssertion;
@property (retain, nonatomic) CLLocation *bestEffortLocation;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic) double timeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)determineLocationWithWorkflowEnvironment:(long long)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)determineLocationWithWorkflowEnvironment:(long long)arg1 desiredAccuracy:(double)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)determineLocationWithWorkflowEnvironment:(long long)arg1 desiredAccuracy:(double)arg2 timeout:(double)arg3 completion:(CDUnknownBlockType)arg4;

- (void)dealloc;
- (void)start;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)startUpdatingLocation;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)requestLocation;
- (id)initWithWorkflowEnvironment:(long long)arg1;
- (_Bool)useRequestLocation;
- (void)finishUpdatingLocation;

@end

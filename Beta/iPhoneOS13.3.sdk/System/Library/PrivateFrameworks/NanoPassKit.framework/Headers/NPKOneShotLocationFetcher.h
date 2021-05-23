/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class CLInUseAssertion, CLLocationManager, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NPKOneShotLocationFetcher : NSObject

{
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_source> *_locationFixTimeout;
    CLLocationManager *_locationManager;
    CLInUseAssertion *_inUseAssertion;
    NSObject<OS_dispatch_queue> *_locationManagerQueue;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *locationFixTimeout;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) CLInUseAssertion *inUseAssertion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *locationManagerQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)_finishLocationFixWithLocation:(id)arg1;
- (void)fetchLocationWithCompletion:(CDUnknownBlockType)arg1;

@end

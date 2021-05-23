/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@class CLLocation, CLLocationManager, NSString;

@interface CalLocationManagerDelegate : NSObject

{
    CLLocation *_currentLocation;
    CDUnknownBlockType _completionBlock;
    CLLocationManager *_manager;
    NSString *_currentBundleID;
    _Bool _didFinish;
}

@property (retain) CLLocation *currentLocation;
@property (copy) CDUnknownBlockType completionBlock;
@property _Bool didFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (void)timeout;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (id)initWithCurrentBundleID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)didFinishLocationLookupWithLocation:(id)arg1 error:(id)arg2;

@end

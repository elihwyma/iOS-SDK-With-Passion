/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFAccessResource.h>

@class CLLocationManager, NSString;

@interface WFLocationAccessResource : WFAccessResource

{
    CLLocationManager *_locationManager;
    CDUnknownBlockType _makeAvailableCompletionHandler;
}

@property (retain, nonatomic) CLLocationManager *locationManager;
@property (copy, nonatomic) CDUnknownBlockType makeAvailableCompletionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isSystemResource;

- (id)name;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (id)icon;
- (unsigned long long)globalLevelStatus;
- (id)protectedResourceDescription;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)finishMakingAvailableWithSuccess:(_Bool)arg1 error:(id)arg2;

@end

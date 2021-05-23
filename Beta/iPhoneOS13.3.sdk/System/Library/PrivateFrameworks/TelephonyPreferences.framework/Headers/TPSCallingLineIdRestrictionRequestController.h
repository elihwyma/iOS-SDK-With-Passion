/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <TelephonyPreferences/TPSRequestController.h>

@class NSString;

@interface TPSCallingLineIdRestrictionRequestController : TPSRequestController

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)suppServicesEvent:(id)arg1 event:(int)arg2 settingsType:(int)arg3 data:(id)arg4;
- (void)executeRequest:(id)arg1;
- (void)executeFetchForRequest:(id)arg1;
- (void)executeSetForRequest:(id)arg1;
- (void)respondWithSubscriptionContext:(id)arg1 editable:(_Bool)arg2 state:(long long)arg3 error:(id)arg4;

@end

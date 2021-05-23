/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSubserver.h>

@class NSString;

@interface HDProfileServer : HDSubserver

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)remote_setDisplayFirstName:(id)arg1 lastName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_createProfileOfType:(long long)arg1 displayName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_deleteProfile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_getAllProfilesWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_profileIdentifierForNRDeviceUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

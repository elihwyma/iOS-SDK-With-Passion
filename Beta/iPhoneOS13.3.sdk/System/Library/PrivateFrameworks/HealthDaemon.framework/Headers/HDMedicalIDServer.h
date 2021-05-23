/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSubserver.h>

@class NSString;

@interface HDMedicalIDServer : HDSubserver

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)remote_fetchMedicalIDWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_medicalIDDataCreateIfNecessary:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_medicalIDEmergencyContactsWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_updateMedicalIDData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_deleteMedicalIDDataWithCompletion:(CDUnknownBlockType)arg1;

@end

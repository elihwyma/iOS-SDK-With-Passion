//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSubserver.h>

#import <HealthDaemon/HDMedicalIDServerInterface-Protocol.h>

@interface HDMedicalIDServer : HDSubserver <HDMedicalIDServerInterface>
{
}

- (void)remote_medicalIDEmergencyContactsWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)remote_deleteMedicalIDDataWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)remote_updateMedicalIDData:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)remote_medicalIDDataCreateIfNecessary:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)remote_fetchMedicalIDWithCompletion:(id /* CDUnknownBlockType */)arg1;

@end


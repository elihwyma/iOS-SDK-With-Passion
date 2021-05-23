/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class FKFriendsManager, HDProfile;

@protocol OS_dispatch_queue;

@interface HDMedicalIDDataManager : NSObject

{
    HDProfile *_profile;
    FKFriendsManager *_sosFriendsManager;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) FKFriendsManager *sosFriendsManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)initWithProfile:(id)arg1;
- (id)medicalIDEmergencyContacts;
- (_Bool)_migrateMedicalIDLocationIfNecessary:(id *)arg1;
- (id)_medicalIDURL;
- (id)_unarchiveMedicalIDDataWithRawData:(id)arg1;
- (_Bool)_persistMedicalIDData:(id)arg1 syncProvenance:(id)arg2 error:(id *)arg3;
- (id)_fetchMedicalID;
- (id)medicalIDDataCreateIfNecessary:(_Bool)arg1;
- (_Bool)updateMedicalIDData:(id)arg1 syncProvenance:(long long)arg2 error:(id *)arg3;
- (_Bool)isDateSavedEarlierForMedicalID:(id)arg1 originalMedicalID:(id)arg2;
- (_Bool)_persistMedicalIDDataFileToDisk:(id)arg1 error:(id *)arg2;
- (void)_updateShowMedicalIdOnWatch:(_Bool)arg1;
- (_Bool)updateMedicalIDData:(id)arg1 error:(id *)arg2;
- (id)_medicalIDURLWithDirectoryPath:(id)arg1;
- (id)fetchMedicalIDIfExists;
- (_Bool)deleteMedicalIDDataWithError:(id *)arg1;
- (_Bool)obliterateMedicalIDDataWithReason:(id)arg1 error:(id *)arg2;
- (void)badgeHealthAppForEmergencyContactConsolidationWithCompletion:(CDUnknownBlockType)arg1;
- (id)unitTest_medicalIDData;
- (_Bool)unitTest_persistMedicalIDData:(id)arg1;

@end

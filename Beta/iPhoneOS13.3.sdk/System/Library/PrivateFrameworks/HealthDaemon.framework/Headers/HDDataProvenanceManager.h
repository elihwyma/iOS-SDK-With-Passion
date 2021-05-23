/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDatabaseValueCache, HDProfile, NSLock, NSNumber, NSString;

@interface HDDataProvenanceManager : NSObject

{
    HDProfile *_profile;
    NSString *_localSourceVersion;
    NSLock *_propertyLock;
    NSNumber *_propertyLock_localSourceID;
    NSNumber *_propertyLock_localDeviceID;
    NSNumber *_propertyLock_deviceNoneID;
    _Atomic _Bool _defaultsLoaded;
    HDDatabaseValueCache *_persistentIDsByProvenanceKey;
    HDDatabaseValueCache *_originProvenanceByPersistentID;
    NSString *_localSystemBuild;
    NSString *_localProductType;
}

@property (retain, nonatomic) HDDatabaseValueCache *persistentIDsByProvenanceKey;
@property (retain, nonatomic) HDDatabaseValueCache *originProvenanceByPersistentID;
@property (copy, nonatomic) NSString *localSystemBuild;
@property (copy, nonatomic) NSString *localProductType;
@property (nonatomic, readonly) NSNumber *localSourceID;
@property (nonatomic, readonly) NSNumber *localDeviceID;
@property (nonatomic, readonly) NSNumber *deviceNoneID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithProfile:(id)arg1;
- (void)setLocalDeviceID:(id)arg1;
- (void)_loadDefaults;
- (id)diagnosticDescription;
- (id)localDataProvenanceForSourceEntity:(id)arg1 version:(id)arg2 deviceEntity:(id)arg3;
- (id)defaultLocalDataProvenance;
- (id)originProvenanceForPersistentID:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (id)provenanceEntityForProvenance:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (id)_lookupOrInsertProvenance:(id)arg1 database:(id)arg2 error:(id *)arg3;
- (id)_localDataProvenanceWithSourceID:(id)arg1 sourceVersion:(id)arg2 deviceID:(id)arg3;
- (id)_localTimeZoneName;
- (void)setDeviceNoneID:(id)arg1;
- (void)setLocalSourceID:(id)arg1;
- (void)checkDefaultsLoaded;
- (id)provenanceEntityForProvenance:(id)arg1 error:(id *)arg2;
- (id)defaultLocalDataProvenanceWithDeviceEntity:(id)arg1;

@end

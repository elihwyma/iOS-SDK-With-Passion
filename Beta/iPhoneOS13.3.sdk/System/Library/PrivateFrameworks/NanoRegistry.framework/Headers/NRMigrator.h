/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSObject.h>

@class NRDevice, NSArray;

@interface NRMigrator : NSObject

{
    _Bool _migrating;
    NRDevice *_migratingDevice;
}

@property (nonatomic, readonly) _Bool migrationIsAvailable;
@property (retain, nonatomic, readonly) NSArray *devicesExpectedToBeMigratableAfterRestore;
@property (retain, nonatomic, readonly) NSArray *migratableDevicesRequiringConsent;
@property (retain, nonatomic, readonly) NSArray *migratableDevices;
@property (retain, nonatomic, readonly) NRDevice *migratingDevice;

+ (id)sharedMigrator;
+ (void)ingestPostRestoreMigrationDataForConsentedDevices:(id)arg1;
+ (id)migrationDataPreRestoreForConsentedDevices:(id)arg1;

- (id)migrationConsentRequestData;
- (id)devicesFromMigrationConsentRequestData:(id)arg1;
- (void)setMigrationConsented:(_Bool)arg1 forDevice:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)setMigrationConsented:(_Bool)arg1 forDeviceID:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)beginMigrationWithDevice:(id)arg1 passcode:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)beginMigrationWithDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)lastMigrationRequestPhoneName;
- (void)isPhoneReadyToMigrateDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)UDIDUUID;
- (id)shortenStringByCompleteUnicodeCharactersToReduceStorageSpace:(id)arg1;
- (id)_SHA256WithString:(id)arg1;
- (id)packMigrationProtobufs:(id)arg1;
- (id)compressMigrationProtobuf:(id)arg1;
- (void)shrinkMigrationProtobufs:(id)arg1;
- (void)enterPreMigrationMode;

@end

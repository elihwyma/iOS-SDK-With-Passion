/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthKit/_HKEmergencyContact.h>

@interface _HKEmergencyContact (HDMigration)

- (void)_migrateToSchemaVersion:(long long)arg1 withAddressBook:(void *)arg2;
- (void)_migrateToAddressBook:(void *)arg1;
- (void)_migrateToContactsWithAddressBook:(void *)arg1;

@end

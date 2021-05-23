/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/ICCloudSyncingObject.h>

@class ICAccount, NSDate, NSString;

@interface ICDeviceMigrationState : ICCloudSyncingObject

@property (retain, nonatomic) ICAccount *account;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (nonatomic) short state;
@property (retain, nonatomic) NSDate *stateModificationDate;

+ (id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (id)deviceMigrationStateWithDeviceIdentifier:(id)arg1 context:(id)arg2;
+ (id)newDeviceMigrationStateWithDeviceIdentifier:(id)arg1 account:(id)arg2;
+ (id)stringFromMigrationState:(short)arg1;
+ (id)identifierForDeviceIdentifier:(id)arg1;
+ (id)deviceMigrationStatesMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)currentDeviceMigrationStateCreateIfNecessary:(_Bool)arg1;
+ (id)currentDeviceMigrationStateCreateIfNecessary:(_Bool)arg1 context:(id)arg2;
+ (id)allDeviceMigrationStatesInContext:(id)arg1;
+ (id)currentDeviceMigrationState;
+ (id)allKnownDeviceMigrationStates;

- (id)recordType;
- (id)recordName;
- (_Bool)isMigrating;
- (id)recordZoneName;
- (id)ic_loggingValues;
- (id)cloudAccount;
- (void)deleteFromLocalDatabase;
- (id)newlyCreatedRecord;
- (void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2;
- (_Bool)isInICloudAccount;
- (void)objectWasDeletedFromCloud;
- (void)objectWasDeletedFromCloudByAnotherDevice;

@end

/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/ICCloudSyncingObject.h>

@class ICAccount, NSDate, NSString;

@interface ICLegacyTombstone : ICCloudSyncingObject

@property (retain, nonatomic) ICAccount *account;
@property (nonatomic) short type;
@property (retain, nonatomic) NSString *contentHashAtImport;
@property (retain, nonatomic) NSDate *modificationDateAtImport;

+ (id)legacyTombstonesMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)tombstoneIdentifierForObjectIdentifier:(id)arg1 type:(short)arg2;
+ (id)legacyTombstoneWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)newLegacyTombstoneWithIdentifier:(id)arg1 type:(short)arg2 account:(id)arg3;
+ (id)addLegacyTombstoneWithObjectIdentifier:(id)arg1 type:(short)arg2 account:(id)arg3;
+ (void)removeLegacyTombstoneWithObjectIdentifier:(id)arg1 type:(short)arg2 context:(id)arg3;
+ (id)allLegacyTombstonesInContext:(id)arg1;
+ (void)addLegacyTombstoneForNote:(id)arg1;
+ (void)removeLegacyTombstoneForNote:(id)arg1;
+ (void)addLegacyTombstoneForFolder:(id)arg1;
+ (void)removeLegacyTombstoneForFolder:(id)arg1;
+ (id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (_Bool)hasTombstonePrefix:(id)arg1;
+ (short)tombstoneTypeFromRecordName:(id)arg1;

- (id)recordType;
- (id)recordZoneName;
- (id)ic_loggingValues;
- (id)cloudAccount;
- (void)deleteFromLocalDatabase;
- (id)newlyCreatedRecord;
- (void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2;
- (_Bool)isInICloudAccount;
- (_Bool)hasAllMandatoryFields;
- (void)objectWasDeletedFromCloud;
- (void)objectWasDeletedFromCloudByAnotherDevice;

@end

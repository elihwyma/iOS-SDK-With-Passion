/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/ICCloudSyncingObject.h>

@class ICAccount, NSData, NSString;

@interface ICAccountData : ICCloudSyncingObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) ICAccount *account;
@property (retain, nonatomic) NSData *mergeableData;

+ (id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (id)newAccountDataForAccount:(id)arg1;
+ (id)newAccountDataWithIdentifier:(id)arg1 account:(id)arg2;
+ (id)accountDataWithIdentifier:(id)arg1 context:(id)arg2;

- (_Bool)isDeletable;
- (id)recordType;
- (id)recordName;
- (id)recordZoneName;
- (id)cloudAccount;
- (void)saveMergeableDataIfNeeded;
- (_Bool)mergeWithMergeableData:(id)arg1;
- (_Bool)needsToBeDeletedFromCloud;
- (id)newlyCreatedRecord;
- (void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2;
- (_Bool)isInICloudAccount;

@end

/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <NotesShared/ICCloudSyncingObject.h>

@class ICAccount, ICAttachment, NSData, NSSet, NSString;

@interface ICMedia : ICCloudSyncingObject

{
    ICAccount *placeholderAccount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) ICAccount *placeholderAccount;
@property (nonatomic, readonly) NSSet *urlsToConsiderForCloudBackup;
@property (retain, nonatomic) ICAttachment *attachment;
@property (retain, nonatomic) NSString *filename;
@property (retain, nonatomic) NSData *assetCryptoInitializationVector;
@property (retain, nonatomic) NSData *assetCryptoTag;

+ (id)mediaIdentifiersForAccount:(id)arg1;
+ (void)purgeMediaFilesForIdentifiers:(id)arg1 account:(id)arg2;
+ (id)keyPathsForValuesAffectingIsSharedViaICloud;
+ (id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3;
+ (id)newMediaWithAttachment:(id)arg1 forData:(id)arg2 filename:(id)arg3 context:(id)arg4 error:(id *)arg5;
+ (id)mediaDirectoryURL;
+ (id)allMediaInContext:(id)arg1;
+ (id)mediaWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)newMediaWithIdentifier:(id)arg1 account:(id)arg2;
+ (void)purgeMedia:(id)arg1;
+ (id)newMediaWithAttachment:(id)arg1 context:(id)arg2;
+ (id)containerDirectoryURLForMediaWithIdentifier:(id)arg1 account:(id)arg2;
+ (id)exportableContainerDirectoryURLForMediaWithIdentifier:(id)arg1 account:(id)arg2;
+ (id)mediaURLForMediaWithIdentifier:(id)arg1 filename:(id)arg2 account:(id)arg3;
+ (id)exportableMediaURLForMediaWithIdentifier:(id)arg1 filename:(id)arg2 account:(id)arg3;
+ (id)keyPathsForValuesAffectingParentCloudObject;
+ (void)purgeAllMediaFiles;
+ (id)newMediaWithIdentifier:(id)arg1 attachment:(id)arg2;
+ (id)newMediaWithAttachment:(id)arg1 forFileWrapper:(id)arg2 context:(id)arg3 error:(id *)arg4;
+ (id)newMediaWithAttachment:(id)arg1 forURL:(id)arg2 context:(id)arg3 error:(id *)arg4;
+ (void)deleteMedia:(id)arg1;
+ (void)undeleteMedia:(id)arg1;
+ (void)purgeAllMediaInContext:(id)arg1;

- (_Bool)isValid;
- (id)data;
- (_Bool)writeData:(id)arg1 error:(id *)arg2;
- (id)recordType;
- (void)prepareForDeletion;
- (id)mediaURL;
- (_Bool)hasFile;
- (id)containerDirectoryURL;
- (id)recordZoneName;
- (id)ic_loggingValues;
- (void)deleteFromLocalDatabase;
- (id)decryptedData;
- (void)saveAndClearDecryptedData;
- (void)accountWillChangeToAccount:(id)arg1;
- (_Bool)shouldSyncMinimumSupportedNotesVersion;
- (id)parentEncryptableObject;
- (id)parentCloudObject;
- (id)containerAccount;
- (void)updateFlagToExcludeFromCloudBackup;
- (_Bool)needsToBePushedToCloud;
- (id)dataWithoutImageMarkupMetadata:(_Bool)arg1;
- (_Bool)supportsDeletionByTTL;
- (id)newlyCreatedRecord;
- (void)fixBrokenReferences;
- (void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2;
- (id)parentCloudObjectForMinimumSupportedVersionPropagation;
- (_Bool)isInICloudAccount;
- (id)objectsToBeDeletedBeforeThisObject;
- (_Bool)hasAllMandatoryFields;
- (id)newlyCreatedRecordWithObfuscator:(id)arg1;
- (void)objectWasPushedToCloudWithOperation:(id)arg1 serverRecord:(id)arg2;
- (_Bool)shouldFallBackToCheckAllCryptoKeys;
- (void)resetUniqueIdentifier;
- (id)encryptedMediaURL;
- (id)exportableMediaURLWithUpdatedFileIfNecessary;
- (_Bool)writeDataFromAsset:(id)arg1 accountID:(id)arg2 isArchivedDirectory:(_Bool)arg3 error:(id *)arg4;
- (id)mediaArchiveURL;
- (id)mediaTarArchiveURL;
- (_Bool)makeSureMediaDirectoryExists:(id *)arg1;
- (id)exportableContainerDirectoryURL;
- (_Bool)writeDataWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)writeDataFromFileURL:(id)arg1 error:(id *)arg2;
- (_Bool)isArchivedDirectory;
- (void)deleteExportableMedia;
- (id)exportableMediaURL;
- (_Bool)makeSureExportableMediaDirectoryExists:(id *)arg1;
- (void)writeDataFromItemProvider:(id)arg1 checkForMarkupData:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)writeDataFromFileWrapper:(id)arg1 error:(id *)arg2;

@end

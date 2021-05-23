/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKRecord, CKSQLite, NSArray, NSData, NSString;

@protocol OS_dispatch_queue;

@interface CKPackage : NSObject

{
    struct _OpaquePCSShareProtection *_recordPCS;
    _Bool _open;
    _Bool _transaction;
    _Bool _wasCached;
    _Bool _uploaded;
    _Bool _downloaded;
    _Bool _hasSize;
    _Bool _shouldReadRawEncryptedData;
    NSString *_databaseBasePath;
    long long _state;
    NSData *_archiverInfo;
    CKSQLite *_sqlite;
    unsigned long long _nextItemIndex;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_UUID;
    unsigned long long _size;
    long long _storageGroupingPolicy;
    long long _uploadRank;
    long long _packageID;
    NSArray *_assets;
    CKRecord *_record;
    NSString *_recordKey;
}

@property (nonatomic) long long state;
@property (copy, nonatomic) NSData *archiverInfo;
@property (retain, nonatomic) CKSQLite *sqlite;
@property (nonatomic) unsigned long long nextItemIndex;
@property (nonatomic, getter=isOpen) _Bool open;
@property (nonatomic, getter=inTransaction) _Bool transaction;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct _OpaquePCSShareProtection *recordPCS;
@property (retain, nonatomic) NSString *UUID;
@property (nonatomic) unsigned long long size;
@property (nonatomic) _Bool wasCached;
@property (nonatomic) _Bool uploaded;
@property (nonatomic) _Bool downloaded;
@property (nonatomic) _Bool hasSize;
@property (nonatomic) _Bool shouldReadRawEncryptedData;
@property (nonatomic) long long storageGroupingPolicy;
@property (nonatomic) long long uploadRank;
@property (nonatomic) long long packageID;
@property (copy, nonatomic) NSArray *assets;
@property (weak, nonatomic) CKRecord *record;
@property (copy, nonatomic) NSString *recordKey;
@property (retain, nonatomic) NSString *databaseBasePath;
@property (copy, nonatomic) NSData *signature;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)packageWithPackage:(id)arg1 error:(id *)arg2;
+ (id)packageWithError:(id *)arg1;
+ (id)packageInDaemonWithBasePath:(id)arg1 error:(id *)arg2;
+ (id)packageProcessBasePath;
+ (id)packageInClientWithBasePath:(id)arg1 error:(id *)arg2;
+ (id)stagingPathSuffixForCloudKitCachesDirectoryWithBundleIdentifier:(id)arg1;
+ (id)_packageDatabaseDirectoryWithBasePath:(id)arg1 state:(long long)arg2;
+ (id)_packagesBasePathForBundleID:(id)arg1;
+ (id)_packageDatabasePathWithBasePath:(id)arg1 UUID:(id)arg2 state:(long long)arg3;
+ (id)_createPackageDBWithPath:(id)arg1;
+ (id)clientPackageDatabaseDirectory;
+ (void)destroyClientPackageWithDatabaseBasePath:(id)arg1 UUID:(id)arg2;
+ (void)gcPackagesInDirectory:(id)arg1 dbInUseBlock:(CDUnknownBlockType)arg2;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)open;
- (void)close;
- (void)beginTransaction;
- (void)endTransaction;
- (_Bool)openWithError:(id *)arg1;
- (void)addItem:(id)arg1;
- (unsigned long long)itemCount;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (void)removeDB;
- (unsigned long long)sectionCount;
- (void)releaseDB;
- (_Bool)claimOwnershipWithError:(id *)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)itemEnumerator;
- (id)clonedPackageInDaemonWithBasePath:(id)arg1 filesDuplicatedIntoDirectory:(id)arg2 error:(id *)arg3;
- (_Bool)removeDBAndDeleteFilesWithError:(id *)arg1;
- (id)_initWithBasePath:(id)arg1 UUID:(id)arg2;
- (id)_packageDatabasePath;
- (_Bool)prepareDBWithError:(id *)arg1;
- (void)handleChangeStateAction:(long long)arg1;
- (_Bool)handleChangeStateAction:(long long)arg1 error:(id *)arg2;
- (id)_packageDatabasePathWithState:(long long)arg1;
- (_Bool)movePackagesDatabaseInDirection:(_Bool)arg1 error:(id *)arg2;
- (id)sqliteOrRaise;
- (void)releaseDBWithRemove:(_Bool)arg1;
- (_Bool)_locked_openWithError:(id *)arg1;
- (id)_itemWithColumnsByName:(id)arg1;
- (id)_itemOrNilAtIndex:(unsigned long long)arg1;
- (void)_locked_open;
- (void)_locked_beginTransaction;
- (void)_locked_endTransaction;
- (id)initUnreachablePackageWithUUID:(id)arg1;
- (_Bool)setArchiverInfo:(id)arg1 error:(id *)arg2;
- (id)itemEnumeratorForSectionAtIndex:(unsigned long long)arg1;
- (void)updateItemAtIndex:(long long)arg1 withSignature:(id)arg2 size:(unsigned long long)arg3 itemID:(unsigned long long)arg4 sectionIndex:(unsigned long long)arg5;
- (void)updateItemAtIndex:(long long)arg1 withFileURL:(id)arg2;
- (void)updateItemsAtIndexes:(id)arg1 fileURLs:(id)arg2;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (void)addSection:(id)arg1;
- (double)earliestUploadReceiptExpiration;

@end

/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class BRCALRowID, BRCZoneRowID, NSString;

@interface BRCItemID : NSObject <Swift>

{
    BRCALRowID *_appLibraryRowID;
    BRCZoneRowID *_zoneRowID;
    unsigned char _kind;
    unsigned char _uuid[16];
}

@property (nonatomic, readonly) _Bool isNonDesktopRoot;
@property (nonatomic, readonly) _Bool isDocumentsFolder;
@property (nonatomic, readonly) _Bool isSharedZoneRoot;
@property (nonatomic, readonly) NSString *itemIDString;
@property (nonatomic, readonly) NSString *debugItemIDString;
@property (nonatomic, readonly) const char *UTF8String;
@property (nonatomic, readonly) BRCALRowID *appLibraryRowID;
@property (nonatomic, readonly) BRCZoneRowID *sharedZoneRowID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;
+ (_Bool)isRootItemIDWithSQLiteValue:(struct sqlite3_value *)arg1;
+ (_Bool)isDocumentsItemIDWithSQLiteValue:(struct sqlite3_value *)arg1;
+ (id)documentsItemIDWithAppLibraryRowID:(id)arg1;
+ (_Bool)migrateItemIDsToVersion5WithDB:(id)arg1 serverTruth:(_Bool)arg2;
+ (_Bool)migrateItemIDsToVersion8WithDB:(id)arg1 serverTruth:(_Bool)arg2;
+ (_Bool)migrateItemIDsToVersion11WithDB:(id)arg1 serverTruth:(_Bool)arg2;
+ (id)parseMangledItemIDString:(id)arg1 mangledID:(id *)arg2 etag:(id *)arg3 session:(id)arg4;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUIDString:(id)arg1;
- (id)initWithUUID:(const char *)arg1;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (id)initWithRootObject:(struct RootItemObject *)arg1;
- (_Bool)isEqualToItemID:(id)arg1;
- (id)initWithItemID:(id)arg1;
- (id)derivedAliasItemIDWithOwnerName:(id)arg1;
- (id)structureRecordIDForItemType:(BOOL)arg1 zone:(id)arg2;
- (id)sideCarRecordNameWithZone:(id)arg1;
- (id)initAsDocumentsWithAppLibraryRowID:(id)arg1;
- (id)_initAsLibraryRootWithAppLibraryRowID:(id)arg1;
- (id)_initAsZoneRootWithZoneRowID:(id)arg1;
- (id)initWithString:(id)arg1 libraryRowID:(id)arg2 sharedZoneRowID:(id)arg3;
- (id)initWithAliasUUID:(id)arg1;
- (id)contentsRecordIDInZoneID:(id)arg1;
- (id)_directoryRecordNameWithSession:(id)arg1;
- (id)directoryReferenceInZone:(id)arg1 action:(unsigned long long)arg2;
- (id)directoryStructureRecordIDInZone:(id)arg1;
- (id)documentStructureRecordIDInZoneID:(id)arg1;
- (id)validatingDirectoryReferenceInZone:(id)arg1;
- (id)pcsChainParentReferenceInZone:(id)arg1;
- (id)pcsChainDocumentStructureReferenceInZoneID:(id)arg1;
- (id)sideCarRecordIDWithZone:(id)arg1;
- (id)itemUUIDString;
- (id)zoneUniqueItemIDStringWithSession:(id)arg1;

@end

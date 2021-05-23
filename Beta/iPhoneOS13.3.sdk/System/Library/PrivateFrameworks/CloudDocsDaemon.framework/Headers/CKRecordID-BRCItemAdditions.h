/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudKit/CKRecordID.h>

@class NSString;

@interface CKRecordID (BRCItemAdditions)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;
+ (id)brc_fetchShareIDWithSharedItem:(id)arg1;

- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (id)brc_itemIDWithSession:(id)arg1;
- (_Bool)locateSideCarServerZone:(id *)arg1 withSession:(id)arg2;
- (id)brc_shareItemID;
- (id)brc_itemIDWithSession:(id)arg1 error:(id *)arg2;
- (_Bool)brc_isAppLibraryRootRecordID;
- (_Bool)brc_isAppLibraryDocumentsRecordID;
- (id)_itemIDWithLibraryRowID:(id)arg1 session:(id)arg2;
- (id)brc_appLibraryRootZoneName;
- (id)brc_appLibraryDocumentsZoneName;
- (_Bool)brc_isZoneRootRecordID;
- (id)brc_itemIDOfTargetWithLibraryRowID:(id)arg1 session:(id)arg2;
- (BOOL)brc_itemType;
- (id)initShareIDWithShareableItem:(id)arg1;
- (id)initShareIDWithRecordID:(id)arg1 serverZone:(id)arg2;
- (id)initShareIDWithItemID:(id)arg1 zoneID:(id)arg2;
- (id)initShareIDWithRecordID:(id)arg1 zoneID:(id)arg2 session:(id)arg3;
- (id)brc_shareZoneName;

@end

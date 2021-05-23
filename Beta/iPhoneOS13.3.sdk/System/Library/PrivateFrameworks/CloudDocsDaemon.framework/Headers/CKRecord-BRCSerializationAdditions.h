/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudKit/CKRecord.h>

#import <CloudDocsDaemon/Swift-Protocol.h>

@class NSData, NSString;

@interface CKRecord (BRCSerializationAdditions) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSData *brc_containerMetadataPropertiesData;

+ (id)newFromSqliteValue:(struct sqlite3_value *)arg1;
+ (id)desiredKeysWithMask:(unsigned short)arg1;
+ (id)brc_zoneHealthZoneID;
+ (id)brc_fakeRecordWithErrorMarkerFor20716676;
+ (id)brc_containerMetadataZoneID;
+ (id)rootDirectoryRecordForZoneID:(id)arg1;
+ (id)rootAppLibraryRecordForAppLibraryID:(id)arg1 zoneID:(id)arg2;
+ (id)brc_containerMetadataRecordWithContainer:(id)arg1;

- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (_Bool)deserializeSideCarInfo:(id *)arg1 error:(id *)arg2;
- (_Bool)locateSideCarServerZone:(id *)arg1 shareAliasRecordName:(id *)arg2 withSession:(id)arg3;
- (void)serializeFilename:(id)arg1 forCreation:(_Bool)arg2 setExtension:(_Bool)arg3 inSharedAlias:(_Bool)arg4;
- (void)serializeFinderTags:(id)arg1 forCreation:(_Bool)arg2;
- (void)serializeSideCarInfo:(id)arg1 filenameExtension:(id)arg2 diffs:(unsigned long long)arg3 deadInServerTruth:(_Bool)arg4;
- (id)brc_documentName;
- (_Bool)isFolderShare;
- (id)brc_containerMetadataIconPaths;
- (id)brc_containerMetadataIconNames;
- (void)deserializeFolderSharingOptions:(unsigned long long *)arg1;
- (_Bool)deserializeFilename:(id *)arg1 basename:(id *)arg2 bounceno:(id *)arg3 extension:(id *)arg4 userInfo:(id)arg5 error:(id *)arg6;
- (_Bool)deserializeStatInfo:(id *)arg1 serverMetrics:(id *)arg2 itemID:(id)arg3 session:(id)arg4 error:(id *)arg5;
- (_Bool)deserializeVersion:(id *)arg1 fakeStatInfo:(id *)arg2 clientZone:(id)arg3 error:(id *)arg4;
- (_Bool)deserializeiWorkSharingOptions:(unsigned long long *)arg1 error:(id *)arg2;
- (id)brc_lastModifiedUserRecordNameWithCurrentUserRecordName:(id)arg1 personNameComponents:(id *)arg2;
- (_Bool)deserializeSymlinkTarget:(id *)arg1 error:(id *)arg2;
- (_Bool)deserializeAliasInfo:(id *)arg1 serverZone:(id)arg2 error:(id *)arg3;
- (void)serializeStatInfo:(id)arg1 diffs:(unsigned long long)arg2 stageID:(id)arg3 deadInServerTruth:(_Bool)arg4 shouldPCSChainStatus:(unsigned char)arg5;
- (void)serializeSystemFields:(id)arg1;
- (_Bool)_deserializeValue:(id *)arg1 forKey:(id)arg2 encrypted:(_Bool)arg3 expectClass:(Class)arg4 allowNil:(_Bool)arg5 errorDescription:(id *)arg6;
- (void)_deserializeRootSharingOptions:(unsigned long long *)arg1;
- (_Bool)brc_currentUserOwnsLastEditorDeviceWithSession:(id)arg1;
- (id)brc_lastEditorDeviceName;
- (void)serializeFilename:(id)arg1 forCreation:(_Bool)arg2 setExtension:(_Bool)arg3;
- (void)serializeFilename:(id)arg1 forCreation:(_Bool)arg2;
- (id)_createAppLibraryIfNecessary:(id)arg1 session:(id)arg2;
- (void)serializeVersion:(id)arg1 diffs:(unsigned long long)arg2 deadInServerTruth:(_Bool)arg3;
- (void)processAppLibraryDataWithMovedZoneNames:(id)arg1 serverZone:(id)arg2;
- (id)brc_sharedDocumentDisplayName;
- (id)brc_sharedDocumentExtension;
- (_Bool)brc_isInterestingRecordForSyncDown;
- (id)brc_oplockMergeEtag;
- (id)brc_updateDroppedReason;
- (_Bool)brc_safeToGetURL;
- (void)sanitizeShortTokenFields;
- (_Bool)brc_isfakeRecordWithErrorMarkerFor20716676;
- (void)brc_updateWithLogicalName:(id)arg1 isFolder:(_Bool)arg2;

@end

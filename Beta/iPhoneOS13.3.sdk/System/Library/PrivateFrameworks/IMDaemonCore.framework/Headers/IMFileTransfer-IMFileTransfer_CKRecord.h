/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <IMSharedUtilities/IMFileTransfer.h>

@interface IMFileTransfer (IMFileTransfer_CKRecord)

+ (id)_recordType;
+ (id)transferGUIDOfRecord:(id)arg1;
+ (_Bool)validateMD5HashForRecord:(id)arg1;
+ (_Bool)attachmentRecordHasAsset:(id)arg1;
+ (id)md5HashForRecord:(id)arg1;
+ (id)transferMetaDataFromRecord:(id)arg1;
+ (_Bool)_recordIsInvalid:(id)arg1;
+ (id)utiTypeForRecord:(id)arg1;
+ (long long)sizeOfAssetForRecord:(id)arg1;

- (id)_fileManager;
- (id)copyCKRecordRepresentationWithZoneID:(id)arg1 salt:(id)arg2 useStingRay:(_Bool)arg3;
- (id)ckRecordIDFromExistingMetadata;
- (void)moveTransferAssertFromRecord:(id)arg1;
- (id)initWithCKRecord:(id)arg1 writeAssetToDisk:(_Bool)arg2;
- (_Bool)_isUsingStingRay;
- (id)_ckUniqueID;
- (id)_copyCKRecordFromExistingCKMetadata:(_Bool)arg1;
- (id)_assetURLToInsertToRecord;
- (id)md5HashForURL:(id)arg1;
- (void)_setRecordPropertiesBasedOnExistingRecord:(id)arg1 useStingRay:(_Bool)arg2;
- (id)md5HashForTransfer;

@end

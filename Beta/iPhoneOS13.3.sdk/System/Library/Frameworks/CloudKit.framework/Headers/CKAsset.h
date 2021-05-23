/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKAssetCopyInfo, CKAssetDownloadPreauthorization, CKAssetReference, CKAssetRereferenceInfo, CKAssetTransferOptions, CKRecord, CKRecordID, NSData, NSDate, NSDictionary, NSFileHandle, NSNumber, NSString, NSURL;

@interface CKAsset : NSObject

{
    _Bool _shouldReadAssetContentUsingClientProxy;
    _Bool _wasCached;
    _Bool _hasSize;
    _Bool _uploaded;
    _Bool _downloaded;
    _Bool _shouldReadRawEncryptedData;
    NSString *_downloadURLTemplate;
    CKRecord *_record;
    NSString *_recordKey;
    NSURL *_contentBaseURL;
    NSString *_owner;
    NSString *_requestor;
    NSString *_authToken;
    CKAssetDownloadPreauthorization *_downloadPreauthorization;
    NSString *_downloadBaseURL;
    unsigned long long _downloadTokenExpiration;
    NSData *_boundaryKey;
    NSFileHandle *_clientOpenedFileHandle;
    NSURL *_constructedAssetDownloadURL;
    NSString *_constructedAssetDownloadURLTemplate;
    unsigned long long _constructedAssetEstimatedSize;
    NSURL *_realPathURL;
    NSData *_signature;
    unsigned long long _size;
    unsigned long long _paddedFileSize;
    NSNumber *_deviceID;
    NSNumber *_fileID;
    NSNumber *_generationCountToSave;
    NSURL *_fileURL;
    NSData *_assetContent;
    NSString *_itemTypeHint;
    CKAssetCopyInfo *_assetCopyInfo;
    NSString *_UUID;
    NSDate *_downloadURLExpiration;
    NSData *_assetKey;
    NSData *_wrappedAssetKey;
    NSData *_clearAssetKey;
    NSData *_referenceSignature;
    NSString *_uploadReceipt;
    double _uploadReceiptExpiration;
    long long _storageGroupingPolicy;
    CKAssetTransferOptions *_assetTransferOptions;
    long long _arrayIndex;
    CKRecordID *_recordID;
    CKAssetRereferenceInfo *_assetRereferenceInfo;
    CKAssetReference *_assetReference;
    NSDictionary *_assetChunkerOptions;
    long long _uploadRank;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSString *downloadURLTemplate;
@property (weak, nonatomic) CKRecord *record;
@property (copy, nonatomic) NSString *recordKey;
@property (retain, nonatomic) NSURL *contentBaseURL;
@property (retain, nonatomic) NSString *owner;
@property (retain, nonatomic) NSString *requestor;
@property (copy, nonatomic) NSString *authToken;
@property (retain, nonatomic) CKAssetDownloadPreauthorization *downloadPreauthorization;
@property (retain, nonatomic) NSString *downloadBaseURL;
@property (nonatomic) unsigned long long downloadTokenExpiration;
@property (copy, nonatomic) NSData *boundaryKey;
@property (retain, nonatomic) NSFileHandle *clientOpenedFileHandle;
@property (retain, nonatomic) NSURL *constructedAssetDownloadURL;
@property (retain, nonatomic) NSString *constructedAssetDownloadURLTemplate;
@property (nonatomic) unsigned long long constructedAssetEstimatedSize;
@property (nonatomic, readonly) _Bool isConstructedAsset;
@property (copy, nonatomic) NSURL *realPathURL;
@property (copy, nonatomic) NSData *signature;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long paddedFileSize;
@property (nonatomic, readonly) NSNumber *deviceID;
@property (nonatomic, readonly) NSNumber *fileID;
@property (retain, nonatomic) NSNumber *generationCountToSave;
@property (copy, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSURL *nullableFileURL;
@property (copy, nonatomic) NSData *assetContent;
@property (retain, nonatomic) NSString *itemTypeHint;
@property (nonatomic, readonly) _Bool shouldReadAssetContentUsingClientProxy;
@property (retain, nonatomic) CKAssetCopyInfo *assetCopyInfo;
@property (nonatomic, readonly) NSString *assetHandleUUID;
@property (retain, nonatomic) NSString *UUID;
@property (nonatomic, readonly) NSURL *downloadURL;
@property (retain, nonatomic) NSDate *downloadURLExpiration;
@property (retain, nonatomic) NSData *assetKey;
@property (retain, nonatomic) NSData *wrappedAssetKey;
@property (retain, nonatomic) NSData *clearAssetKey;
@property (retain, nonatomic) NSData *referenceSignature;
@property (copy, nonatomic) NSString *uploadReceipt;
@property (nonatomic) double uploadReceiptExpiration;
@property (nonatomic) long long storageGroupingPolicy;
@property (nonatomic) _Bool wasCached;
@property (nonatomic) _Bool hasSize;
@property (nonatomic) _Bool uploaded;
@property (nonatomic) _Bool downloaded;
@property (nonatomic) _Bool shouldReadRawEncryptedData;
@property (retain, nonatomic) CKAssetTransferOptions *assetTransferOptions;
@property (nonatomic) long long arrayIndex;
@property (retain, nonatomic) CKRecordID *recordID;
@property (nonatomic, readonly) _Bool isRereferencedAssetUpload;
@property (retain, nonatomic) CKAssetRereferenceInfo *assetRereferenceInfo;
@property (retain, nonatomic) CKAssetReference *assetReference;
@property (retain, nonatomic) NSDictionary *assetChunkerOptions;
@property (nonatomic) long long uploadRank;

+ (_Bool)supportsSecureCoding;
+ (id)openWithOpenInfo:(id)arg1 error:(id *)arg2;
+ (id)getFileMetadataWithFileHandle:(id)arg1 openInfo:(id)arg2 error:(id *)arg3;
+ (int)errorCodeFromPOSIXCode:(int)arg1;
+ (id)openToReadRawEncryptedDataWithOpenInfo:(id)arg1 error:(id *)arg2;
+ (id)_openUnencryptedWithOpenInfo:(id)arg1 genCountCheck:(_Bool)arg2 error:(id *)arg3;
+ (id)_expandTemplateURL:(id)arg1 fieldValues:(id)arg2;
+ (id)assetWithFileURL:(id)arg1;
+ (id)getFileSizeWithOpenInfo:(id)arg1 error:(id *)arg2;
+ (id)getFileMetadataAtPath:(id)arg1 error:(id *)arg2;
+ (id)_canonicalizeTemplateURL:(id)arg1;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileDescriptor:(int)arg1;
- (id)openWithError:(id *)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (id)_initBare;
- (id)initWithFileURL:(id)arg1 signature:(id)arg2;
- (id)downloadURLWithFileName:(id)arg1;
- (id)initWithFileURL:(id)arg1 signature:(id)arg2 assetHandleUUID:(id)arg3;
- (id)initWithAssetReference:(id)arg1;
- (id)initWithDeviceID:(id)arg1 fileID:(id)arg2 generationID:(id)arg3;
- (id)initWithCopyInfo:(id)arg1 fileURL:(id)arg2;
- (id)initWithAssetContent:(id)arg1 itemTypeHint:(id)arg2;

@end

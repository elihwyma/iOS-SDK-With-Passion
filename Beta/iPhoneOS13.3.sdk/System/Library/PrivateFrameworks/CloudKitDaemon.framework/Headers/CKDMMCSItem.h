/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKAsset, CKAssetDownloadPreauthorization, CKDAssetZoneKey, CKDMMCSItemCommandWriter, CKPackage, CKRecordID, NSData, NSDictionary, NSError, NSFileHandle, NSMutableArray, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CKDMMCSItem : NSObject

{
    _Bool _inMemoryDownloadLooksOkay;
    _Bool _hasSize;
    _Bool _hasOffset;
    _Bool _finished;
    _Bool _temporary;
    _Bool _shouldReadRawEncryptedData;
    _Bool _shouldReadAssetContentUsingClientProxy;
    _Bool _isAlreadyRegistered;
    _Bool _isReaderReadFrom;
    _Bool _isRereferencedAssetUpload;
    unsigned int _chunkCount;
    NSURL *_fileURL;
    NSNumber *_deviceID;
    NSNumber *_fileID;
    NSNumber *_generationID;
    NSFileHandle *_clientOpenedFileHandle;
    NSNumber *_modTimeInSeconds;
    unsigned long long _itemID;
    double _progress;
    unsigned long long _fileSize;
    unsigned long long _paddedFileSize;
    unsigned long long _offset;
    unsigned long long _packageIndex;
    NSString *_putPackageSectionIdentifier;
    CKAsset *_asset;
    CKPackage *_package;
    CKRecordID *_recordID;
    NSString *_recordType;
    NSString *_recordKey;
    NSData *_signature;
    NSString *_itemTypeHint;
    NSURL *_contentBaseURL;
    NSString *_owner;
    NSString *_requestor;
    NSString *_authToken;
    CKAssetDownloadPreauthorization *_downloadPreauthorization;
    NSString *_uploadReceipt;
    double _uploadReceiptExpiration;
    NSMutableArray *_sectionItems;
    NSError *_error;
    NSData *_assetKey;
    NSData *_wrappedAssetKey;
    NSData *_clearAssetKey;
    NSData *_boundaryKey;
    NSData *_referenceSignature;
    CKDMMCSItemCommandWriter *_writer;
    unsigned long long _uploadTokenExpiration;
    unsigned long long _downloadTokenExpiration;
    NSDictionary *_assetChunkerOptions;
    CKDAssetZoneKey *_assetZoneKey;
    NSURL *_constructedAssetDownloadURL;
    unsigned long long _constructedAssetEstimatedSize;
    NSString *_trackingUUID;
}

@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSNumber *deviceID;
@property (retain, nonatomic) NSNumber *fileID;
@property (retain, nonatomic) NSNumber *generationID;
@property (retain, nonatomic) NSFileHandle *clientOpenedFileHandle;
@property (retain, nonatomic) NSNumber *modTimeInSeconds;
@property (nonatomic) unsigned long long itemID;
@property (nonatomic) double progress;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) unsigned long long paddedFileSize;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned int chunkCount;
@property (nonatomic) unsigned long long packageIndex;
@property (retain, nonatomic) NSString *putPackageSectionIdentifier;
@property (retain, nonatomic) CKAsset *asset;
@property (retain, nonatomic) CKPackage *package;
@property (retain, nonatomic) CKRecordID *recordID;
@property (retain, nonatomic) NSString *recordType;
@property (retain, nonatomic) NSString *recordKey;
@property (retain, nonatomic) NSData *signature;
@property (retain, nonatomic) NSString *itemTypeHint;
@property (retain, nonatomic) NSURL *contentBaseURL;
@property (retain, nonatomic) NSString *owner;
@property (retain, nonatomic) NSString *requestor;
@property (retain, nonatomic) NSString *authToken;
@property (retain, nonatomic) CKAssetDownloadPreauthorization *downloadPreauthorization;
@property (retain, nonatomic) NSString *uploadReceipt;
@property (nonatomic) double uploadReceiptExpiration;
@property (retain, nonatomic) NSMutableArray *sectionItems;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSData *assetKey;
@property (retain, nonatomic) NSData *wrappedAssetKey;
@property (retain, nonatomic) NSData *clearAssetKey;
@property (retain, nonatomic) NSData *boundaryKey;
@property (retain, nonatomic) NSData *referenceSignature;
@property (retain, nonatomic) CKDMMCSItemCommandWriter *writer;
@property (nonatomic) _Bool inMemoryDownloadLooksOkay;
@property (nonatomic) unsigned long long uploadTokenExpiration;
@property (nonatomic) unsigned long long downloadTokenExpiration;
@property (retain, nonatomic) NSDictionary *assetChunkerOptions;
@property (retain, nonatomic) CKDAssetZoneKey *assetZoneKey;
@property (retain, nonatomic) NSURL *constructedAssetDownloadURL;
@property (nonatomic) unsigned long long constructedAssetEstimatedSize;
@property (retain, nonatomic) NSString *trackingUUID;
@property (nonatomic) _Bool hasSize;
@property (nonatomic) _Bool hasOffset;
@property (nonatomic) _Bool finished;
@property (nonatomic, getter=isTemporary) _Bool temporary;
@property (nonatomic) _Bool shouldReadRawEncryptedData;
@property (nonatomic) _Bool shouldReadAssetContentUsingClientProxy;
@property (nonatomic) _Bool isAlreadyRegistered;
@property (nonatomic) _Bool isReaderReadFrom;
@property (nonatomic) _Bool isRereferencedAssetUpload;

- (id)init;
- (id)description;
- (id)openWithError:(id *)arg1;
- (id)initWithAsset:(id)arg1;
- (id)CKPropertiesDescription;
- (id)initWithPackage:(id)arg1;
- (id)readBytesOfInMemoryAssetContentWithProxy:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 error:(id *)arg4;
- (void)setupForGetChunkKeysWithAsset:(id)arg1;
- (id)getFileSizeWithProxy:(id)arg1 error:(id *)arg2;
- (id)openWithProxy:(id)arg1 error:(id *)arg2;
- (id)getFileMetadataWithProxy:(id)arg1 fileHandle:(id)arg2 error:(id *)arg3;
- (_Bool)canBeRegistered;
- (id)_openInfo;
- (void)clearFileSize;
- (id)getFileSizeWithError:(id *)arg1;
- (id)getFileMetadataWithFileHandle:(id)arg1 error:(id *)arg2;

@end

/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray, NSDictionary, NSSet;

@interface CKFetchRecordsOperationInfo : CKDatabaseOperationInfo

{
    _Bool _isFetchCurrentUserOperation;
    _Bool _shouldFetchAssetContent;
    _Bool _shouldFetchAssetContentInMemory;
    _Bool _dropInMemoryAssetContentASAP;
    NSArray *_recordIDs;
    NSArray *_desiredKeys;
    NSDictionary *_recordIDsToETags;
    NSDictionary *_recordIDsToVersionETags;
    NSDictionary *_desiredPackageFileIndices;
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;
    NSSet *_assetFieldNamesToPublishURLs;
    unsigned long long _requestedTTL;
    unsigned long long _URLOptions;
    NSDictionary *_webSharingIdentityDataByRecordID;
}

@property (retain, nonatomic) NSArray *recordIDs;
@property (nonatomic) _Bool isFetchCurrentUserOperation;
@property (retain, nonatomic) NSArray *desiredKeys;
@property (retain, nonatomic) NSDictionary *recordIDsToETags;
@property (retain, nonatomic) NSDictionary *recordIDsToVersionETags;
@property (retain, nonatomic) NSDictionary *desiredPackageFileIndices;
@property (nonatomic) _Bool shouldFetchAssetContent;
@property (nonatomic) _Bool shouldFetchAssetContentInMemory;
@property (nonatomic) _Bool dropInMemoryAssetContentASAP;
@property (retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (retain, nonatomic) NSSet *assetFieldNamesToPublishURLs;
@property (nonatomic) unsigned long long requestedTTL;
@property (nonatomic) unsigned long long URLOptions;
@property (retain, nonatomic) NSDictionary *webSharingIdentityDataByRecordID;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

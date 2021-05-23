/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKDDownloadAssetsOperationInfo : CKDatabaseOperationInfo

{
    _Bool _shouldFetchAssetContentInMemory;
    NSArray *_assetsToDownload;
    NSArray *_packageIndexSets;
    NSArray *_assetsToDownloadInMemory;
    NSArray *_assetURLInfosToFillOut;
}

@property (nonatomic) _Bool shouldFetchAssetContentInMemory;
@property (retain, nonatomic) NSArray *assetsToDownload;
@property (retain, nonatomic) NSArray *packageIndexSets;
@property (retain, nonatomic) NSArray *assetsToDownloadInMemory;
@property (retain, nonatomic) NSArray *assetURLInfosToFillOut;

@end

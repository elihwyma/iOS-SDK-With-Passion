/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
 */

#import <Foundation/NSObject.h>

@class MAAsset, MADownloadOptions, NSString;

@protocol OS_dispatch_queue, OS_os_transaction;

@interface SUCoreMobileAsset : NSObject

{
    _Bool _downloadingAsset;
    _Bool _assetDownloaded;
    _Bool _removingAsset;
    _Bool _assetRemoved;
    id _maDelegate;
    NSString *_updateUUID;
    MAAsset *_asset;
    MADownloadOptions *_downloadOptions;
    NSObject<OS_dispatch_queue> *_clientDelegateCallbackQueue;
    NSObject<OS_dispatch_queue> *_clientCompletionQueue;
    NSObject<OS_dispatch_queue> *_maControlQueue;
    NSString *_operationName;
    CDUnknownBlockType _downloadCompletion;
    CDUnknownBlockType _removeCompletion;
    NSObject<OS_os_transaction> *_downloadAssetTransaction;
    NSObject<OS_os_transaction> *_removeAssetTransaction;
}

@property (weak, nonatomic, readonly) id maDelegate;
@property (retain, nonatomic) NSString *updateUUID;
@property (retain, nonatomic) MAAsset *asset;
@property (retain, nonatomic) MADownloadOptions *downloadOptions;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientDelegateCallbackQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientCompletionQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *maControlQueue;
@property (nonatomic) _Bool downloadingAsset;
@property (nonatomic) _Bool assetDownloaded;
@property (nonatomic) _Bool removingAsset;
@property (nonatomic) _Bool assetRemoved;
@property (retain, nonatomic) NSString *operationName;
@property (copy, nonatomic) CDUnknownBlockType downloadCompletion;
@property (copy, nonatomic) CDUnknownBlockType removeCompletion;
@property (retain, nonatomic) NSObject<OS_os_transaction> *downloadAssetTransaction;
@property (retain, nonatomic) NSObject<OS_os_transaction> *removeAssetTransaction;

- (id)description;
- (void)removeAsset:(CDUnknownBlockType)arg1;
- (id)initWithDelegate:(id)arg1 forAsset:(id)arg2 updateUUID:(id)arg3;
- (void)downloadDocumentationAssetWithPolicy:(id)arg1 withUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloadSoftwareUpdateAssetWithPolicy:(id)arg1 withUUID:(id)arg2;
- (void)removeAsset;
- (id)initWithDelegate:(id)arg1 forAsset:(id)arg2 updateUUID:(id)arg3 withCallbackQueue:(id)arg4 withCompletionQueue:(id)arg5;
- (void)downloadSoftwareUpdateAssetWithPolicy:(id)arg1 withUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_downloadAssetWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)alterDownloadOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_trackMobileAssetBegin:(id)arg1 withIdentifier:(id)arg2;
- (void)_trackMobileAssetEnd:(id)arg1 withIdentifier:(id)arg2 withResult:(long long)arg3 withError:(id)arg4;
- (void)_reportAnomaly:(id)arg1 issuingCompletion:(CDUnknownBlockType)arg2;
- (id)_updateAssetTypeName;
- (void)_cancelDownloadAndPurge;
- (void)_registerProgressAndStartDownload;
- (void)_trackMAAnomaly:(id)arg1 result:(long long)arg2 description:(id)arg3;
- (void)_reportDownloadProgress:(id)arg1;
- (void)_reportDownloadFailed:(id)arg1;
- (void)_trackMobileAssetBegin:(id)arg1;
- (void)_trackMobileAssetEnd:(id)arg1 withResult:(long long)arg2 withError:(id)arg3;
- (void)_reportDownloaded:(id)arg1;
- (void)_reportAssetRemoved;
- (void)_reportAssetRemoveFailed:(id)arg1;
- (void)_reportAnomaly:(id)arg1;
- (void)downloadDocumentationAssetWithPolicy:(id)arg1 withUUID:(id)arg2;
- (void)alterDownloadOptions:(id)arg1;

@end

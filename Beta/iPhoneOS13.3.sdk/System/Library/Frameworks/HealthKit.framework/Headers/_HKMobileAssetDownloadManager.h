/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class MADownloadOptions, NSMutableArray, NSMutableSet, NSString;

@protocol OS_dispatch_queue;

@interface _HKMobileAssetDownloadManager : NSObject

{
    NSMutableArray *_pendingOperations;
    NSMutableSet *_downloadingQueryParams;
    NSObject<OS_dispatch_queue> *_queue;
    _HKMobileAssetDownloadManager *_retainedSelf;
    _Bool _shouldQueryLocalAssetsFirst;
    _Bool _shouldAutoDownloadRemoteAssets;
    long long _maxNumberOfRetriesAllowed;
    NSString *_mobileAssetTypeName;
    CDUnknownBlockType _errorHandler;
    MADownloadOptions *_mobileAssetDownloadOptions;
    CDUnknownBlockType _mobileAssetDownloadCompletionHandler;
}

@property (nonatomic) _Bool shouldQueryLocalAssetsFirst;
@property (nonatomic) _Bool shouldAutoDownloadRemoteAssets;
@property (nonatomic) long long maxNumberOfRetriesAllowed;
@property (copy, nonatomic, readonly) NSString *mobileAssetTypeName;
@property (copy, nonatomic) CDUnknownBlockType errorHandler;
@property (copy, nonatomic) MADownloadOptions *mobileAssetDownloadOptions;
@property (copy, nonatomic) CDUnknownBlockType mobileAssetDownloadCompletionHandler;

- (void)dealloc;
- (id)description;
- (void)_queue_fetchAssetsWithLocalInformation:(_Bool)arg1 shouldRequery:(_Bool)arg2 queryParams:(id)arg3;
- (id)_generateAssetQueryFromQueryParams:(id)arg1;
- (void)_queue_fetchAssetsWithQuery:(id)arg1 onlyLocal:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_downloadAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_errorWithDomain:(id)arg1 code:(long long)arg2;
- (void)_callErrorHandlerWithError:(id)arg1;
- (void)_callDownloadCompletionHandlerWithAssets:(id)arg1 queryParams:(id)arg2;
- (id)initWithMobileAssetTypeName:(id)arg1 queue:(id)arg2;
- (void)downloadAssetsWithQueryParams:(id)arg1;
- (void)fetchAssetsWithQueryParams:(id)arg1 onlyLocal:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloadMobileAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeMobileAssets:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

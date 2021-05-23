/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCInterestToken, FCOperation, NFUnfairLock, NSDate, NSError, NSHashTable, NSString, NSURL, NTPBAsset;

@protocol FCAssetDataProvider, FCAssetHandleDelegate, OS_dispatch_group;

@interface FCAssetHandle : NSObject

{
    id <FCAssetDataProvider> _dataProvider;
    NSError *_downloadError;
    NSURL *_remoteURL;
    FCOperation *_fetchOperation;
    NSHashTable *_downloadRequests;
    NSObject<OS_dispatch_group> *_fetchGroup;
    unsigned long long _countOfPenalizedDownloadAttempts;
    NSDate *_dateOfLastDownloadAttempt;
    NFUnfairLock *_stateLock;
    id <FCAssetHandleDelegate> _delegate;
    FCInterestToken *_holdToken;
    NSString *_assetKey;
    long long _lifetimeHint;
    NSString *_rawFilePath;
    NTPBAsset *_assetMetadata;
}

@property (retain) id <FCAssetDataProvider> dataProvider;
@property (retain) NSError *downloadError;
@property (retain, nonatomic) FCOperation *fetchOperation;
@property (retain, nonatomic) NSHashTable *downloadRequests;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchGroup;
@property unsigned long long countOfPenalizedDownloadAttempts;
@property (retain) NSDate *dateOfLastDownloadAttempt;
@property (retain, nonatomic) NFUnfairLock *stateLock;
@property (retain, nonatomic) NSURL *remoteURL;
@property (weak, nonatomic) id <FCAssetHandleDelegate> delegate;
@property (retain, nonatomic) FCInterestToken *holdToken;
@property (copy, nonatomic) NSString *assetKey;
@property (nonatomic) long long lifetimeHint;
@property (copy) NSString *rawFilePath;
@property (retain) NTPBAsset *assetMetadata;
@property (copy, readonly) NSString *filePath;
@property (copy, nonatomic, readonly) NSString *uniqueKey;

- (void)dealloc;
- (id)initWithDataProvider:(id)arg1;
- (id)_downloadIfNeededWithPriority:(long long)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_canRetryDownload;
- (void)_completeFetchWithDataProvider:(id)arg1 error:(id)arg2;
- (void)_removeDownloadRequest:(id)arg1;
- (void)_revisitDownloadRequestPriorities;
- (id)downloadIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (id)downloadIfNeededWithPriority:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)downloadIfNeededWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)downloadIfNeededWithGroup:(id)arg1;
- (id)fetchDataProviderWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchDataProviderWithPriority:(long long)arg1 completion:(CDUnknownBlockType)arg2;

@end

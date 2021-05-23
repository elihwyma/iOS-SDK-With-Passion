/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PHFetchResult;

@protocol OS_dispatch_queue;

@interface PXPeopleProgressDataSource : NSObject

{
    _Bool _isFaceProcessingComplete;
    _Bool _countCacheValid;
    _Bool _faceProcessingComplete;
    unsigned long long _cachedUnlockValue;
    unsigned long long _pendingCount;
    unsigned long long _processedCount;
    unsigned long long _totalCount;
    PHFetchResult *_homeResult;
    PHFetchResult *_verifyResult;
    NSObject<OS_dispatch_queue> *_scanningProgressQueue;
    NSObject<OS_dispatch_queue> *_userInteractiveQueue;
}

@property (nonatomic) unsigned long long pendingCount;
@property (nonatomic) unsigned long long processedCount;
@property (nonatomic) unsigned long long totalCount;
@property (retain, nonatomic) PHFetchResult *homeResult;
@property (retain, nonatomic) PHFetchResult *verifyResult;
@property (readonly) NSObject<OS_dispatch_queue> *scanningProgressQueue;
@property (readonly) NSObject<OS_dispatch_queue> *userInteractiveQueue;
@property (getter=isCountCacheValid) _Bool countCacheValid;
@property (nonatomic, getter=isFaceProcessingComplete) _Bool faceProcessingComplete;
@property (nonatomic) unsigned long long cachedUnlockValue;
@property (nonatomic, readonly) unsigned long long totalAssetCount;
@property (nonatomic, readonly) unsigned long long pendingAssetCount;
@property (nonatomic, readonly) unsigned long long processedAssetCount;
@property (nonatomic, readonly) unsigned long long homeMembersCount;
@property (nonatomic, readonly) _Bool isFaceProcessingComplete;
@property (nonatomic, readonly) _Bool isPersonPromoterDone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (void)_appWillEnterForeground;
- (void)loadQueryData;
- (void)updateProgressIfNeededWithWorkBlock:(CDUnknownBlockType)arg1;
- (void)syncPeopleScanningProgress:(CDUnknownBlockType)arg1;
- (void)asyncPeopleScanningProgress:(CDUnknownBlockType)arg1;
- (double)_progressFromWorkerDictionary:(id)arg1;

@end

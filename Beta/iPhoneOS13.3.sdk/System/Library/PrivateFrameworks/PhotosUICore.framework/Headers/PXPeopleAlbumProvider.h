/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, PHPhotoLibrary, PXPeopleProgressManager, PXPeopleSectionedDataSource;

@protocol OS_dispatch_queue;

@interface PXPeopleAlbumProvider : NSObject

{
    _Bool _didInitiateReCacheRequest;
    _Bool _didInitiatePeopleCountFetchRequest;
    _Bool _didPrepareDataSource;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_cacheIsolationQueue;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    PHPhotoLibrary *_photoLibrary;
    _Atomic int _currentRequestId;
    PXPeopleSectionedDataSource *_peopleDataSource;
    PXPeopleProgressManager *_progressMgr;
    CDUnknownBlockType _requestCompletion;
    long long _cachedPeopleCount;
    NSMutableDictionary *_imageCache;
    struct CGSize _imageSize;
}

@property (nonatomic, readonly) PXPeopleSectionedDataSource *peopleDataSource;
@property (nonatomic) struct CGSize imageSize;
@property (retain, nonatomic) PXPeopleProgressManager *progressMgr;
@property (copy, nonatomic) CDUnknownBlockType requestCompletion;
@property (nonatomic) long long cachedPeopleCount;
@property _Atomic int currentRequestId;
@property (retain) NSMutableDictionary *imageCache;
@property (nonatomic, readonly) _Bool isCountAvailable;
@property (nonatomic, readonly) long long peopleCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_invalidateCache;
- (void)_appWillEnterForeground;
- (void)imageCacheDidChanged:(id)arg1;
- (void)_prepareIfNeeded;
- (void)peopleSectionedDataSourceMembersChangedNonIncrementally:(id)arg1;
- (void)peopleSectionedDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2;
- (void)requestAlbumImagesWithSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (id)peopleViewController;
- (void)_updateCachedCountIfNeeded;
- (id)_visiblePersons;
- (void)_reCacheImagesCompletion:(CDUnknownBlockType)arg1;
- (void)_asyncAddImagesToCacheWithPersons:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleRequestResult:(id)arg1 forRequestID:(_Atomic int)arg2 person:(id)arg3 atIndex:(long long)arg4 error:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (_Bool)_shouldShowInterstitialProgress;

@end

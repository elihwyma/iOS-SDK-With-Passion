/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedDataSourceManager.h>

@class NSString, PHFetchOptions, PHFetchResult, PHPhotoLibrary, PXMemoriesFeedDataSource;

@interface PXMemoriesFeedDataSourceManagerBase : PXSectionedDataSourceManager

{
    PHPhotoLibrary *_photoLibrary;
    _Bool _memoryGenerationHasStarted;
    _Bool __generatingAdditionalEntries;
    PHFetchOptions *_baseFetchOptions;
    PHFetchResult *_memoriesFetchResult;
    unsigned long long _firstUngroupedMemoryIndex;
}

@property (nonatomic, readonly) PHFetchOptions *baseFetchOptions;
@property (nonatomic, getter=_isGeneratingAdditionalEntries, setter=_setGeneratingAdditionalEntries:) _Bool _generatingAdditionalEntries;
@property (retain, nonatomic) PHFetchResult *memoriesFetchResult;
@property (nonatomic) unsigned long long firstUngroupedMemoryIndex;
@property (nonatomic, readonly) PXMemoriesFeedDataSource *dataSource;
@property (nonatomic, readonly) _Bool hasAnyMemories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)mostRecentCreationDate;
+ (id)baseFetchOptions;
+ (id)_updatedFetchResultsForMemoriesForDatasource:(id)arg1 changeDetails:(id)arg2 changeInstance:(id)arg3;
+ (id)generateEntriesFromMemories:(id)arg1 startingFromIndex:(unsigned long long)arg2 maximumNumberOfEntries:(unsigned long long)arg3 finalMemoryIndex:(out unsigned long long *)arg4;
+ (_Bool)shouldGroupTogetherMemoriesWithCreationDate:(id)arg1 andCreationDate:(id)arg2;

- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)fetchOptions;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)createInitialDataSource;
- (void)startGeneratingMemories;
- (void)generateAdditionalEntriesIfPossible;
- (void)reloadMemories:(_Bool)arg1;
- (void)handleIncrementalFetchResultChange:(id)arg1 updatedFetchResultsForMemoriesWithChangedKeyAssets:(id)arg2;
- (void)handleNonIncrementalFetchResultChange:(id)arg1;
- (void)handleChangedKeyAssetsForMemories:(id)arg1;
- (void)resetMemoriesFetchResult;
- (void)resumeLibraryUpdates;
- (void)pauseLibraryUpdates;
- (void)_clearPendingNotificationForMemory:(id)arg1;
- (void)updateCurrentMemoriesNonPendingAndNotificationStatus;

@end

/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXMemoriesFeedDataSourceManagerBase.h>

@class NSObject, NSString;

@protocol OS_dispatch_queue;

@interface PXMemoriesFeedDataSourceManager : PXMemoriesFeedDataSourceManagerBase

{
    NSObject<OS_dispatch_queue> *_privateWorkQueue;
    unsigned long long _workTag;
    _Bool __generatingAdditionalEntries;
}

@property (nonatomic, getter=_isGeneratingAdditionalEntries, setter=_setGeneratingAdditionalEntries:) _Bool _generatingAdditionalEntries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithPhotoLibrary:(id)arg1;
- (void)startGeneratingMemories;
- (void)generateAdditionalEntriesWithOldDataSource:(id)arg1 startingIndex:(unsigned long long)arg2 sync:(_Bool)arg3;
- (void)generateAdditionalEntriesIfPossible;
- (void)reloadMemories:(_Bool)arg1;
- (void)_generateAdditionalEntriesWithOldDataSource:(id)arg1 startingIndex:(unsigned long long)arg2 sync:(_Bool)arg3;
- (void)_handleFinishedGeneratingAdditionalEntriesWithNewDataSource:(id)arg1 changeDetails:(id)arg2 firstUngroupedMemoryIndex:(unsigned long long)arg3;
- (void)handleIncrementalFetchResultChange:(id)arg1 updatedFetchResultsForMemoriesWithChangedKeyAssets:(id)arg2;
- (void)handleNonIncrementalFetchResultChange:(id)arg1;
- (void)handleChangedKeyAssetsForMemories:(id)arg1;
- (unsigned long long)_indexOfEntryForMemory:(id)arg1 inSortedEntries:(id)arg2 options:(unsigned long long)arg3;
- (unsigned long long)_indexOfEntry:(id)arg1 inSortedEntries:(id)arg2 options:(unsigned long long)arg3;
- (id)objectReferenceForMemory:(id)arg1;

@end

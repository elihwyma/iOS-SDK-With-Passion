/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class MBProjectClipsLoader, NSArray, NSDictionary, NSSet, NSString, Project;

@protocol ProjectAssetManagerDelegate;

__attribute__((visibility("hidden")))
@interface ProjectAssetManager : NSObject

{
    _Bool _downloading;
    _Bool _automaticallyStartDownloads;
    _Bool _cacheRepairableEditItems;
    double _downloadProgress;
    Project *_project;
    id <ProjectAssetManagerDelegate> _delegate;
    NSDictionary *_movieMatches;
    MBProjectClipsLoader *_sharedClipsLoader;
    NSArray *_cachedRepairableEditItems;
    unsigned long long _numberOfWorkItems;
    unsigned long long _numberOfCompletedWorkItems;
    NSSet *_offlineAssetRepresentations;
}

@property (weak, nonatomic) Project *project;
@property (retain, nonatomic) NSDictionary *movieMatches;
@property (retain, nonatomic) MBProjectClipsLoader *sharedClipsLoader;
@property (nonatomic) _Bool cacheRepairableEditItems;
@property (retain, nonatomic) NSArray *cachedRepairableEditItems;
@property unsigned long long numberOfWorkItems;
@property unsigned long long numberOfCompletedWorkItems;
@property (nonatomic) double downloadProgress;
@property (nonatomic, getter=isDownloading) _Bool downloading;
@property (retain, nonatomic) NSSet *offlineAssetRepresentations;
@property (nonatomic) _Bool automaticallyStartDownloads;
@property (weak, nonatomic) id <ProjectAssetManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithProject:(id)arg1;
- (void)cancelDownloads;
- (_Bool)hasMissingAssets;
- (void)connectivityDidChange:(id)arg1;
- (void)projectDidFinishAllEditing:(id)arg1;
- (id)repairableEditItems;
- (id)editItemsMatchingCriteria:(long long)arg1 breakOnFirst:(_Bool)arg2;
- (id)assetURLsMatchingCriteria:(long long)arg1 breakOnFirst:(_Bool)arg2;
- (unsigned long long)numberOfAssetsMatchingCriteria:(long long)arg1;
- (void)downloadOfflineAssetsIfNecessary;
- (_Bool)hasOfflineAssets;
- (void)updateDownloadProgress;
- (void)_updateDownloadProgress;
- (id)predicateForDuration:(double)arg1;
- (id)predicateForCreationDate:(id)arg1 tolerance:(double)arg2;
- (id)fetchOptionsForEditItem:(id)arg1 creationDateTolerance:(double)arg2;
- (id)mismatchedEditItems;
- (id)matchingAssetsForEditItem:(id)arg1 creationDateTolerance:(double)arg2;
- (void)repairEditItems:(id)arg1;
- (id)matchLocalMovies;
- (id)matchLibraryAssets;
- (void)postProgressNotification;
- (id)filePathForAdjustedVideoIdentifierURL:(id)arg1;
- (id)projectOriginalImageForIdentifierURL:(id)arg1;
- (id)localOriginalImageForIdentifierURL:(id)arg1;
- (void)downloadStateOfAssetRepresentationDidChange:(id)arg1 previousState:(unsigned long long)arg2 currentState:(unsigned long long)arg3;
- (void)downloadOfAssetRepresentation:(id)arg1 didProgress:(double)arg2;
- (unsigned long long)numberOfMissingAssets;
- (void)hasAssetsInPhotosTrash:(CDUnknownBlockType)arg1;
- (unsigned long long)numberOfMismatchedAssets;
- (id)mismatchedDurationEditItems;
- (_Bool)hasMismatchedAssets;
- (_Bool)hasMismatchedDurationAssets;
- (_Bool)hasModifiedAssets;
- (unsigned long long)numberOfOfflineAssets;
- (id)offlineEditItems;
- (void)repairMissingAssets;
- (void)repairMismatchedAssets;
- (_Bool)hasProjectAssetForIdentifierURL:(id)arg1;
- (id)originalImageForIdentifierURL:(id)arg1;
- (id)missingEditItems;

@end

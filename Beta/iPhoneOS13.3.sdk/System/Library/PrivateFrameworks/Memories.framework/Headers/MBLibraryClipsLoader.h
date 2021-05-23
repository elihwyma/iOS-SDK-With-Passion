/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/MBClipsLoader.h>

@class NSMutableDictionary, NSRecursiveLock, NSSet, NSString, PHAssetCollection, PHFetchResult;

__attribute__((visibility("hidden")))
@interface MBLibraryClipsLoader : MBClipsLoader

{
    PHAssetCollection *_assetCollection;
    NSMutableDictionary *_identifierURLsToClipsMap;
    NSSet *_insertedAssetURLs;
    NSSet *_assetURLs;
    PHFetchResult *_fetchResult;
    NSRecursiveLock *_updateLock;
}

@property (retain) NSMutableDictionary *identifierURLsToClipsMap;
@property (retain) NSSet *insertedAssetURLs;
@property (retain) NSSet *assetURLs;
@property (retain, nonatomic) PHAssetCollection *assetCollection;
@property (retain, nonatomic) PHFetchResult *fetchResult;
@property (retain, nonatomic) NSRecursiveLock *updateLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)load;
- (void)photoLibraryDidChange:(id)arg1;
- (id)clips;
- (id)fetchAssets;
- (long long)countForAllClips;
- (id)initWithAssetCollection:(id)arg1 showOnlyFavorites:(_Bool)arg2;
- (void)addClipWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)fetchAssetURLs;
- (void)loadClipsFromURLs:(id)arg1;

@end

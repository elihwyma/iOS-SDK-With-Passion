/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class CPMemoryPool, NSMapTable, NSString, SBHIconImageCache, UIImage;

@protocol SBIconListLayout;

@interface SBFolderIconImageCache : NSObject

{
    NSMapTable *_folderIconObservers;
    NSMapTable *_cachedFolderImages;
    NSMapTable *_cachedMiniGridImages;
    UIImage *_genericMiniGridImage;
    id <SBIconListLayout> _listLayout;
    SBHIconImageCache *_iconImageCache;
    CPMemoryPool *_pool;
}

@property (nonatomic, readonly) CPMemoryPool *pool;
@property (nonatomic, readonly) id <SBIconListLayout> listLayout;
@property (retain, nonatomic) SBHIconImageCache *iconImageCache;
@property (nonatomic, readonly) unsigned long long numberOfCachedImages;
@property (nonatomic, readonly) unsigned long long numberOfCacheHits;
@property (nonatomic, readonly) unsigned long long numberOfCacheMisses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)gridCellImageOfSize:(struct CGSize)arg1 forIcon:(id)arg2 iconImageInfo:(struct SBIconImageInfo)arg3;
+ (id)imageForPageAtIndex:(unsigned long long)arg1 inFolderIcon:(id)arg2 listLayout:(id)arg3 gridCellImageProvider:(id)arg4 pool:(id)arg5;
+ (_Bool)drawTreatmentForIcon:(id)arg1 inRect:(struct CGRect)arg2;
+ (id)gridCellImageOfSize:(struct CGSize)arg1 forIconImage:(id)arg2;
+ (_Bool)needsTreatmentForIcon:(id)arg1;

- (id)init;
- (id)gridCellImageOfSize:(struct CGSize)arg1 forIcon:(id)arg2 iconImageInfo:(struct SBIconImageInfo)arg3;
- (void)folder:(id)arg1 didAddList:(id)arg2;
- (void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3;
- (void)folder:(id)arg1 didAddIcons:(id)arg2 removedIcons:(id)arg3;
- (void)folder:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
- (id)initWithListLayout:(id)arg1;
- (void)iconImageCache:(id)arg1 didUpdateImageForIcon:(id)arg2;
- (void)folderIcon:(id)arg1 containedIconImageDidUpdate:(id)arg2;
- (void)folderIcon:(id)arg1 containedIconAccessoriesDidUpdate:(id)arg2;
- (void)folderIcon:(id)arg1 containedIconLaunchEnabledDidChange:(id)arg2;
- (void)removeObserver:(id)arg1 forFolderIcon:(id)arg2;
- (void)addObserver:(id)arg1 forFolderIcon:(id)arg2;
- (id)imageForPageAtIndex:(unsigned long long)arg1 inFolderIcon:(id)arg2;
- (id)genericMiniGridImage;
- (void)informObserversOfUpdateForFolderIcon:(id)arg1;
- (id)gridCellImageForIcon:(id)arg1;
- (void)updateCachedImagesForFolderIcon:(id)arg1 afterChangeToContainedImageForIcon:(id)arg2 treatmentsOnly:(_Bool)arg3;
- (void)rebuildImagesForFolderIcon:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSHashTable, NSMutableDictionary, NSOrderedSet, NSSet, NSString, SBIcon, SBRootFolder;

@protocol SBHIconModelDelegate, SBIconModelStore;

@interface SBHIconModel : NSObject

{
    NSMutableDictionary *_leafIconsByIdentifier;
    NSMutableDictionary *_leafIdentifiersForMasqueradeIdentifier;
    NSHashTable *_folders;
    NSSet *_hiddenIconTags;
    NSSet *_visibleIconTags;
    _Bool _tagsHaveBeenSet;
    NSMutableDictionary *_alternateListLayouts;
    _Bool _ignoresIconsNotInIconState;
    _Bool _sortsIconsAlphabetically;
    _Bool _layingOut;
    _Bool _restoring;
    _Bool _allowsDownloadingIcons;
    id <SBIconModelStore> _store;
    id <SBHIconModelDelegate> _delegate;
    SBRootFolder *_rootFolder;
    NSDictionary *_desiredIconState;
    NSSet *_archivedLeafIdentifiers;
    NSOrderedSet *_desiredIconStateFlattened;
    SBIcon *_rootFolderIcon;
}

@property (copy, nonatomic) NSSet *archivedLeafIdentifiers;
@property (copy, nonatomic) NSDictionary *desiredIconState;
@property (copy, nonatomic) NSOrderedSet *desiredIconStateFlattened;
@property (nonatomic, getter=isLayingOut) _Bool layingOut;
@property (retain, nonatomic) SBIcon *rootFolderIcon;
@property (nonatomic, readonly) id <SBIconModelStore> store;
@property (weak, nonatomic) id <SBHIconModelDelegate> delegate;
@property (nonatomic, readonly) SBRootFolder *rootFolder;
@property (nonatomic, readonly) unsigned long long maxListCountForFolders;
@property (nonatomic, readonly) unsigned long long maxIconCountForDock;
@property (nonatomic, readonly) _Bool supportsDock;
@property (copy, nonatomic, readonly) NSSet *visibleIconIdentifiers;
@property (copy, nonatomic, readonly) NSSet *hiddenIconTags;
@property (copy, nonatomic, readonly) NSSet *visibleIconTags;
@property (copy, nonatomic, readonly) NSSet *leafIcons;
@property (copy, nonatomic, readonly) NSSet *currentLeafIdentifiers;
@property (copy, nonatomic, readonly) NSSet *leafIconIdentifiers;
@property (nonatomic) _Bool ignoresIconsNotInIconState;
@property (nonatomic) _Bool sortsIconsAlphabetically;
@property (nonatomic, readonly) _Bool hasDesiredIconState;
@property (copy, nonatomic, readonly) NSSet *missingDesiredIconIdentifiers;
@property (copy, nonatomic, readonly) NSDictionary *defaultIconState;
@property (copy, nonatomic, readonly) NSSet *firstPageLeafIdentifiers;
@property (nonatomic, getter=isRestoring) _Bool restoring;
@property (copy, nonatomic, readonly) NSString *localizedDefaultFolderName;
@property (copy, nonatomic, readonly) NSString *unlocalizedDefaultFolderName;
@property (nonatomic) _Bool allowsDownloadingIcons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)migratedIdentifierForLeafIdentifier:(id)arg1;

- (id)init;
- (id)initWithStore:(id)arg1;
- (void)layout;
- (void)layoutIfNeeded;
- (void)addIcon:(id)arg1;
- (id)_iconState;
- (void)folder:(id)arg1 didAddList:(id)arg2;
- (void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3;
- (void)folder:(id)arg1 didAddIcons:(id)arg2 removedIcons:(id)arg3;
- (void)folder:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
- (id)desiredIndexPathForIconWithIdentifier:(id)arg1;
- (void)checkModelConsistency;
- (void)saveIconStateIfNeeded;
- (void)clearDesiredIconState;
- (id)leafIconForIdentifier:(id)arg1;
- (_Bool)isIconVisible:(id)arg1;
- (id)addDownloadingIconWithDataSource:(id)arg1;
- (void)removeIconForIdentifier:(id)arg1;
- (id)downloadingIconForBundleIdentifier:(id)arg1;
- (void)removeIcon:(id)arg1;
- (void)clearDesiredIconStateIfPossible;
- (id)desiredFolderCreationActionsForInsertingNewIcon:(id)arg1;
- (id)indexPathForNewIcon:(id)arg1 isDesignatedLocation:(_Bool *)arg2 replaceExistingIconAtIndexPath:(id *)arg3;
- (_Bool)deleteIconStateWithOptions:(unsigned long long)arg1;
- (void)clearDesiredIconStateWithOptions:(unsigned long long)arg1;
- (unsigned long long)maxIconCountForListInFolderClass:(Class)arg1;
- (id)localizedFolderNameForDefaultDisplayName:(id)arg1;
- (void)reloadIcons;
- (void)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3;
- (void)addIconsOfClass:(Class)arg1 toSet:(id)arg2;
- (id)iconsOfClass:(Class)arg1;
- (void)removeAllIcons;
- (void)loadAllIcons;
- (id)leafIdentifiersForMasqueradeIdentifier:(id)arg1;
- (id)prioritizedMasqueradeIconForIdentifier:(id)arg1;
- (id)indexPathInRootFolder:(id)arg1 forNewIcon:(id)arg2 isDesignatedLocation:(_Bool *)arg3 replaceExistingIconAtIndexPath:(id *)arg4;
- (id)_adjustedDesiredIndexPathInRootFolder:(id)arg1 forIconWithIdentifier:(id)arg2;
- (id)_adjustedPlatformIndexPathInRootFolder:(id)arg1 forIcon:(id)arg2;
- (_Bool)shouldAvoidPlacingIconOnFirstPage:(id)arg1;
- (id)_adjustedIndexPathInRootFolder:(id)arg1 withinIconState:(id)arg2 forIconWithIdentifier:(id)arg3;
- (void)enumerateMasqueradeLeafIdentifiersUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateDownloadingIconsUsingBlock:(CDUnknownBlockType)arg1;
- (id)modernizeRootArchive:(id)arg1;
- (id)iconState;
- (_Bool)deleteIconState;
- (void)didUnarchiveMetadata:(id)arg1;
- (void)checkModelConsistencyInRootFolder:(id)arg1;
- (id)iconModelMetadata;
- (void)_saveIconState;
- (void)saveDesiredIconState;
- (void)_rootFolder:(id)arg1 moveIconsToFirstPage:(id)arg2 placeBumpedIconsSomewhereNice:(id)arg3;
- (void)enumerateLeafIconsUsingBlock:(CDUnknownBlockType)arg1;
- (void)adjustIconsToShow:(id)arg1 iconsToHide:(id)arg2 afterChangeToVisibleIconTags:(id)arg3 hiddenIconTags:(id)arg4;
- (void)willLayout;
- (id)_unarchiveRootFolder;
- (_Bool)_canAddDownloadingIconForBundleID:(id)arg1;
- (_Bool)isTrackingIcon:(id)arg1;
- (unsigned long long)maxRowCountForListInRootFolderWithInterfaceOrientation:(long long)arg1;
- (unsigned long long)maxColumnCountForListInRootFolderWithInterfaceOrientation:(long long)arg1;
- (id)leafIconsForIdentifiers:(id)arg1;
- (_Bool)isMasqueradedLeafIdentifier:(id)arg1;
- (id)indexPathForIconInPlatformState:(id)arg1;
- (void)importDesiredIconState:(id)arg1;
- (void)setVisibilityOfIconsWithVisibleTags:(id)arg1 hiddenTags:(id)arg2;
- (id)addDownloadingIconForBundleID:(id)arg1 withIdentifier:(id)arg2;
- (void)setLeafIconsByIdentifier:(id)arg1;
- (void)setLeafIdentifiersForMasqueradeIdentifier:(id)arg1;
- (void)setForecastedLeavesAndMasqueradesOnIconModel:(id)arg1 includingMissingIcons:(id)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardHome/SBHIconModel.h>

@protocol SBIconModelApplicationDataSource;

@interface SBIconModel : SBHIconModel

{
    _Bool _iconsHaveBeenLoadedOnce;
    _Bool _createsIconsForInternalApps;
    id <SBIconModelApplicationDataSource> _applicationDataSource;
    _Bool _allowsWebClips;
}

@property (nonatomic, readonly) id <SBIconModelApplicationDataSource> applicationDataSource;
@property (nonatomic) _Bool allowsWebClips;

+ (id)migratedIdentifierForLeafIdentifier:(id)arg1;

- (void)dealloc;
- (id)description;
- (void)localeChanged;
- (_Bool)isIconVisible:(id)arg1;
- (void)loadAllIcons;
- (_Bool)shouldAvoidPlacingIconOnFirstPage:(id)arg1;
- (id)modernizeRootArchive:(id)arg1;
- (void)adjustIconsToShow:(id)arg1 iconsToHide:(id)arg2 afterChangeToVisibleIconTags:(id)arg3 hiddenIconTags:(id)arg4;
- (void)willLayout;
- (id)indexPathForIconInPlatformState:(id)arg1;
- (id)applicationWithBundleIdentifier:(id)arg1;
- (id)applicationIconForBundleIdentifier:(id)arg1;
- (id)bookmarkIconForWebClipIdentifier:(id)arg1;
- (id)addBookmarkIconForWebClip:(id)arg1;
- (id)exportState:(_Bool)arg1;
- (id)exportPendingState:(_Bool)arg1 includeMissingIcons:(_Bool)arg2;
- (id)exportFlattenedState:(_Bool)arg1 includeMissingIcons:(_Bool)arg2;
- (void)addIconForApplication:(id)arg1;
- (id)initWithStore:(id)arg1 applicationDataSource:(id)arg2;
- (_Bool)importState:(id)arg1;
- (id)placeholdersByDisplayID;
- (void)_noteApplicationIconImageChanged:(id)arg1;
- (void)addIconForApplication:(id)arg1 force:(_Bool)arg2;
- (_Bool)shouldAvoidCreatingIconForApplication:(id)arg1;
- (id)addDownloadingIconForDownload:(id)arg1;
- (id)expectedIconForDisplayIdentifier:(id)arg1 createIfNecessary:(_Bool)arg2;
- (void)_replaceAppIconsWithDownloadingIcons:(id)arg1;
- (void)_replaceAppIconsWithDownloadingIcons;
- (id)forecastedLayoutForIconState:(id)arg1 includeMissingIcons:(_Bool)arg2;
- (id)_applicationIcons;
- (id)expectedIconForDisplayIdentifier:(id)arg1;

@end

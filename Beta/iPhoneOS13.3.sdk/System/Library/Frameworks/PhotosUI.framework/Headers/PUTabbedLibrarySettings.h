/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXSettings.h>

@interface PUTabbedLibrarySettings : PXSettings

{
    _Bool _enablePhotosTab;
    _Bool _enableMemoriesTab;
    _Bool _enableSharedTab;
    _Bool _enableAlbumsTab;
    _Bool _enableCuratedLibraryTab;
    _Bool _enableForYouTab;
    _Bool _enableSearchTab;
    _Bool _enableConsolidatedAlbumsTab;
    _Bool _sidebarEnabled;
}

@property (nonatomic) _Bool enablePhotosTab;
@property (nonatomic) _Bool enableMemoriesTab;
@property (nonatomic) _Bool enableSharedTab;
@property (nonatomic) _Bool enableAlbumsTab;
@property (nonatomic) _Bool enableCuratedLibraryTab;
@property (nonatomic) _Bool enableForYouTab;
@property (nonatomic) _Bool enableSearchTab;
@property (nonatomic) _Bool enableConsolidatedAlbumsTab;
@property (nonatomic, getter=isSidebarEnabled) _Bool sidebarEnabled;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;
- (id)allTabs;
- (long long)countOfEnabledTabs;

@end

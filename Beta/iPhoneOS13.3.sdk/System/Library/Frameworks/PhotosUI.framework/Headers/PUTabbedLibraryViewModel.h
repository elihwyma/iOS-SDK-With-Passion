/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, PUTabbedLibrarySettings, PXPreloadScheduler;

@interface PUTabbedLibraryViewModel : NSObject

{
    NSArray *_tabInfos;
    PUTabbedLibrarySettings *_settings;
    PXPreloadScheduler *_preloadScheduler;
}

@property (retain, nonatomic) PUTabbedLibrarySettings *settings;
@property (retain, nonatomic) PXPreloadScheduler *preloadScheduler;
@property (retain, nonatomic) NSArray *tabInfos;

+ (id)viewModelWithDefaultParameters;

- (id)initWithSettings:(id)arg1 preloadScheduler:(id)arg2;
- (id)tabInfoForContentMode:(int)arg1;
- (_Bool)tabbedLibraryViewController:(id)arg1 shouldShowTabForContentMode:(int)arg2;
- (_Bool)_shouldShowCuratedLibraryTabForTabbedLibraryViewController:(id)arg1;
- (_Bool)_shouldShowPhotosTabForTabbedLibraryViewController:(id)arg1;
- (_Bool)_shouldShowAllPhotosTabForTabbedLibraryViewController:(id)arg1;
- (_Bool)_shouldShowMemoriesTabForTabbedLibraryViewController:(id)arg1;
- (_Bool)_shouldShowForYouTabForTabbedLibraryViewController:(id)arg1;
- (_Bool)_shouldShowSearchTabForTabbedLibraryViewController:(id)arg1;
- (_Bool)_shouldShowSharedTabForTabbedLibraryViewController:(id)arg1;
- (_Bool)_ppt_shouldShowBlankTab;
- (_Bool)_ppt_shouldShowNilTab;
- (id)tabbedLibraryViewController:(id)arg1 tabBarItemForContentMode:(int)arg2;

@end

/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PrototypeToolsUI/PTUISettingsController.h>

@class UINavigationController, _UISettings;

__attribute__((visibility("hidden")))
@interface _PUSettingsController : PTUISettingsController

{
    UINavigationController *_searchNavigationController;
    _UISettings *_rootSettings;
    CDUnknownBlockType _onViewDidDisappearBlock;
    CDUnknownBlockType _dismissButtonFactory;
    CDUnknownBlockType _searchBarButtonItemFactory;
}

@property (nonatomic, readonly) UINavigationController *searchNavigationController;
@property (nonatomic, readonly) _UISettings *rootSettings;
@property (copy, nonatomic) CDUnknownBlockType onViewDidDisappearBlock;
@property (copy, nonatomic) CDUnknownBlockType dismissButtonFactory;
@property (copy, nonatomic) CDUnknownBlockType searchBarButtonItemFactory;

- (void)viewDidDisappear:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)initWithRootSettings:(id)arg1;
- (void)callOnViewDidDisappearBlock;
- (void)handleSearchBarButtonItem:(id)arg1;
- (void)_invalidateNavigationItems;
- (void)_updateNavigationItemOfViewController:(id)arg1;

@end

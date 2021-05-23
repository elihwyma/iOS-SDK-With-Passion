/*
 Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

#import <MPUFoundation/MPUDataSourceViewController.h>

@class NSMutableDictionary;

@interface MPUAdaptiveCollectionViewController : MPUDataSourceViewController

{
    struct UIEdgeInsets _contentInsetAdditions;
    struct UIEdgeInsets _scrollIndicatorInsetsAdditions;
    NSMutableDictionary *_sizeClassToClassMap;
}

@property (retain, nonatomic) NSMutableDictionary *sizeClassToClassMap;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)reloadData;
- (void)viewDidLayoutSubviews;
- (id)contentScrollView;
- (void)dataSourceDidInvalidate;
- (id)_childDataSourceViewController;
- (void)_updateViewControllerIfNecessary;
- (id)_indexPathOfTopVisibleItem;
- (void)_applyNewContentInsetAdditions:(struct UIEdgeInsets)arg1 withExistingContentInsetAdditions:(struct UIEdgeInsets)arg2 toScrollView:(id)arg3;
- (void)_applyNewScrollIndicatorInsetsAdditions:(struct UIEdgeInsets)arg1 withExistingScrollIndicatorInsetsAdditions:(struct UIEdgeInsets)arg2 toScrollView:(id)arg3;
- (void)_restoreTopVisibleIndexPath:(id)arg1;
- (void)setViewControllerClass:(Class)arg1 forHorizontalSizeClass:(long long)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUILibraryFetchControllerViewController.h>

#import <VideosUI/Swift-Protocol.h>

@class NSIndexPath, NSString, UICollectionView, VUILibraryStackView;

__attribute__((visibility("hidden")))
@interface VUILibraryStackViewController : VUILibraryFetchControllerViewController <Swift>

{
    _Bool _requiresRelayout;
    NSIndexPath *_focusedIndexPath;
    VUILibraryStackView *_stackView;
    UICollectionView *_stackCollectionView;
}

@property (nonatomic, readonly) VUILibraryStackView *stackView;
@property (nonatomic, readonly) UICollectionView *stackCollectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)scrollToTop;
- (void)_updateNavigationBarPadding;
- (void)_invalidateLayouts;

@end

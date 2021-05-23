/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VideosExtrasTemplateViewController.h>

#import <VideosUI/Swift-Protocol.h>

@class NSArray, NSIndexPath, NSLayoutConstraint, NSString, UICollectionView, UICollectionViewFlowLayout, UIView, VideosExtrasMainMenuSectionMetrics;

@protocol UICollectionViewDelegate;

__attribute__((visibility("hidden")))
@interface VideosExtrasMainTemplateViewController : VideosExtrasTemplateViewController <Swift>

{
    VideosExtrasMainMenuSectionMetrics *_mainMenuMetrics;
    UICollectionViewFlowLayout *_collectionViewLayout;
    NSLayoutConstraint *_collectionViewHeightConstraint;
    UICollectionView *_menuBarCollectionView;
    _Bool _hasHadMenuSelection;
    UIView *_menuBarView;
    id <UICollectionViewDelegate> _didSelectDelegate;
}

@property (nonatomic, readonly) double collectionViewHeight;
@property (nonatomic, readonly) NSIndexPath *indexPathOfFeaturedItem;
@property (nonatomic, readonly) UIView *menuBarView;
@property (weak, nonatomic) id <UICollectionViewDelegate> didSelectDelegate;
@property (nonatomic, readonly) NSArray *mainMenuItemElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)_menuItems;
- (void)_configureCell:(id)arg1 forIndexPath:(id)arg2;
- (id)templateElement;
- (_Bool)showsPlaceholder;
- (void)setCollectionViewHeight:(double)arg1;
- (void)_prepareLayout;
- (void)_startBackgroundAudio;
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;
- (long long)numberOfItemsForSectionMetrics:(id)arg1;
- (void)_recalculateSizes;
- (struct CGSize)sectionMetrics:(id)arg1 sizeForItemAtIndex:(long long)arg2 withFontDescriptor:(id)arg3;
- (void)_dynamicTypeChanged;
- (void)_prepareCollectionView;
- (id)_textElementAtIndex:(long long)arg1;
- (_Bool)_isFeatureItemAtIndexPath:(id)arg1;
- (_Bool)_collectionView:(id)arg1 indexPathShouldDisplayAsSelected:(id)arg2;

@end

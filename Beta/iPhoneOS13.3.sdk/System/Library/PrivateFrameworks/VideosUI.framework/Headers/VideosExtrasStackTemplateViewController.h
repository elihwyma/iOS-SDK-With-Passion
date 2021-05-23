/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VideosExtrasTemplateViewController.h>

#import <VideosUI/Swift-Protocol.h>

@class NSMutableDictionary, NSString, UICollectionView, UICollectionViewFlowLayout, VideosExtrasBannerController;

__attribute__((visibility("hidden")))
@interface VideosExtrasStackTemplateViewController : VideosExtrasTemplateViewController <Swift>

{
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    NSMutableDictionary *_viewControllers;
    NSMutableDictionary *_sizes;
    VideosExtrasBannerController *_bannerViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)contentScrollView;
- (id)templateElement;
- (_Bool)showsPlaceholder;
- (void)_dynamicTypeDidChange;
- (void)_prepareLayout;
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;
- (id)_viewControllerForIndexPath:(id)arg1;
- (id)sectionStyle;

@end

/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/MiroAssetSuggestionsCollectionViewController.h>

@interface MiroKeyAssetSuggestionsCollectionsViewController : MiroAssetSuggestionsCollectionViewController

{
    _Bool _viewInitialLayout;
}

@property _Bool viewInitialLayout;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)_customizeKeyAssetPickerLayoutWithSize:(struct CGSize)arg1;

@end

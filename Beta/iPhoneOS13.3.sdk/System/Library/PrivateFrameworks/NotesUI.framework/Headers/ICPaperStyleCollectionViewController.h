/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UICollectionViewController.h>

@class ICPaperStyleHeaderView, NSString;

@interface ICPaperStyleCollectionViewController : UICollectionViewController

{
    _Bool _forPreferences;
    _Bool _needsUpdateItemSpacing;
    double _itemSpacing;
    double _itemSpacingVertical;
    ICPaperStyleHeaderView *_headerViewMeasuringCell;
    struct CGSize _itemSize;
    struct UIEdgeInsets _sectionInsets;
}

@property (nonatomic) _Bool forPreferences;
@property (nonatomic) _Bool needsUpdateItemSpacing;
@property (nonatomic) double itemSpacing;
@property (nonatomic) double itemSpacingVertical;
@property (nonatomic) struct CGSize itemSize;
@property (nonatomic) struct UIEdgeInsets sectionInsets;
@property (retain, nonatomic) ICPaperStyleHeaderView *headerViewMeasuringCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)updateSettings;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)indexPathFromSetting:(id)arg1;
- (void)updateItemSpacing;
- (id)indexPathForInitialSelection;
- (id)settingFromIndexPath:(id)arg1;
- (unsigned long long)paperStyleTypeFromIndexPath:(id)arg1;
- (id)indexPathFromPaperStyleType:(unsigned long long)arg1;
- (id)titleForHeaderView;
- (id)initWithLargeIcons:(_Bool)arg1 forPreferences:(_Bool)arg2;

@end

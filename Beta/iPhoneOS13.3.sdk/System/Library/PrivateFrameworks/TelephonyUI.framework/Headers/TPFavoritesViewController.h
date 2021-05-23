/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UICollectionViewController.h>

@class CNContactFormatter, NSArray, NSIndexSet, TPFavoritesController, UIView;

@interface TPFavoritesViewController : UICollectionViewController

{
    _Bool _contentUnavailable;
    TPFavoritesController *_favoritesController;
    UIView *_contentUnavailableView;
    NSArray *_favoritesEntries;
    CNContactFormatter *_contactFormatter;
    NSIndexSet *_sections;
}

@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (retain, nonatomic) NSIndexSet *sections;
@property (nonatomic) _Bool contentUnavailable;
@property (retain, nonatomic) UIView *contentUnavailableView;
@property (nonatomic, readonly) TPFavoritesController *favoritesController;
@property (copy, nonatomic) NSArray *favoritesEntries;

+ (id)avatarViewControllerSettings;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)didReceiveMemoryWarning;
- (void)handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)handleFavoritesControllerFavoritesEntriesDidChangeNotification:(id)arg1;
- (void)setContentUnavailable:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setFavoritesEntries:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)relayoutCollectionView;
- (void)refreshView;
- (void)postCNContactsClientDidDisplayFavoritesNotification;
- (id)favoritesEntryAtIndex:(long long)arg1;
- (_Bool)useAccessibileLayout;
- (struct CGSize)accessibleCellSizeFor:(id)arg1 layout:(id)arg2;
- (struct CGSize)cellSizeFor:(id)arg1 layout:(id)arg2;
- (id)cellHeightToFitWidgetContainedCollectionView:(id)arg1 layout:(id)arg2;
- (void)refreshViewAnimated:(_Bool)arg1;
- (void)setFavoritesController:(id)arg1;

@end

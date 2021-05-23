/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKCollectionDataSource.h>

@class NSArray, NSMutableDictionary, UISearchBar;

@interface GKDashboardMultiplayerPickerSearchDataSource : GKCollectionDataSource

{
    _Bool _searching;
    NSMutableDictionary *_playerStates;
    UISearchBar *_searchBar;
    NSArray *_allPlayers;
    NSArray *_searchPlayers;
    long long _maxSelectable;
}

@property (copy, nonatomic) NSArray *allPlayers;
@property (copy, nonatomic) NSArray *searchPlayers;
@property (nonatomic, readonly) NSArray *selectedPlayers;
@property (nonatomic, readonly) long long maxSelectable;
@property (retain, nonatomic) NSMutableDictionary *playerStates;
@property (nonatomic, getter=isSearching) _Bool searching;
@property (weak, nonatomic) UISearchBar *searchBar;

- (void)scrollViewWillBeginDragging:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)itemCount;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)preferredCollectionHeight;
- (void)setupCollectionView:(id)arg1;
- (id)searchKeyForSection:(long long)arg1;
- (void)searchTextHasChanged;
- (id)initWithSearchPlayers:(id)arg1 maxSelectable:(long long)arg2;

@end

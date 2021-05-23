/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIViewController;

@interface GKCollectionDataSource : NSObject

{
    _Bool _onDarkBackground;
    _Bool _useStandardHeaders;
    UIViewController *_presentationViewController;
    NSString *_analyticsKey;
    NSString *_searchText;
    NSArray *_searchTerms;
}

@property (retain, nonatomic) NSArray *searchTerms;
@property (nonatomic) UIViewController *presentationViewController;
@property (nonatomic) _Bool onDarkBackground;
@property (nonatomic, readonly) long long itemCount;
@property (nonatomic) _Bool useStandardHeaders;
@property (nonatomic, readonly) NSString *sectionHeaderText;
@property (nonatomic, readonly) double preferredCollectionHeight;
@property (nonatomic) NSString *analyticsKey;
@property (nonatomic, readonly) _Bool isSearching;
@property (copy, nonatomic) NSString *searchText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didFocusItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnfocusItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)dismissViewController:(id)arg1;
- (void)setupCollectionView:(id)arg1;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)itemForIndexPath:(id)arg1;
- (_Bool)searchMatchesItem:(id)arg1 inSection:(long long)arg2;
- (id)searchKeyForSection:(long long)arg1;
- (void)searchTextHasChanged;
- (void)showViewController:(id)arg1 popoverSourceView:(id)arg2;
- (id)headerTextForSection:(long long)arg1;

@end

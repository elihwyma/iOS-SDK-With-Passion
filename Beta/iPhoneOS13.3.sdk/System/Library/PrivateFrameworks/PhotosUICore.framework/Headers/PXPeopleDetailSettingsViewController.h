/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXPeoplePersonDataSource, PXPeopleSuggestionDataSource, UICollectionView;

@interface PXPeopleDetailSettingsViewController : UIViewController <Swift>

{
    PXPeoplePersonDataSource *_dataSource;
    UICollectionView *_collectionView;
    PXPeopleSuggestionDataSource *_suggestionDataSource;
}

@property (retain) PXPeoplePersonDataSource *dataSource;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) PXPeopleSuggestionDataSource *suggestionDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)peopleDataSourceMembersChanged:(id)arg1;
- (void)peopleDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2;
- (void)loadSuggestionsForPerson:(id)arg1;

@end

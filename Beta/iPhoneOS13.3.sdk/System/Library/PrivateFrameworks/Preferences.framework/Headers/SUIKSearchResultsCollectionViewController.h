/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UIKit/UICollectionViewController.h>

@class NSObject, UICollectionViewDiffableDataSource, _SUIKSearchResultsUpdateOperation;

@protocol SUIKSearchResultsCollectionViewControllerDelegate;

@interface SUIKSearchResultsCollectionViewController : UICollectionViewController

{
    NSObject<SUIKSearchResultsCollectionViewControllerDelegate> *_delegate;
    UICollectionViewDiffableDataSource *_diffableDataSource;
    _SUIKSearchResultsUpdateOperation *_updateOperation;
}

@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource;
@property (retain, nonatomic) _SUIKSearchResultsUpdateOperation *updateOperation;
@property (weak, nonatomic) NSObject<SUIKSearchResultsCollectionViewControllerDelegate> *delegate;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)setResults:(id)arg1;
- (void)selectNextSearchResult;
- (void)selectPreviousSearchResult;
- (double)iconWidth;
- (void)showSelectedSearchResult;
- (void)searchQueryStarted;
- (void)searchQueryFoundItems:(id)arg1;
- (void)searchQueryCompleted;
- (void)_selectAndScrollToIndexPath:(id)arg1;

@end

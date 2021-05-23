/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Foundation/NSOperation.h>

@class NSArray, NSDiffableDataSourceSnapshot, UICollectionViewDiffableDataSource;

@protocol SUIKSearchResultsCollectionViewControllerDelegate;

@interface _SUIKSearchResultsUpdateOperation : NSOperation

{
    NSArray *_results;
    UICollectionViewDiffableDataSource *_diffableDataSource;
    id <SUIKSearchResultsCollectionViewControllerDelegate> _delegate;
    NSDiffableDataSourceSnapshot *_currentSnapshot;
}

@property (weak, nonatomic) NSArray *results;
@property (weak, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource;
@property (weak, nonatomic) id <SUIKSearchResultsCollectionViewControllerDelegate> delegate;
@property (retain, nonatomic) NSDiffableDataSourceSnapshot *currentSnapshot;

- (void)main;
- (id)initWithResults:(id)arg1 diffableDataSource:(id)arg2 delegate:(id)arg3;

@end

/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIView, WFGiphySessionManager;

@protocol WFGiphyViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WFGiphyViewController : UIViewController

{
    _Bool _selectMultiple;
    NSString *_query;
    id <WFGiphyViewControllerDelegate> _delegate;
    UIView *_emptyListView;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    WFGiphySessionManager *_sessionManager;
    NSArray *_objects;
}

@property (weak, nonatomic, readonly) UIView *emptyListView;
@property (weak, nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, readonly) UICollectionViewFlowLayout *collectionViewLayout;
@property (nonatomic, readonly) WFGiphySessionManager *sessionManager;
@property (copy, nonatomic) NSArray *objects;
@property (nonatomic) _Bool selectMultiple;
@property (copy, nonatomic) NSString *query;
@property (weak, nonatomic) id <WFGiphyViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)done;
- (void)loadView;
- (_Bool)accessibilityPerformEscape;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UICollectionViewController.h>

@class NSArray, NSString, NSTimer, PXPeopleBootstrapContext, PXPeopleSuggestionManager, PXPeopleSwipeSelectionManager;

@protocol PXPeopleFlowViewControllerActionDelegate;

@interface PXPeopleBootstrapConfirmationViewController : UICollectionViewController

{
    _Bool _suggestionsPresented;
    _Bool _willAppear;
    id _context;
    id <PXPeopleFlowViewControllerActionDelegate> actionDelegate;
    PXPeopleSwipeSelectionManager *_swipeSelectionManager;
    PXPeopleSuggestionManager *_suggestionManager;
    NSArray *_currentSuggestions;
    NSTimer *_loadingDelayTimer;
    unsigned long long _viewState;
    unsigned long long _type;
    struct CGSize _lastSize;
}

@property (retain, nonatomic) PXPeopleSwipeSelectionManager *swipeSelectionManager;
@property (nonatomic, readonly) PXPeopleSuggestionManager *suggestionManager;
@property (nonatomic, readonly) PXPeopleBootstrapContext *bootstrapContext;
@property (nonatomic, readonly) NSArray *presentationStatuses;
@property (retain, nonatomic) NSArray *currentSuggestions;
@property (retain, nonatomic) NSTimer *loadingDelayTimer;
@property (nonatomic) _Bool suggestionsPresented;
@property (nonatomic) unsigned long long viewState;
@property (nonatomic) unsigned long long type;
@property (nonatomic) _Bool willAppear;
@property (nonatomic) struct CGSize lastSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id context;
@property (nonatomic, readonly) struct CGSize preferredSize;
@property (weak, nonatomic) id <PXPeopleFlowViewControllerActionDelegate> actionDelegate;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct UIEdgeInsets)_sectionInsets;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)willTransitionToNextInFlow;
- (void)_updateNavigationBarForCurrentTraitCollection;
- (id)swipeSelectionManager:(id)arg1 indexPathSetFromIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(struct CGPoint)arg2;
- (void)willLoadMoreSuggestionsForSuggestionManager:(id)arg1;
- (void)suggestionManager:(id)arg1 hasNewSuggestionsAvailable:(id)arg2;
- (void)noMoreSuggestionsAvailableForSuggestionManager:(id)arg1;
- (id)_localizedPromptString;
- (id)initialSelectedIndexPathsForSwipeSelectionManager:(id)arg1;
- (void)swipeSelectionManager:(id)arg1 didSelectIndexPaths:(id)arg2;
- (id)initWithContext:(id)arg1 dataSource:(id)arg2;
- (void)_updateViewWithViewState:(unsigned long long)arg1;
- (void)_finishedPresentingSuggestions;
- (void)_evaluateIfSuggestionPresentationFinished;
- (void)_markSkippedSuggestions;
- (void)_noSuggestionsFound;
- (void)_toggleConfirmedForCollectionViewCell:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_startLoadingTimer;
- (void)_updateHeaderContent;
- (double)_wonkyAutomaticContentOffset;
- (void)_badgeLoadingCells;
- (id)_sortedIndexPathsForVisibleCells;
- (void)_cacheCurrentSuggestions;
- (void)updateImageForCell:(id)arg1 withPerson:(id)arg2;
- (void)keyFaceUpdated:(id)arg1;

@end

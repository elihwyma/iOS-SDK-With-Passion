/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSString, SearchUIBackgroundView, SearchUIReplicatorView, SearchUIResultTableViewController, SearchUISearchField, UIView;

@protocol SFFeedbackListener, SearchUIResultsViewDelegate;

@interface SearchUIResultsViewController : UIViewController

{
    _Bool _immediatelyShowCardForSingleResult;
    _Bool _shouldMonitorScrollingPastBottomOfContent;
    CDUnknownBlockType tableViewWillUpdateHandler;
    CDUnknownBlockType tableViewDidUpdateHandler;
    CDUnknownBlockType cellWillDisplayHandler;
    NSArray *_sections;
    unsigned long long _style;
    SearchUIResultTableViewController *_resultTableViewController;
    SearchUIReplicatorView *_replicatorView;
    NSString *_previousSearchString;
    id <SearchUIResultsViewDelegate> _delegate;
}

@property (retain, nonatomic) SearchUIBackgroundView *view;
@property (retain, nonatomic) SearchUIResultTableViewController *resultTableViewController;
@property (retain, nonatomic) SearchUIReplicatorView *replicatorView;
@property (retain, nonatomic) NSString *previousSearchString;
@property (weak, nonatomic) id <SearchUIResultsViewDelegate> delegate;
@property (nonatomic) _Bool shouldHideResultsUnderKeyboard;
@property (nonatomic) _Bool shouldMonitorScrollingPastBottomOfContent;
@property (nonatomic, readonly) double distanceToTopOfAppIcons;
@property (nonatomic) _Bool shortenTopFloatingHeader;
@property (retain, nonatomic) UIView *footerView;
@property (nonatomic) _Bool showsVerticalScrollIndicator;
@property (nonatomic) _Bool shouldUseInsetRoundedSections;
@property (nonatomic) _Bool shouldUseStandardSectionInsets;
@property (nonatomic) _Bool immediatelyShowCardForSingleResult;
@property (retain, nonatomic) SearchUISearchField *searchField;
@property (retain, nonatomic) NSString *queryString;
@property (retain, nonatomic) NSArray *sections;
@property (weak, nonatomic) id <SFFeedbackListener> feedbackListener;
@property (nonatomic) unsigned long long style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) CDUnknownBlockType cellWillDisplayHandler;
@property (copy, nonatomic) CDUnknownBlockType tableViewWillUpdateHandler;
@property (copy, nonatomic) CDUnknownBlockType tableViewDidUpdateHandler;

- (id)init;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)contentScrollView;
- (void)didTap;
- (void)performScrollTestWithHandlerForFirstScrollCompletion:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performScrollTestWithCompletion:(CDUnknownBlockType)arg1;
- (id)currentTableModel;
- (void)toggleShowMoreForSection:(unsigned long long)arg1;
- (struct CGRect)scrollToIndexPath:(id)arg1;
- (void)tapAtIndexPath:(id)arg1;
- (void)purgeMemory;
- (void)restoreResultsIfNeeded;
- (void)replaceResult:(id)arg1 withResult:(id)arg2;
- (void)didScrollPastBottomOfContent;
- (void)updateWithResultSections:(id)arg1 resetScrollPoint:(_Bool)arg2;
- (void)updateWithResultSections:(id)arg1;
- (void)didBeginScrolling;
- (void)performReturnKeyPressAction;

@end

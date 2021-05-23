/*
 Image: /System/Library/PrivateFrameworks/LoginUILogViewer.framework/LoginUILogViewer
 */

#import <Foundation/NSObject.h>

@class LUILogContentViewController, LUILogFilterViewController, LUILogViewerAssistiveTouch, LUILogViewerView, NSArray, NSDate, NSMutableArray, NSMutableSet, NSString, UIPageViewController, UIPanGestureRecognizer, UIView;

@protocol LUILogViewerControllerDelegate;

@interface LUILogViewerController : NSObject

{
    _Bool _isStreaming;
    _Bool _isFetchingLogs;
    _Bool _outsideKeyboardIsShowing;
    id <LUILogViewerControllerDelegate> _delegate;
    LUILogViewerView *_logViewerView;
    LUILogViewerAssistiveTouch *_assistiveTouch;
    UIView *_baseView;
    LUILogContentViewController *_logContentViewController;
    LUILogFilterViewController *_logFilterViewController;
    UIPageViewController *_pageViewController;
    NSArray *_predicates;
    double _logInterval;
    NSDate *_lastLogDate;
    NSDate *_firstLogDate;
    NSMutableSet *_logMinutesSet;
    NSMutableArray *_logMinutesArray;
    NSArray *_highlightRanges;
    long long _currentHighlightIndex;
    UIPanGestureRecognizer *_panGesture;
}

@property (retain, nonatomic) LUILogViewerView *logViewerView;
@property (retain, nonatomic) LUILogViewerAssistiveTouch *assistiveTouch;
@property (weak, nonatomic) UIView *baseView;
@property (retain, nonatomic) LUILogContentViewController *logContentViewController;
@property (retain, nonatomic) LUILogFilterViewController *logFilterViewController;
@property (retain, nonatomic) UIPageViewController *pageViewController;
@property (retain, nonatomic) NSArray *predicates;
@property (nonatomic) double logInterval;
@property (retain, nonatomic) NSDate *lastLogDate;
@property (retain, nonatomic) NSDate *firstLogDate;
@property (retain, nonatomic) NSMutableSet *logMinutesSet;
@property (retain, nonatomic) NSMutableArray *logMinutesArray;
@property (nonatomic) _Bool isStreaming;
@property (retain, nonatomic) NSArray *highlightRanges;
@property (nonatomic) long long currentHighlightIndex;
@property (nonatomic) _Bool isFetchingLogs;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) _Bool outsideKeyboardIsShowing;
@property (weak, nonatomic) id <LUILogViewerControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (void)_updateHighlight;
- (void)setup;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)_stopStreaming;
- (void)_moveElementsToView:(id)arg1;
- (id)_getLogsFromDate:(id)arg1 predicate:(id)arg2 duplicateHandler:(CDUnknownBlockType)arg3;
- (id)_attributedLogStringFrom:(id)arg1 fontSize:(double)arg2;
- (void)_updateLogFromLastTime;
- (void)_presentLogViewerView;
- (void)_cleanupHighlight;
- (void)_increaseCurrentHighlightIndex;
- (void)_setupInitialHighlight;
- (void)assistiveTouchButtonTapped:(id)arg1;
- (id)orderedViewControllers;
- (void)_dismissLogViewerView;
- (void)showLogContentPage;
- (void)_cleanupLogs;
- (void)showLogFilterPage;
- (void)_decreaseCurrentHighlightIndex;
- (void)_grabLogAndUpdateTextView;
- (void)_startStreamLog;
- (struct _NSRange)_searchRangeForDate:(id)arg1 inText:(id)arg2;
- (_Bool)_performSearch:(id)arg1;
- (void)logViewerViewCloseButtonTapped:(id)arg1;
- (void)logViewerViewLogButtonTapped:(id)arg1;
- (void)logViewerViewClearButtontapped:(id)arg1;
- (void)logViewerFilterButtonTapped:(id)arg1;
- (void)logViewerLeftCaretButtonTapped:(id)arg1;
- (void)logViewerRightCaretButtonTapped:(id)arg1;
- (void)logFilterViewController:(id)arg1 didAddPredicates:(id)arg2;
- (void)logFilterViewController:(id)arg1 didDeletePredicate:(id)arg2;
- (id)currentPredicates:(id)arg1;
- (void)logFilterViewControllerApplyButtonTapped:(id)arg1;
- (_Bool)logFilterViewControllerShouldAllowTextEditing:(id)arg1;
- (void)logContentViewController:(id)arg1 didSelectLogOptionWithTimeInterval:(double)arg2;
- (void)logContentViewController:(id)arg1 didSelectDateForLog:(id)arg2;
- (id)logContentViewControllerLogStartDate:(id)arg1;
- (id)logContentViewControllerLogEndDate:(id)arg1;

@end

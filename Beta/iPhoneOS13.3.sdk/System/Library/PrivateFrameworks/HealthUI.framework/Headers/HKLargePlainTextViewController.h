/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKViewController.h>

@class HKIncrementalSearchBar, NSData, NSMutableArray, NSOperationQueue, NSString, UIColor, UITextView, _IncrementalSearchOperation;

@interface HKLargePlainTextViewController : HKViewController

{
    NSData *_data;
    NSString *_dataAsString;
    UITextView *_textView;
    HKIncrementalSearchBar *_incrementalSearchBar;
    NSOperationQueue *_searchQueue;
    _IncrementalSearchOperation *_currentSearch;
    NSMutableArray *_currentRanges;
    long long _currentSearchItem;
    UIColor *_normalTextViewBackground;
    UIColor *_selectedTextViewBackground;
    UIColor *_currentSelectionBackground;
    UIColor *_otherSelectionBackground;
    double _currentKeyboardHeight;
}

@property (nonatomic, readonly) NSString *dataAsString;
@property (nonatomic, readonly) UITextView *textView;
@property (nonatomic, readonly) HKIncrementalSearchBar *incrementalSearchBar;
@property (nonatomic, readonly) NSOperationQueue *searchQueue;
@property (retain) _IncrementalSearchOperation *currentSearch;
@property (retain, nonatomic) NSMutableArray *currentRanges;
@property long long currentSearchItem;
@property (nonatomic, readonly) UIColor *normalTextViewBackground;
@property (nonatomic, readonly) UIColor *selectedTextViewBackground;
@property (nonatomic, readonly) UIColor *currentSelectionBackground;
@property (nonatomic, readonly) UIColor *otherSelectionBackground;
@property (nonatomic) double currentKeyboardHeight;
@property (readonly) NSData *data;

- (id)initWithData:(id)arg1;
- (void)loadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)addSearchResults:(struct IncrementalSearchResultsDefn)arg1;
- (void)cancelCurrentSearch;
- (void)resetSearchResults;
- (id)searchBodyWithAttributes;
- (void)searchBarDoneAction:(id)arg1;
- (id)_standardPlainTextFont;
- (id)_selectionAttributes:(_Bool)arg1;
- (void)resetCurrentSearchItem;
- (void)_updateCurrentSearchItem:(unsigned long long)arg1 hitsChanged:(_Bool)arg2 resetSearch:(_Bool)arg3;
- (void)finishSearchResults;
- (_Bool)_updateMatchDisplayString:(unsigned long long)arg1 numMatches:(unsigned long long)arg2;
- (void)endSearchResults;
- (void)incrementalSearchOperation:(id)arg1;
- (void)searchBarUpAction:(id)arg1;
- (void)searchBarDownAction:(id)arg1;
- (void)searchBarChangeSearch:(id)arg1 searchString:(id)arg2;
- (void)startIncrementalSearch;

@end

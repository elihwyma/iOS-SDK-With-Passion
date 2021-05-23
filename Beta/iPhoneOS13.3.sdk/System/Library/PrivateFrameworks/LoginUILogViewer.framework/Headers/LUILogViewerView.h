/*
 Image: /System/Library/PrivateFrameworks/LoginUILogViewer.framework/LoginUILogViewer
 */

#import <UIKitCore/UIView.h>

@class UIButton, UILabel, UISearchBar, UIStackView;

@protocol LUILogViewerViewDelegate;

@interface LUILogViewerView : UIView

{
    id <LUILogViewerViewDelegate> _delegate;
    UIView *_contentHolderView;
    UIButton *_filterButton;
    UISearchBar *_searchBar;
    UIButton *_closeButton;
    UIView *_filterView;
    UIButton *_logButton;
    UIButton *_clearButton;
    UIStackView *_buttonStack;
    UILabel *_searchResultLabel;
    UIButton *_leftCaretButton;
    UIButton *_rightCaretButton;
}

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *contentHolderView;
@property (retain, nonatomic) UIView *filterView;
@property (retain, nonatomic) UIButton *logButton;
@property (retain, nonatomic) UIButton *clearButton;
@property (retain, nonatomic) UIStackView *buttonStack;
@property (retain, nonatomic) UIButton *filterButton;
@property (retain, nonatomic) UISearchBar *searchBar;
@property (retain, nonatomic) UILabel *searchResultLabel;
@property (retain, nonatomic) UIButton *leftCaretButton;
@property (retain, nonatomic) UIButton *rightCaretButton;
@property (weak, nonatomic) id <LUILogViewerViewDelegate> delegate;

- (void)_setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)closeButtonTapped:(id)arg1;
- (id)_createCloseButton;
- (void)switchClearButtonTitle:(_Bool)arg1;
- (void)resetSearchResultLabel;
- (void)highlightFilterButton:(_Bool)arg1;
- (void)highlightLogButton:(_Bool)arg1;
- (void)updateSearchResultLabelWithTotalResult:(unsigned long long)arg1 currentIndex:(unsigned long long)arg2;
- (id)_createLogButton;
- (id)_createClearButton;
- (id)_createFilterButton;
- (id)_createSearchBar;
- (id)_createSearchResultLabel;
- (id)_createLeftCaretButton;
- (id)_createRightCaretButton;
- (void)_highlightButton:(id)arg1 highlight:(_Bool)arg2;
- (id)_createButtonWithTitle:(id)arg1 action:(SEL)arg2;
- (void)logButtonTapped:(id)arg1;
- (void)clearButtonTapped:(id)arg1;
- (void)filterButtonTapped:(id)arg1;
- (void)leftCaretButtonTapped:(id)arg1;
- (void)rightCaretButtonTapped:(id)arg1;

@end

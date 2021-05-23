/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUITableViewCell.h>

@class NSArray, SearchUIAppIconsRowView, TLKAuxilliaryTextView, UIView;

@interface SearchUIMultiResultTableViewCell : SearchUITableViewCell

{
    SearchUIAppIconsRowView *_topRow;
    SearchUIAppIconsRowView *_bottomRow;
    NSArray *_results;
    long long _indexOfSelectedKeyboardIcon;
    TLKAuxilliaryTextView *_folderLabelView;
    UIView *_highlightBackgroundView;
}

@property (retain, nonatomic) SearchUIAppIconsRowView *topRow;
@property (retain, nonatomic) SearchUIAppIconsRowView *bottomRow;
@property (retain, nonatomic) NSArray *results;
@property (nonatomic) long long indexOfSelectedKeyboardIcon;
@property (retain, nonatomic) TLKAuxilliaryTextView *folderLabelView;
@property (retain, nonatomic) UIView *highlightBackgroundView;

+ (unsigned long long)numberOfColumnsForCurrentOrientation;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)isExpandable;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (void)updateWithRowModel:(id)arg1;
- (_Bool)canSetupKeyboardHandler;
- (void)setupKeyboardHandler;
- (_Bool)navigateKeyboardRight;
- (void)returnKeyPressed;
- (_Bool)navigateKeyboardLeft;
- (_Bool)navigateKeyboardUp;
- (_Bool)navigateKeyboardDown;
- (void)removeKeyboardHandler;
- (id)visibleResults;
- (void)updateExpanded:(_Bool)arg1;
- (unsigned long long)numberOfVisibleResults;
- (double)appRowSpacing;
- (void)removeHighlightedIconState;

@end

/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUITableViewCell.h>

@class TLKNumericalResultView;

@interface SearchUICenteredResultTableViewCell : SearchUITableViewCell

@property (retain, nonatomic) TLKNumericalResultView *sizingContainer;

- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (void)updateWithRowModel:(id)arg1;

@end

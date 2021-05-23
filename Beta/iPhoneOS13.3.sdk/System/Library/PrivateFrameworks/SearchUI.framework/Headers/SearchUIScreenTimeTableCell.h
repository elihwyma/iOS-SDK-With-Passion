/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUITableViewCell.h>

@class TLKLabel;

@interface SearchUIScreenTimeTableCell : SearchUITableViewCell

{
    TLKLabel *_label;
}

@property (retain, nonatomic) TLKLabel *label;

- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (void)updateWithRowModel:(id)arg1;
- (id)visibleResults;

@end

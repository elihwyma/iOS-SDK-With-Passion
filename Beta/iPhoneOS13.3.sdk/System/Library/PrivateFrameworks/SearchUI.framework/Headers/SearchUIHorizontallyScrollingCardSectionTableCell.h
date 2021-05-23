/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUITableViewCell.h>

@class SearchUIHorizontallyScrollingContainerView;

@interface SearchUIHorizontallyScrollingCardSectionTableCell : SearchUITableViewCell

@property (retain, nonatomic) SearchUIHorizontallyScrollingContainerView *sizingContainer;

- (void)setDelegate:(id)arg1;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;

@end

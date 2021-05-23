/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUITableViewCell.h>

@class SearchUICardSectionView;

@interface SearchUICardSectionTableCell : SearchUITableViewCell

@property (retain, nonatomic) SearchUICardSectionView *sizingContainer;
@property (readonly) SearchUICardSectionView *cardSectionView;

- (void)setDelegate:(id)arg1;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (void)updateChevronVisible:(_Bool)arg1 leaveSpaceForChevron:(_Bool)arg2;
- (void)updateWithRowModel:(id)arg1;

@end

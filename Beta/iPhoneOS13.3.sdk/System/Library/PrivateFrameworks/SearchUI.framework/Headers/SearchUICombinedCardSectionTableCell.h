/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUITableViewCell.h>

@class SearchUICombinedCardSectionsView;

@interface SearchUICombinedCardSectionTableCell : SearchUITableViewCell

@property (retain, nonatomic) SearchUICombinedCardSectionsView *sizingContainer;

- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (void)updateWithRowModel:(id)arg1;

@end

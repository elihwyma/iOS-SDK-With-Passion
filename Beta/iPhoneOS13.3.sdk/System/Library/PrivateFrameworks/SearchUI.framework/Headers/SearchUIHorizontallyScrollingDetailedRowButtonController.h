/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUIHorizontallyScrollingContainerButtonController.h>

@class SearchUIDetailedView;

@interface SearchUIHorizontallyScrollingDetailedRowButtonController : SearchUIHorizontallyScrollingContainerButtonController

{
    SearchUIDetailedView *_detailedView;
}

@property (retain, nonatomic) SearchUIDetailedView *detailedView;

- (double)spacing;
- (id)setupContentView;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setCardSectionRowModel:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUIHorizontallyScrollingButtonController.h>

@class TLKProminenceView, TLKTextButton;

@interface SearchUIHorizontallyScrollingMoreResultsButtonController : SearchUIHorizontallyScrollingButtonController

{
    TLKProminenceView *_backgroundView;
}

@property (retain) TLKTextButton *button;
@property (retain) TLKProminenceView *backgroundView;

- (id)init;
- (void)setCardSectionRowModel:(id)arg1;

@end

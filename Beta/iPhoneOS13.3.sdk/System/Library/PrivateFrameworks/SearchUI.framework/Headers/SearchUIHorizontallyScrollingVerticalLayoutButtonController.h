/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUIHorizontallyScrollingContainerButtonController.h>

@class SearchUIImageView, SearchUILabel;

@interface SearchUIHorizontallyScrollingVerticalLayoutButtonController : SearchUIHorizontallyScrollingContainerButtonController

{
    SearchUIImageView *thumbnailView;
    SearchUILabel *_titleLabel;
    SearchUILabel *_footnoteLabel;
}

@property (retain, nonatomic) SearchUILabel *titleLabel;
@property (retain, nonatomic) SearchUILabel *footnoteLabel;

- (double)spacing;
- (id)thumbnailView;
- (void)setThumbnailView:(id)arg1;
- (id)setupContentView;
- (void)setCardSectionRowModel:(id)arg1;

@end

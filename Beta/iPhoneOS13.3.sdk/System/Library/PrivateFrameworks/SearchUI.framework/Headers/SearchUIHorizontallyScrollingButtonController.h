/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <Foundation/NSObject.h>

@class SearchUICardSectionRowModel, SearchUIImageView, UIButton, UIView;

@protocol SearchUIFeedbackDelegate;

@interface SearchUIHorizontallyScrollingButtonController : NSObject

{
    _Bool _scrollsWithoutStoppingAtBoundaries;
    _Bool _wantsSeparators;
    UIView *_view;
    UIButton *_button;
    double _width;
    double _spacing;
    SearchUIImageView *_thumbnailView;
    id <SearchUIFeedbackDelegate> _feedbackDelegate;
    SearchUICardSectionRowModel *_cardSectionRowModel;
}

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) UIButton *button;
@property (nonatomic) double width;
@property (nonatomic) double spacing;
@property (nonatomic) _Bool scrollsWithoutStoppingAtBoundaries;
@property (nonatomic) _Bool wantsSeparators;
@property (retain, nonatomic) SearchUIImageView *thumbnailView;
@property (weak, nonatomic) id <SearchUIFeedbackDelegate> feedbackDelegate;
@property (retain, nonatomic) SearchUICardSectionRowModel *cardSectionRowModel;

@end

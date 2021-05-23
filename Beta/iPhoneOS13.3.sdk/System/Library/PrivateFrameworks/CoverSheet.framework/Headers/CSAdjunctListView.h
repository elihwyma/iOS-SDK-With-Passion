/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSCoverSheetViewBase.h>

@class UIStackView;

@interface CSAdjunctListView : CSCoverSheetViewBase

{
    UIStackView *_stackView;
}

@property (retain, nonatomic) UIStackView *stackView;

- (void)layoutSubviews;
- (void)_layoutStackView;

@end

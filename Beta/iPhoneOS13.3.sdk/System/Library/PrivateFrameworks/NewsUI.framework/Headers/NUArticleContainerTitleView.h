/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <UIKit/UIView.h>

@class NUPageStyle, NUTitleView;

@interface NUArticleContainerTitleView : UIView

{
    NUTitleView *_titleView;
    NUPageStyle *_pageStyle;
}

@property (nonatomic, readonly) NUTitleView *titleView;
@property (retain, nonatomic) NUPageStyle *pageStyle;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)applyPageStyle:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class NSString, UIColor, UILabel, UIPageControl;

@protocol WFNumericPageControlDelegate;

@interface WFNumericPageControl : UIView

{
    _Bool _usesBoldText;
    long long _currentPage;
    long long _numberOfPages;
    id <WFNumericPageControlDelegate> _delegate;
    UIColor *_selectedPageTintColor;
    UIColor *_deselectedPageTintColor;
    UIPageControl *_pageControl;
    UILabel *_pageLabel;
}

@property (weak, nonatomic) UIPageControl *pageControl;
@property (weak, nonatomic) UILabel *pageLabel;
@property (nonatomic) long long currentPage;
@property (nonatomic) long long numberOfPages;
@property (weak, nonatomic) id <WFNumericPageControlDelegate> delegate;
@property (retain, nonatomic) UIColor *selectedPageTintColor;
@property (retain, nonatomic) UIColor *deselectedPageTintColor;
@property (nonatomic) _Bool usesBoldText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)updateControls;
- (void)adjustableLabelRequestedIncrement:(id)arg1;
- (void)adjustableLabelRequestedDecrement:(id)arg1;
- (void)pageControlValueChanged:(id)arg1;

@end

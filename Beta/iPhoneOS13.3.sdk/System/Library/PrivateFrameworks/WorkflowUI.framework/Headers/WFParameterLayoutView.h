/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class UIColor;

@protocol WFParameterLayoutViewDelegate;

@interface WFParameterLayoutView : UIView

{
    _Bool _selectable;
    _Bool _highlighted;
    id <WFParameterLayoutViewDelegate> _delegate;
    UIColor *_normalBackgroundColor;
    UIColor *_highlightedBackgroundColor;
}

@property (nonatomic, getter=isSelectable) _Bool selectable;
@property (nonatomic, readonly, getter=isHighlighted) _Bool highlighted;
@property (weak, nonatomic) id <WFParameterLayoutViewDelegate> delegate;
@property (retain, nonatomic) UIColor *normalBackgroundColor;
@property (retain, nonatomic) UIColor *highlightedBackgroundColor;

- (id)accessibilityElements;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)unhighlight;
- (void)highlight;
- (void)updateBackgroundColor;
- (void)fadeOutHighlight;

@end

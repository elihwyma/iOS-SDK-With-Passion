/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUIReusableFooterView.h>

@class NSString, SiriUIKeyline, SiriUISnippetViewController, UIButton;

@protocol SiriUIActionableFooterViewDelegate;

@interface SiriUIActionableFooterView : SiriUIReusableFooterView

{
    UIButton *_button;
    SiriUIKeyline *_keyline;
    _Bool _hasKeyline;
    SiriUISnippetViewController *_snippetViewController;
    id <SiriUIActionableFooterViewDelegate> _delegate;
}

@property (weak, nonatomic) id <SiriUIActionableFooterViewDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) _Bool hasKeyline;

+ (double)defaultHeight;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)edgeInsets;
- (void)_buttonTapped:(id)arg1;
- (id)snippetViewController;
- (void)setSnippetViewController:(id)arg1;

@end

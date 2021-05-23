/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUIReusableFooterView.h>

@class SAUIConfirmationOptions, SiriUIContentButton, SiriUIKeyline, SiriUISnippetViewController, UIButton;

@interface SiriUIReusableConfirmationFooterView : SiriUIReusableFooterView

{
    SiriUIKeyline *_verticalKeyline;
    SiriUIContentButton *_cancelButton;
    SiriUIContentButton *_confirmButton;
    SiriUISnippetViewController *_snippetViewController;
    SAUIConfirmationOptions *_confirmationOptions;
}

@property (retain, nonatomic) SAUIConfirmationOptions *confirmationOptions;
@property (nonatomic, readonly) UIButton *cancelButton;
@property (nonatomic, readonly) UIButton *confirmButton;

+ (double)defaultHeight;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)edgeInsets;
- (id)snippetViewController;
- (void)setSnippetViewController:(id)arg1;

@end

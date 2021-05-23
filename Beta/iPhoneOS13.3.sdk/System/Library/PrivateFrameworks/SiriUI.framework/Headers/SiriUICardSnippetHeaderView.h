/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUIReusableHeaderView.h>

@class SiriUIContentLabel;

@interface SiriUICardSnippetHeaderView : SiriUIReusableHeaderView

{
    SiriUIContentLabel *_titleLabel;
}

+ (double)defaultHeight;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)_edgeInsets;
- (void)configureWithTitle:(id)arg1;

@end

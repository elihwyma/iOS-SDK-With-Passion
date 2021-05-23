/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIScrollView.h>

@class MFComposeSubjectView, MFMailComposeHeaderView;

@interface _MFMailComposePlaceholderView : UIScrollView

{
    MFMailComposeHeaderView *_toField;
    MFMailComposeHeaderView *_multiView;
    MFComposeSubjectView *_subjectView;
}

- (void)setSubject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

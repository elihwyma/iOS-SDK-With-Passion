/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <UIKit/UIView.h>

@class NSString, NSURL, UITextView;

@interface WFHyperlinkFooterView : UIView

{
    UITextView *_textView;
    NSString *_text;
    NSURL *_URL;
    struct _NSRange _linkRange;
    id _target;
    SEL _action;
}

@property (retain) NSString *text;
@property struct _NSRange linkRange;
@property (weak) id target;
@property SEL action;
@property (retain) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (double)preferredHeightForWidth:(double)arg1;
- (void)_linkify;
- (struct UIEdgeInsets)textInsets;

@end

/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewHeaderFooterView.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSString, NSURL, UITextView;

@protocol WFTableViewFooterLinkViewDelegate;

@interface WFTableViewFooterLinkView : UITableViewHeaderFooterView <Swift>

{
    id <WFTableViewFooterLinkViewDelegate> _delegate;
    NSString *_text;
    NSURL *_URL;
    UITextView *_textView;
    struct _NSRange _linkRange;
}

@property (nonatomic, readonly) UITextView *textView;
@property (weak, nonatomic) id <WFTableViewFooterLinkViewDelegate> delegate;
@property (copy, nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) struct _NSRange linkRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)tintColorDidChange;
- (id)initWithReuseIdentifier:(id)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)setText:(id)arg1 URL:(id)arg2;
- (void)setText:(id)arg1 URL:(id)arg2 linkRange:(struct _NSRange)arg3;
- (void)updateLinkColor;

@end

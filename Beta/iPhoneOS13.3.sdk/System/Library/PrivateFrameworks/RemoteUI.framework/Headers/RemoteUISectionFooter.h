/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import <UIKit/UIView.h>

@class NSString, NSURL, RUILinkLabel, UIButton, UILabel;

@protocol RUITableFooterDelegate;

@interface RemoteUISectionFooter : UIView

{
    RUILinkLabel *_linkLabel;
    _Bool _usesCustomTextAlignment;
    id <RUITableFooterDelegate> _delegate;
    NSURL *_linkURL;
    CDUnknownBlockType _linkAction;
}

@property (weak, nonatomic) id <RUITableFooterDelegate> delegate;
@property (retain, nonatomic) NSURL *linkURL;
@property (copy, nonatomic) CDUnknownBlockType linkAction;
@property (nonatomic, readonly) RUILinkLabel *linkLabel;
@property (nonatomic, readonly) UILabel *textLabel;
@property (nonatomic, readonly) UIButton *linkButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setTextColor:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithAttributes:(id)arg1;
- (void)setText:(id)arg1 attributes:(id)arg2;
- (double)footerHeightForWidth:(double)arg1 inView:(id)arg2;
- (double)footerHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (void)_linkPressed;

@end

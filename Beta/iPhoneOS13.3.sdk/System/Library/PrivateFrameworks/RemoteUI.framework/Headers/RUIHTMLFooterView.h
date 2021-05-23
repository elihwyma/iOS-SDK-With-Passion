/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import <UIKit/UIView.h>

@class NSString, NSURL, RUIWebContainerView;

@protocol RUITableFooterDelegate;

@interface RUIHTMLFooterView : UIView

{
    RUIWebContainerView *_webContainerView;
    id <RUITableFooterDelegate> _delegate;
    NSURL *_baseURL;
}

@property (weak, nonatomic) id <RUITableFooterDelegate> delegate;
@property (retain, nonatomic) NSURL *baseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithAttributes:(id)arg1;
- (void)setText:(id)arg1 attributes:(id)arg2;
- (void)webContainerView:(id)arg1 didClickLinkWithURL:(id)arg2;
- (double)footerHeightForWidth:(double)arg1 inView:(id)arg2;
- (double)footerHeightForWidth:(double)arg1 inTableView:(id)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <UIKitCore/_UINavigationBarTitleView.h>

@class LPLinkView, NSLayoutConstraint;

@interface _UIActivityContentTitleView : _UINavigationBarTitleView

{
    LPLinkView *_linkView;
    NSLayoutConstraint *_linkTrailingAnchor;
}

@property (retain, nonatomic) NSLayoutConstraint *linkTrailingAnchor;
@property (retain, nonatomic) LPLinkView *linkView;

- (void)updateConstraints;
- (void)contentDidChange;

@end

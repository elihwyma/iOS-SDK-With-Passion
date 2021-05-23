/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CKComposeNavbarCanvasViewController, CKComposeNavbarManagerContentView, CKNavbarCanvasViewController, UIButton, UIView;

__attribute__((visibility("hidden")))
@interface CKComposeNavbarManager : NSObject

{
    CKComposeNavbarManagerContentView *_contentView;
    CKComposeNavbarCanvasViewController *_defaultNavbarCanvasViewController;
    CKNavbarCanvasViewController *_avatarNavbarCanvasViewController;
    UIView *_customStatusBackgroundView;
}

@property (retain, nonatomic) CKComposeNavbarManagerContentView *contentView;
@property (retain, nonatomic) CKComposeNavbarCanvasViewController *defaultNavbarCanvasViewController;
@property (retain, nonatomic) CKNavbarCanvasViewController *avatarNavbarCanvasViewController;
@property (retain, nonatomic) UIView *customStatusBackgroundView;
@property (nonatomic, readonly) UIButton *cancelButton;

- (id)init;
- (void)dealloc;
- (void)updateTitle:(id)arg1 animated:(_Bool)arg2;
- (void)_setupDefaultNavbarCanvasViewController;
- (void)_setupAvatarNavBarViewControllerWithConversation:(id)arg1 shouldShowBackButtonView:(_Bool)arg2;
- (void)setCanvasViewControllerDelegate:(id)arg1;
- (void)commitTransitionAnimationWithConversation:(id)arg1 shouldShowBackButtonView:(_Bool)arg2;

@end

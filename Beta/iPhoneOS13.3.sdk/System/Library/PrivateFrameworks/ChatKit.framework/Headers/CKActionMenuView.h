/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class CKActionMenuController, NSArray, UIBlurEffect, UIVisualEffectView;

@interface CKActionMenuView : UIView

{
    _Bool _collapsed;
    _Bool _touchInside;
    NSArray *_actionMenuItems;
    unsigned long long _defaultActionIndex;
    CKActionMenuController *_actionMenuController;
    NSArray *_presentationActionMenuItems;
    unsigned long long _presentationDefaultActionIndex;
    UIVisualEffectView *_blurView;
    UIBlurEffect *_blurEffect;
    struct CGPoint _presentationTargetPosition;
    struct CGRect _presentationTargetBounds;
}

@property (copy, nonatomic) NSArray *actionMenuItems;
@property (nonatomic) unsigned long long defaultActionIndex;
@property (copy, nonatomic) NSArray *presentationActionMenuItems;
@property (nonatomic) unsigned long long presentationDefaultActionIndex;
@property (nonatomic) struct CGRect presentationTargetBounds;
@property (nonatomic) struct CGPoint presentationTargetPosition;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIBlurEffect *blurEffect;
@property (nonatomic, getter=isCollapsed) _Bool collapsed;
@property (nonatomic, getter=isTouchInside) _Bool touchInside;
@property (weak, nonatomic) CKActionMenuController *actionMenuController;

+ (void)collapseAnimation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;

- (id)description;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setActionMenuItems:(id)arg1 defaultActionIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (id)initWithActionMenuItems:(id)arg1 defaultActionIndex:(unsigned long long)arg2 blurEffectStyle:(long long)arg3;
- (void)actionMenuGestureRecognized:(id)arg1;
- (void)setCollapsed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)configureForPresentationAtPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;
- (id)actionMenuItemAtPoint:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)presentActionMenuViewFromPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissActionMenuViewAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;

@end

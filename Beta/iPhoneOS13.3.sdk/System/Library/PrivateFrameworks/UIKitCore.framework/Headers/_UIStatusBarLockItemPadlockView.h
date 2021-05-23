/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString, UIImageView, UIStatusBarLockItemView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarLockItemPadlockView : UIView

{
    UIImageView *_bodyView;
    UIImageView *_shackleView;
    CDUnknownBlockType _completionBlock;
    UIStatusBarLockItemView *_owner;
}

@property (retain, nonatomic) UIImageView *bodyView;
@property (retain, nonatomic) UIImageView *shackleView;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (weak, nonatomic) UIStatusBarLockItemView *owner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 owner:(id)arg2;
- (void)animateUnlockCompletionBlock:(CDUnknownBlockType)arg1;
- (void)jiggleCompletionBlock:(CDUnknownBlockType)arg1;

@end

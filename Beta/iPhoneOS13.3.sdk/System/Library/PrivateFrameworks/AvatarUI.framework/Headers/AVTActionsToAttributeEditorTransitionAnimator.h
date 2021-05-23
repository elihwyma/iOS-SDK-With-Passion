/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTUIEnvironment, NSString;

@protocol AVTViewLayoutInfo;

@interface AVTActionsToAttributeEditorTransitionAnimator : NSObject

{
    AVTUIEnvironment *_environment;
    id <AVTViewLayoutInfo> _avtViewLayoutInfo;
}

@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, readonly) id <AVTViewLayoutInfo> avtViewLayoutInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct UIEdgeInsets)adjustedSafeAreaInsetsForView:(id)arg1;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)initWithAVTViewLayoutInfo:(id)arg1 environment:(id)arg2;

@end

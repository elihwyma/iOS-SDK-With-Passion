/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <Foundation/NSObject.h>

@class CCUIContentModuleContainerViewController, NSString, UITargetedPreview, UIViewPropertyAnimator;

@interface CCUIContentModuleContainerTransition : NSObject

{
    _Bool _appearanceTransition;
    CCUIContentModuleContainerViewController *_viewController;
    struct CGRect _contentRestOverrideFrame;
}

@property (weak, nonatomic) CCUIContentModuleContainerViewController *viewController;
@property (nonatomic, getter=isAppearanceTransition) _Bool appearanceTransition;
@property (nonatomic) struct CGRect contentRestOverrideFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) UITargetedPreview *sourcePreview;
@property (nonatomic, readonly) UIViewPropertyAnimator *customAnimator;

- (void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)transitionDidEnd:(_Bool)arg1;

@end

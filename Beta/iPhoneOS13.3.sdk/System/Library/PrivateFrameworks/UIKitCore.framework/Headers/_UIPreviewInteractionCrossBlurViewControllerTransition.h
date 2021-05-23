/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UITargetedPreview;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionCrossBlurViewControllerTransition : NSObject

{
    struct CGRect _initialPlatterRect;
    struct CGRect _finalPlatterRect;
    _Bool _dismissTransition;
}

@property (nonatomic, getter=isDismissTransition) _Bool dismissTransition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) UITargetedPreview *sourcePreview;

- (void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)transitionDidEnd:(_Bool)arg1;
- (void)prepareDisappearanceTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)prepareAppearanceTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)performDisappearanceTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)performAppearanceTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;

@end

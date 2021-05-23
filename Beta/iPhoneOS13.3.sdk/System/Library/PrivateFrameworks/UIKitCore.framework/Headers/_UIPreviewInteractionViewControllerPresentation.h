/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIPreviewPresentationController, UIView, UIViewController;

@protocol _UIPreviewInteractionViewControllerTransition;

@interface _UIPreviewInteractionViewControllerPresentation : NSObject

{
    _Bool _shouldUseCATransitions;
    _Bool _shouldFlipFromAndToViewsForDisappearanceTransition;
    _Bool _shouldUpdateFromViewBeforePresentation;
    _Bool _shouldPresentAutomatically;
    UIViewController *_viewController;
    UIView *_customContainerView;
    UIPreviewPresentationController *_presentationController;
    id <_UIPreviewInteractionViewControllerTransition> _appearanceTransition;
    id <_UIPreviewInteractionViewControllerTransition> _disappearanceTransition;
    CDUnknownBlockType _privatePresentationBlock;
    CDUnknownBlockType _privatePresentationCompletionBlock;
    UIView *_customViewForTouchContinuation;
}

@property (retain, nonatomic) UIViewController *viewController;
@property (nonatomic) _Bool shouldUseCATransitions;
@property (nonatomic) _Bool shouldFlipFromAndToViewsForDisappearanceTransition;
@property (copy, nonatomic) CDUnknownBlockType privatePresentationBlock;
@property (copy, nonatomic) CDUnknownBlockType privatePresentationCompletionBlock;
@property (nonatomic) _Bool shouldUpdateFromViewBeforePresentation;
@property (weak, nonatomic) UIView *customViewForTouchContinuation;
@property (nonatomic) _Bool shouldPresentAutomatically;
@property (retain, nonatomic) UIView *customContainerView;
@property (retain, nonatomic) UIPreviewPresentationController *presentationController;
@property (retain, nonatomic) id <_UIPreviewInteractionViewControllerTransition> appearanceTransition;
@property (retain, nonatomic) id <_UIPreviewInteractionViewControllerTransition> disappearanceTransition;

- (id)initWithViewController:(id)arg1;
- (void)presentViewController;
- (void)_completeViewControllerPresentationImmediately;

@end

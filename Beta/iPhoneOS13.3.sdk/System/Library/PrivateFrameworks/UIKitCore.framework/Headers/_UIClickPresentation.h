/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIPresentationController, UIView, UIViewController;

@protocol _UIClickPresentationTransition;

@interface _UIClickPresentation : NSObject

{
    UIViewController *_viewController;
    UIPresentationController *_presentationController;
    UIView *_customContainerView;
    UIView *_customViewForTouchContinuation;
    id <_UIClickPresentationTransition> _appearanceTransition;
    id <_UIClickPresentationTransition> _disappearanceTransition;
}

@property (nonatomic, readonly) UIViewController *viewController;
@property (nonatomic, readonly) UIPresentationController *presentationController;
@property (retain, nonatomic) UIView *customContainerView;
@property (retain, nonatomic) UIView *customViewForTouchContinuation;
@property (retain, nonatomic) id <_UIClickPresentationTransition> appearanceTransition;
@property (retain, nonatomic) id <_UIClickPresentationTransition> disappearanceTransition;

- (id)initWithPresentedViewController:(id)arg1 presentationController:(id)arg2;

@end

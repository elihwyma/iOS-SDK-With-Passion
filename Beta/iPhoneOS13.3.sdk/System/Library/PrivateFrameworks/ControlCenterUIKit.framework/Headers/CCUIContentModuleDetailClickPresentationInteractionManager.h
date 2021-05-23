/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

#import <Foundation/NSObject.h>

@class CCUIContentModuleDetailTransitioningDelegate, NSString, UIPresentationController, UIView, UIViewController, _UIClickPresentationInteraction;

@protocol CCUIContentModuleDetailClickPresentationInteractionManagerDelegate;

@interface CCUIContentModuleDetailClickPresentationInteractionManager : NSObject

{
    _UIClickPresentationInteraction *_clickPresentationInteraction;
    CCUIContentModuleDetailTransitioningDelegate *_detailTransitioningDelegate;
    UIPresentationController *_presentationController;
    _Bool _authenticated;
    struct {
        unsigned int delegateProvidesPresentedViewController:1;
        unsigned int delegateImplementsInteractionShouldBegin:1;
        unsigned int delegateRequiresAuthentication:1;
        unsigned int delegateImplementsInteractionEnded:1;
    } _delegateFlags;
    UIViewController *_presentingViewController;
    id <CCUIContentModuleDetailClickPresentationInteractionManagerDelegate> _delegate;
    UIView *_viewForInteraction;
}

@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (weak, nonatomic, readonly) id <CCUIContentModuleDetailClickPresentationInteractionManagerDelegate> delegate;
@property (retain, nonatomic) UIView *viewForInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setDelegate:(id)arg1;
- (void)clickPresentationInteractionEnded:(id)arg1 wasCancelled:(_Bool)arg2;
- (id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2;
- (_Bool)clickPresentationInteractionShouldBegin:(id)arg1;
- (unsigned long long)activationStyleForClickPresentationInteraction:(id)arg1;
- (_Bool)clickPresentationInteractionShouldPresent:(id)arg1;
- (id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(struct CGPoint)arg2;
- (id)initWithPresentingViewController:(id)arg1 delegate:(id)arg2;

@end

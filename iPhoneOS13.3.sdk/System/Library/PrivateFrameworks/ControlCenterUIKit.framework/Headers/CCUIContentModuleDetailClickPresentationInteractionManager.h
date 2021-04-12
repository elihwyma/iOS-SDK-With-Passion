//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ControlCenterUIKit/_UIClickPresentationInteractionDelegate-Protocol.h>

@class CCUIContentModuleDetailTransitioningDelegate, UIPresentationController, UIView, UIViewController, _UIClickPresentationInteraction;
@protocol CCUIContentModuleDetailClickPresentationInteractionManagerDelegate;

@interface CCUIContentModuleDetailClickPresentationInteractionManager : NSObject <_UIClickPresentationInteractionDelegate>
{
    _UIClickPresentationInteraction *_clickPresentationInteraction;
    CCUIContentModuleDetailTransitioningDelegate *_detailTransitioningDelegate;
    UIPresentationController *_presentationController;
    BOOL _authenticated;
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

@property(retain, nonatomic) UIView *viewForInteraction; // @synthesize viewForInteraction=_viewForInteraction;
@property(readonly, nonatomic) __weak id <CCUIContentModuleDetailClickPresentationInteractionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
// - (void).cxx_destruct;
- (NSUInteger)activationStyleForClickPresentationInteraction:(id)arg1;
- (id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(CGPoint)arg2;
- (void)clickPresentationInteractionEnded:(id)arg1 wasCancelled:(BOOL)arg2;
- (id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2;
- (BOOL)clickPresentationInteractionShouldPresent:(id)arg1;
- (BOOL)clickPresentationInteractionShouldBegin:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1 delegate:(id)arg2;

@end


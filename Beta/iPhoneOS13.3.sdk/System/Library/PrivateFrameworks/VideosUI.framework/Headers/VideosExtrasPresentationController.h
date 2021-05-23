/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIPresentationController.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface VideosExtrasPresentationController : UIPresentationController

{
    UIView *_extrasMenuBarView;
    struct CGRect _extrasMenuBarFrame;
}

@property (retain, nonatomic) UIView *extrasMenuBarView;
@property (nonatomic) struct CGRect extrasMenuBarFrame;

- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 extrasMenuBarView:(id)arg3 extrasmenuBarFrame:(struct CGRect)arg4;

@end

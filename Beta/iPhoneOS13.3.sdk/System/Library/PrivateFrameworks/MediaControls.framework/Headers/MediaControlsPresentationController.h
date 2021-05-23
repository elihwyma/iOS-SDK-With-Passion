/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

#import <UIKit/UIPreviewPresentationController.h>

@class MTMaterialView, NSString, UIView;

__attribute__((visibility("hidden")))
@interface MediaControlsPresentationController : UIPreviewPresentationController

{
    UIView *_presentingView;
    MTMaterialView *_materialView;
    struct CGPoint _sourcePoint;
    struct UIEdgeInsets _edgeInsets;
}

@property (retain, nonatomic) MTMaterialView *materialView;
@property (weak, nonatomic) UIView *presentingView;
@property (nonatomic) struct CGPoint sourcePoint;
@property (nonatomic) struct UIEdgeInsets edgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_backgroundEffectForTraitCollection:(id)arg1 interactive:(_Bool)arg2;

- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)shouldPresentInFullscreen;
- (_Bool)_shouldRespectDefinesPresentationContext;
- (void)presentationTransitionWillBegin;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)_dismissTap:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/Swift-Protocol.h>

@class SXComponentAnimationController, SXComponentBehaviorController, SXFullscreenVideoPlaybackManager, SXMediaPlaybackController, SXPresentationAttributes, SXTangierController;

@protocol SXAdDocumentStateManager, SXComponentController, SXTextSelectionManager;

@protocol SXPresentationDelegate <Swift>

@property (nonatomic, readonly) id <SXComponentController> componentController;
@property (nonatomic, readonly) SXTangierController *tangierController;
@property (nonatomic, readonly) SXComponentAnimationController *animationController;
@property (nonatomic, readonly) SXComponentBehaviorController *behaviorController;
@property (nonatomic, readonly) SXFullscreenVideoPlaybackManager *fullscreenVideoPlaybackManager;
@property (nonatomic, readonly) SXMediaPlaybackController *mediaPlaybackController;
@property (nonatomic, readonly) SXPresentationAttributes *presentationAttributes;
@property (nonatomic, readonly) id <SXAdDocumentStateManager> adDocumentStateManager;
@property (nonatomic, readonly) id <SXTextSelectionManager> textSelectionManager;

- (unsigned short)isScrolling;
- (unsigned short)allowInteractivityFocusForComponent: /* Error: Ran out of types for this method. */;
- (unsigned short)addInteractivityFocusForComponent: /* Error: Ran out of types for this method. */;
- (unsigned short)removeInteractivityFocusForComponent: /* Error: Ran out of types for this method. */;
- (unsigned short)requestFullScreenCanvasViewControllerForComponent:withCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)requestFullScreenCanvasViewControllerForComponent:canvasController:withCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)dismissFullscreenCanvasForComponent: /* Error: Ran out of types for this method. */;
- (unsigned short)presentingContentViewController;
- (unsigned short)scrollToRect:animated: /* Error: Ran out of types for this method. */;
- (unsigned short)updateBehaviorForComponentView: /* Error: Ran out of types for this method. */;

@end

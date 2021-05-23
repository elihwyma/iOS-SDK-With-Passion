/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSString, NSTimer, SKUIContextActionsViewController, UILongPressGestureRecognizer, UIPreviewInteraction, UIViewController, UIViewPropertyAnimator;

__attribute__((visibility("hidden")))
@interface SKUIContextActionsPresentationRegistration : NSObject <Swift>

{
    _Bool _previewInteractionDidEnd;
    CDUnknownBlockType _handler;
    UIViewController *_viewController;
    UIPreviewInteraction *_previewInteraction;
    NSTimer *_previewInteractionTimeout;
    SKUIContextActionsViewController *_orbContextActionsViewController;
    UIViewPropertyAnimator *_previewPhasePropertyAnimator;
    UIViewPropertyAnimator *_commitPhasePropertyAnimator;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

@property (copy, nonatomic) CDUnknownBlockType handler;
@property (retain, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) UIPreviewInteraction *previewInteraction;
@property (nonatomic) _Bool previewInteractionDidEnd;
@property (retain, nonatomic) NSTimer *previewInteractionTimeout;
@property (retain, nonatomic) SKUIContextActionsViewController *orbContextActionsViewController;
@property (retain, nonatomic) UIViewPropertyAnimator *previewPhasePropertyAnimator;
@property (retain, nonatomic) UIViewPropertyAnimator *commitPhasePropertyAnimator;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)previewInteractionShouldBegin:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(_Bool)arg3;
- (void)previewInteractionDidCancel:(id)arg1;
- (void)cleanupPreviewInteraction:(id)arg1;
- (void)_presentFromGestureRecognizer:(id)arg1;
- (void)longPressGestureRecognizerTriggered:(id)arg1;
- (id)initWithViewController:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

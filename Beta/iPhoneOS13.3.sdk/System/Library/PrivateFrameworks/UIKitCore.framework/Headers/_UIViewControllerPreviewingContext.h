/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIGestureRecognizer, UIView, UIViewController, _UIPreviewInteractionController;

@protocol UIViewControllerPreviewingDelegate;

__attribute__((visibility("hidden")))
@interface _UIViewControllerPreviewingContext : NSObject

{
    id <UIViewControllerPreviewingDelegate> _delegate;
    UIView *_customViewForInteractiveHighlight;
    UIView *_sourceView;
    UIViewController *_viewController;
    _UIPreviewInteractionController *_previewInteractionController;
    struct CGRect _sourceRect;
}

@property (retain, nonatomic) UIView *sourceView;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) _UIPreviewInteractionController *previewInteractionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIGestureRecognizer *previewingGestureRecognizerForFailureRelationship;
@property (nonatomic, readonly) id <UIViewControllerPreviewingDelegate> delegate;
@property (nonatomic) struct CGRect sourceRect;
@property (retain, nonatomic) UIView *customViewForInteractiveHighlight;

- (void)setDelegate:(id)arg1;
- (void)previewInteractionController:(id)arg1 didDismissViewController:(id)arg2 committing:(_Bool)arg3;
- (void)unregister;
- (struct CGRect)preferredSourceViewRectInCoordinateSpace:(id)arg1;
- (id)initWithSourceView:(id)arg1 viewController:(id)arg2;
- (void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2;
- (void)previewInteractionController:(id)arg1 willDismissViewController:(id)arg2;
- (id)previewInteractionController:(id)arg1 viewControllerForPreviewingAtLocation:(struct CGPoint)arg2 inCoordinateSpace:(id)arg3 presentingViewController:(id *)arg4;
- (void)previewInteractionController:(id)arg1 commitViewController:(id)arg2;
- (void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forLocation:(struct CGPoint)arg3 inSourceView:(id)arg4;

@end

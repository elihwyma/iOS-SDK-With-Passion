/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIGestureRecognizer, UIView, UIViewController, _UIContextMenuInteraction;

@protocol UIViewControllerPreviewingDelegate;

__attribute__((visibility("hidden")))
@interface _UIViewControllerClickPreviewingContext : NSObject

{
    id <UIViewControllerPreviewingDelegate> delegate;
    UIView *_sourceView;
    UIView *customViewForInteractiveHighlight;
    _UIContextMenuInteraction *_menuInteraction;
    UIViewController *_presentingViewController;
    UIViewController *_previewViewController;
    struct CGRect sourceRect;
}

@property (retain, nonatomic) _UIContextMenuInteraction *menuInteraction;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) UIViewController *previewViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIGestureRecognizer *previewingGestureRecognizerForFailureRelationship;
@property (nonatomic, readonly) id <UIViewControllerPreviewingDelegate> delegate;
@property (nonatomic, readonly) UIView *sourceView;
@property (nonatomic) struct CGRect sourceRect;
@property (retain, nonatomic) UIView *customViewForInteractiveHighlight;

- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)unregister;
- (_Bool)contextMenuInteractionShouldBegin:(id)arg1;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingAtLocation:(struct CGPoint)arg2;
- (void)contextMenuInteractionDidEnd:(id)arg1;
- (id)contextMenuInteraction:(id)arg1 actionsForMenuAtLocation:(struct CGPoint)arg2 withSuggestedActions:(id)arg3;
- (id)_guessAutomaticPreviewForLocation:(struct CGPoint)arg1;
- (id)_uiActionsForPreviewActions:(id)arg1;
- (id)_targetedPreviewForHighlightView:(id)arg1 container:(id)arg2 center:(struct CGPoint)arg3;
- (id)initWithSourceView:(id)arg1 viewController:(id)arg2;
- (void)contextMenuInteractionWillDisplay:(id)arg1;

@end

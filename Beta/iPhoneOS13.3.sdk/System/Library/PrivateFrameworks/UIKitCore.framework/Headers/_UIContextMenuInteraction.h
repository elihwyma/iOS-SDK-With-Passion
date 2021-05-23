/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIContextMenuInteraction, UIView, _UIContextMenuPreviewActionGroup;

@protocol _UIContextMenuInteractionDelegate;

@interface _UIContextMenuInteraction : NSObject <Swift>

{
    struct {
        _Bool shouldBegin;
        _Bool previewForHighlighting;
        _Bool previewForDismissing;
        _Bool willPresent;
        _Bool didEnd;
        _Bool actionsForMenuSuggestedActionsPresentingWithStyle;
    } _delegateImplements;
    UIView *_view;
    id <_UIContextMenuInteractionDelegate> _delegate;
    UIContextMenuInteraction *_actualInteraction;
    _UIContextMenuPreviewActionGroup *_actionGroup;
}

@property (retain, nonatomic) UIContextMenuInteraction *actualInteraction;
@property (retain, nonatomic) _UIContextMenuPreviewActionGroup *actionGroup;
@property (weak, nonatomic, readonly) id <_UIContextMenuInteractionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, readonly) UIView *view;

- (id)initWithDelegate:(id)arg1;
- (struct CGPoint)locationInView:(id)arg1;
- (void)willMoveToView:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;
- (id)_previewViewController;
- (void)contextMenuInteractionWillPresent:(id)arg1;
- (void)contextMenuInteractionDidEnd:(id)arg1;
- (id)_actionsWithSuggestedActions:(id)arg1;
- (void)contextMenuInteraction:(id)arg1 willCommitWithAnimator:(id)arg2;

@end

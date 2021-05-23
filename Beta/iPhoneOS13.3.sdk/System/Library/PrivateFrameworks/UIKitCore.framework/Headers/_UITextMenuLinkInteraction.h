/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UITextSimpleLinkInteraction.h>

@class NSMapTable, NSString, UIContextMenuInteraction;

__attribute__((visibility("hidden")))
@interface _UITextMenuLinkInteraction : _UITextSimpleLinkInteraction

{
    UIContextMenuInteraction *_contextMenuInteraction;
    NSMapTable *_configurationItems;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)willMoveToView:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;
- (_Bool)_contextMenuInteraction:(id)arg1 shouldAttemptToPresentConfiguration:(id)arg2;
- (id)_contextMenuInteraction:(id)arg1 overrideSuggestedActionsForConfiguration:(id)arg2;

@end

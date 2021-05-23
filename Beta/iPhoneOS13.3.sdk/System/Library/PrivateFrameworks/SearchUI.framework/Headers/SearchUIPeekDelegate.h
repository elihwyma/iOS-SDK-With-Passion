/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <Foundation/NSObject.h>

@class NSString, SearchUITableViewController;

@interface SearchUIPeekDelegate : NSObject

{
    SearchUITableViewController *_viewController;
}

@property (weak, nonatomic) SearchUITableViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithViewController:(id)arg1;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteractionWillPresent:(id)arg1;
- (void)contextMenuInteractionDidEnd:(id)arg1;
- (void)contextMenuInteraction:(id)arg1 willCommitWithAnimator:(id)arg2;

@end

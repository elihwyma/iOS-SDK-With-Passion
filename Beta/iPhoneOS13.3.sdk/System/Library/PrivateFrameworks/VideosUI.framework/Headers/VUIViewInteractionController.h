/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class IKViewElement, NSString, UIContextMenuInteraction, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface VUIViewInteractionController : NSObject

{
    UIContextMenuInteraction *_interaction;
    UIView *_presentingView;
    UIViewController *_presentingViewController;
    IKViewElement *_presentingElement;
}

@property (retain, nonatomic) UIContextMenuInteraction *interaction;
@property (weak, nonatomic, readonly) UIView *presentingView;
@property (weak, nonatomic, readonly) UIViewController *presentingViewController;
@property (weak, nonatomic) IKViewElement *presentingElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)updateContextMenuWithMenuItems:(id)arg1;
+ (id)getHighlightedView;
+ (void)setContextMenuTemplateInterface:(id)arg1;

- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;
- (void)updatePresentingElement:(id)arg1;
- (void)dismissInteractionView;
- (id)_getViewElementWithContextMenuAtLocation:(struct CGPoint)arg1;
- (id)_getPreviewViewControllerWithElement:(id)arg1;
- (id)_getViewAtLocation:(struct CGPoint)arg1;
- (id)initWithPresentingViewController:(id)arg1 presentingView:(id)arg2 presentingElement:(id)arg3;

@end

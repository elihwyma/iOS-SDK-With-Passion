/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIView, UIViewController, _UIAsyncInvocation, _UITextDragCaretView;

@protocol UIKeyboardMediaControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardMediaController : NSObject

{
    UIViewController *_remoteCardViewController;
    _UIAsyncInvocation *_remoteCardViewControllerRequest;
    UIViewController *_recentlyUsedMediaViewController;
    _UIAsyncInvocation *_recentlyUsedMediaViewControllerRequest;
    UIView *_targetViewAwaitingRecents;
    _Bool _hasRequestedRecentlyUsedMediaViewController;
    unsigned long long _viewServiceTerminationCount;
    _UITextDragCaretView *_dropCaret;
    _Bool _shouldRetryFetchingRecents;
    id <UIKeyboardMediaControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <UIKeyboardMediaControllerDelegate> delegate;
@property (nonatomic, readonly) _Bool shouldRetryFetchingRecents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedKeyboardMediaController;

- (void)_keyboardDidChangeFrame:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (_Bool)recentsViewWillBeVisible;
- (void)_embedRecentlyUsedMediaViewInView:(id)arg1 animated:(_Bool)arg2;
- (void)_instantiateViewServiceRecentlyUsedMediaWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)prefetchRecentsViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)releaseRecentlyUsedMediaViewIfNeeded;
- (void)dismissCardIfNeeded;
- (void)_tearDownRemoteViews;
- (void)dismissCardAnimated;
- (void)_displayiMessageAppWithID:(id)arg1;
- (void)_instantiateCardFromViewService;
- (void)dismissCard;
- (void)pasteImageAtFileHandle:(id)arg1;
- (void)presentCard;
- (void)stageStickerWithFileHandle:(id)arg1 url:(id)arg2 accessibilityLabel:(id)arg3;
- (void)requestInsertionPointCompletion:(CDUnknownBlockType)arg1;
- (void)draggedStickerToPoint:(struct CGPoint)arg1;
- (_Bool)shouldPrefetchRemoteView;
- (void)showRecentlyUsedMediaInView:(id)arg1;

@end

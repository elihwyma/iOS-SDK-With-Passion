/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class QLPreviewContext;

__attribute__((visibility("hidden")))
@interface QLPasswordItemViewController

{
    QLPreviewContext *_context;
    CDUnknownBlockType _completionBlock;
}

- (void)invalidate;
- (void)loadView;
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;
- (_Bool)canSwipeToDismiss;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)canPinchToDismiss;
- (_Bool)canEnterFullScreen;
- (void)previewDidAppear:(_Bool)arg1;
- (void)previewWillDisappear:(_Bool)arg1;
- (id)passwordView;

@end

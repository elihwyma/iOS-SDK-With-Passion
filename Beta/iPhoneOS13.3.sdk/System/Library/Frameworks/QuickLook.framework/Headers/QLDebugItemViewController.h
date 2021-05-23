/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSLayoutConstraint, NSMutableDictionary, UITextView;

__attribute__((visibility("hidden")))
@interface QLDebugItemViewController

{
    _Bool _constraintsSetUp;
    UITextView *_logTextView;
    NSMutableDictionary *_selectorToCount;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

- (_Bool)canSwipeToDismiss;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)canPinchToDismiss;
- (_Bool)canEnterFullScreen;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)previewWillAppear:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)previewWillDisappear:(_Bool)arg1;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)_addLog:(id)arg1 logLevel:(unsigned long long)arg2;
- (void)_encounterMethodCall:(SEL)arg1;
- (void)previewIsAppearingWithProgress:(double)arg1;
- (void)previewWillFinishAppearing;
- (void)_encounterMethodCall:(SEL)arg1 animatedValue:(unsigned long long)arg2;
- (id)_attributesForLogLevel:(unsigned long long)arg1;

@end

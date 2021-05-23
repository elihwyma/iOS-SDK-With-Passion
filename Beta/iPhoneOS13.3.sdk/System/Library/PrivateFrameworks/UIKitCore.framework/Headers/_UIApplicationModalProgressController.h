/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSProgress, NSString, NSTimer, UIAlertController, UIWindow, UIWindowScene, _UIProgressView;

__attribute__((visibility("hidden")))
@interface _UIApplicationModalProgressController : NSObject

{
    _Bool _disableButtonAction;
    _UIProgressView *_progressView;
    UIWindowScene *_weakScene;
    double _displayDelaySeconds;
    UIWindow *_window;
    UIAlertController *_alertController;
    CDUnknownBlockType _dismissalHandler;
    CDUnknownBlockType _preDisplayTestBlock;
    NSProgress *_progress;
    NSTimer *_showTimer;
    NSTimer *_hideTimer;
    double _displayStartTime;
    NSProgress *_urlProgress;
}

@property (retain, nonatomic, getter=_window, setter=_setWindow:) UIWindow *window;
@property (retain, nonatomic, getter=_alertController, setter=_setAlertController:) UIAlertController *alertController;
@property (copy, nonatomic, getter=_dismissalHandler, setter=_setDismissalHandler:) CDUnknownBlockType dismissalHandler;
@property (copy, nonatomic, getter=_preDisplaySetBlock, setter=_setPreDisplayTestBlock:) CDUnknownBlockType preDisplayTestBlock;
@property (retain, nonatomic, getter=_progress, setter=_setProgress:) NSProgress *progress;
@property (retain, nonatomic, getter=_showTimer, setter=_setShowTimer:) NSTimer *showTimer;
@property (retain, nonatomic, getter=_hideTimer, setter=_setHideTimer:) NSTimer *hideTimer;
@property (nonatomic, getter=_displayStartTime, setter=_setDisplayStartTime:) double displayStartTime;
@property (retain, nonatomic) NSProgress *urlProgress;
@property (nonatomic) double displayDelaySeconds;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;

+ (id)sharedInstance;
+ (id)instanceForScene:(id)arg1;

- (id)init;
- (void)_reset;
- (void)_callAndClearDismissalHandlerWasDismissedByUser:(_Bool)arg1;
- (void)_hideImmediatelyWasDismissedByUser:(_Bool)arg1;
- (void)_hideTimerAction:(id)arg1;
- (void)hideAfterMinimumUptimeWithDismissalHandler:(CDUnknownBlockType)arg1;
- (void)_showTimerAction:(id)arg1;
- (void)reconfigureWithTitle:(id)arg1 message:(id)arg2 progress:(id)arg3 buttonTitle:(id)arg4 dismissalHandler:(CDUnknownBlockType)arg5;
- (void)displayForDownloadingURL:(id)arg1 copyToURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)displayWithTitle:(id)arg1 message:(id)arg2 progress:(id)arg3 buttonTitle:(id)arg4 preDisplayTestBlock:(CDUnknownBlockType)arg5 dismissalHandler:(CDUnknownBlockType)arg6;
- (void)_dismissButtonAction:(id)arg1;
- (void)hideAfterDelay:(double)arg1 forceCompletion:(_Bool)arg2 afterMinimumUptimeDismissalHandler:(CDUnknownBlockType)arg3;
- (void)displayForDownloadingURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)displayForCopyingFileAtURL:(id)arg1 toURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class ICProgressViewController, NSDate, NSProgress, NSString, UIViewController, UIWindow;

@interface ICLongRunningTaskController : NSObject

{
    _Bool _isCancelled;
    _Bool _shouldShowCancelButton;
    _Bool _shouldShowCircularProgress;
    _Bool _allowSingleUnitProgress;
    _Bool _progressViewControllerDidFinishPresenting;
    _Bool _shouldDismissProgressViewController;
    NSString *_customCancelButtonTitle;
    NSString *_progressFormatString;
    struct UIViewController *_viewControllerToPresentFrom;
    struct UIWindow *_window;
    double _intervalBeforeOpeningProgressDialog;
    id _keepAlive;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _updateProgressUIBlock;
    NSProgress *_progress;
    NSDate *_lastAccessibilityAnnouncementDate;
    NSDate *_openProgressDate;
    ICProgressViewController *_progressViewController;
}

@property (retain, nonatomic) UIWindow *window;
@property (nonatomic) double intervalBeforeOpeningProgressDialog;
@property (retain, nonatomic) id keepAlive;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (copy, nonatomic) CDUnknownBlockType updateProgressUIBlock;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) NSDate *lastAccessibilityAnnouncementDate;
@property (retain, nonatomic) NSDate *openProgressDate;
@property (nonatomic) _Bool isCancelled;
@property (retain, nonatomic) ICProgressViewController *progressViewController;
@property (nonatomic) _Bool progressViewControllerDidFinishPresenting;
@property (nonatomic) _Bool shouldDismissProgressViewController;
@property (nonatomic) _Bool shouldShowCancelButton;
@property (retain, nonatomic) NSString *customCancelButtonTitle;
@property (copy, nonatomic) NSString *progressFormatString;
@property (retain, nonatomic) UIViewController *viewControllerToPresentFrom;
@property (nonatomic) _Bool shouldShowCircularProgress;
@property (nonatomic) _Bool allowSingleUnitProgress;

+ (void)setMainWindow:(struct UIWindow *)arg1;

- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateProgress;
- (id)initWithWindow:(struct UIWindow *)arg1 intervalBeforeOpeningProgressDialog:(double)arg2;
- (void)startTask:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)completeTaskIfNecessary;
- (void)openProgressDialog;
- (void)closeProgressDialog;
- (void)willDismissProgressViewController:(id)arg1;

@end

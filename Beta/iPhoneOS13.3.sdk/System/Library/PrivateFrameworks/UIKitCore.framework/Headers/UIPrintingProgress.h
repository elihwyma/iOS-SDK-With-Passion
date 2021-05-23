/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIAlertController, UIPrintingProgressViewController, UIWindow, UIWindowScene;

__attribute__((visibility("hidden")))
@interface UIPrintingProgress : NSObject

{
    NSString *_printerName;
    CDUnknownBlockType _cancelHandler;
    double _startTime;
    double _displayTime;
    UIAlertController *_alertController;
    UIPrintingProgressViewController *_viewController;
    _Bool _donePrinting;
    _Bool _forceDisplayAsAlert;
    _Bool _creatingPDF;
    double _lastPageUpdate;
    double _progressAlertDelay;
    UIWindowScene *_hostingWindowScene;
    UIWindow *_progressAlertWindow;
}

@property (readonly) NSString *title;
@property _Bool creatingPDF;
@property double lastPageUpdate;
@property double progressAlertDelay;
@property (weak) UIWindowScene *hostingWindowScene;
@property (retain) UIWindow *progressAlertWindow;

- (void)hideProgressAnimated:(_Bool)arg1;
- (void)progressCancel;
- (_Bool)progressVisible;
- (void)_presentProgressAlert;
- (void)endProgress;
- (void)showProgress:(id)arg1 immediately:(_Bool)arg2;
- (id)initWithPrinterName:(id)arg1 forceDisplayAsAlert:(_Bool)arg2 hostingWindowScene:(id)arg3 cancelHandler:(CDUnknownBlockType)arg4;
- (id)initPDFCreationWithHostingWindowScene:(id)arg1 cancelHandler:(CDUnknownBlockType)arg2;
- (void)setPrintInfoState:(int)arg1;
- (void)setPage:(long long)arg1 ofPage:(long long)arg2;
- (double)nextPrintDelay;

@end

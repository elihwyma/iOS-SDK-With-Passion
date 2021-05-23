/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIWindow.h>

@class NSMutableArray, UIDebuggingInformationOverlayViewController, UIDebuggingInformationRootTableViewController, UIEvent;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationOverlay : UIWindow

{
    _Bool _isFullscreen;
    _Bool _checkingTouches;
    _Bool _touchCaptureEnabled;
    NSMutableArray *_touchObservers;
    UIWindow *_inspectedWindow;
    UIEvent *_lastTouch;
    struct CGPoint _drawingOrigin;
}

@property (retain, nonatomic) UIEvent *lastTouch;
@property (nonatomic) struct CGPoint drawingOrigin;
@property (nonatomic) _Bool isFullscreen;
@property (nonatomic, readonly) UIDebuggingInformationOverlayViewController *overlayViewController;
@property (retain, nonatomic) UIDebuggingInformationRootTableViewController *rootTableViewController;
@property (nonatomic) _Bool checkingTouches;
@property (nonatomic) _Bool touchCaptureEnabled;
@property (retain, nonatomic) NSMutableArray *touchObservers;
@property (retain, nonatomic) UIWindow *inspectedWindow;

+ (id)overlay;
+ (void)prepareDebuggingOverlay;

- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setHidden:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)toggleFullscreen;
- (void)toggleVisibility;

@end

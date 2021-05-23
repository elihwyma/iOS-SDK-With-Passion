/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardFoundation/SBFTouchPassThroughViewController.h>

@class NSString, UIScreen, _UILayerHostView;

@interface SBInteractiveScreenshotGestureHostRootViewController : SBFTouchPassThroughViewController

{
    unsigned int _hostingContextID;
    int _hostingPid;
    _UILayerHostView *_layerHostView;
    UIScreen *_screen;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithScreen:(id)arg1;
- (void)_reloadLayerHostView;
- (void)setHostingContextID:(unsigned int)arg1 pid:(int)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <UIKit/UIViewController.h>

#import <WiFiKitUI/Swift-Protocol.h>

@class WFRemoteWebSheetViewController, _UIAsyncInvocation;

@protocol WFWebSheetViewControllerDelegate;

@interface WFWebSheetViewController : UIViewController <Swift>

{
    _UIAsyncInvocation *_cancelServiceInvocation;
    WFRemoteWebSheetViewController *_remoteViewController;
    id <WFWebSheetViewControllerDelegate> _delegate;
}

@property (retain, nonatomic) _UIAsyncInvocation *cancelServiceInvocation;
@property (retain, nonatomic) WFRemoteWebSheetViewController *remoteViewController;
@property (weak, nonatomic) id <WFWebSheetViewControllerDelegate> delegate;
@property (nonatomic, readonly) _Bool wantsModalPresentation;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)_requestRemoteViewController;
- (void)_finishSetupWithError:(id)arg1;
- (void)remoteWebSheetViewController:(id)arg1 handleEvent:(unsigned long long)arg2 context:(id)arg3;
- (void)_showRemoteViewController;
- (void)webSheetViewControllerServiceShouldTerminate;

@end

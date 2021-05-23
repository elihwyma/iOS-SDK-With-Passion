/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <UIKit/_UIRemoteViewController.h>

@protocol WFRemoteWebSheetViewControllerDelegate;

@interface WFRemoteWebSheetViewController : _UIRemoteViewController

{
    id <WFRemoteWebSheetViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <WFRemoteWebSheetViewControllerDelegate> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;

- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)webSheetViewControllerContentDidStartLoading;
- (void)webSheetViewControllerContentReadyForPresentation;
- (void)webSheetViewControllerContentDidFinishLoading;
- (void)_setupButtonListener;

@end

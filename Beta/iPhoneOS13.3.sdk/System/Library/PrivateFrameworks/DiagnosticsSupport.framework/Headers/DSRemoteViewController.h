/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

#import <UIKit/_UIRemoteViewController.h>

@class DSResponder;

@protocol DSRemoteViewControllerDelegate;

@interface DSRemoteViewController : _UIRemoteViewController

{
    float _originalScreenBrightness;
    id <DSRemoteViewControllerDelegate> _delegate;
    DSResponder *_responder;
}

@property (retain, nonatomic) DSResponder *responder;
@property (nonatomic) float originalScreenBrightness;
@property (weak, nonatomic) id <DSRemoteViewControllerDelegate> delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;

- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (id)_stringForReason:(unsigned long long)arg1;
- (id)_viewServiceInterface;
- (void)viewServiceDidSuspend;
- (void)viewServiceDidFinishWithReason:(unsigned long long)arg1;
- (void)viewServiceDidEnableVolumeHUD:(_Bool)arg1;
- (void)viewServiceDidSetScreenToBrightness:(float)arg1 animate:(_Bool)arg2;
- (void)requiredSerialNumbers:(id)arg1;
- (void)selectableSerialNumbers:(id)arg1;
- (void)sessionToken:(id)arg1;

@end

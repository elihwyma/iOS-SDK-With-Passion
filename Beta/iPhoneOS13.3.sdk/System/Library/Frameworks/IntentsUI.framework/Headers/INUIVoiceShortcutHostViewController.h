/*
 Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

#import <UIKit/_UIRemoteViewController.h>

@class NSString;

@protocol INUIVoiceShortcutRemoteViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface INUIVoiceShortcutHostViewController : _UIRemoteViewController

{
    id <INUIVoiceShortcutRemoteViewControllerDelegate> _delegate;
    long long _mode;
}

@property (nonatomic) long long mode;
@property (weak, nonatomic) id <INUIVoiceShortcutRemoteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)_voiceShortcutUIExtension;
+ (void)getViewControllerForAddingShortcut:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)getViewControllerForEditingVoiceShortcut:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)getViewControllerCompletion:(CDUnknownBlockType)arg1;

- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)remoteViewControllerDidCreateVoiceShortcut:(id)arg1 error:(id)arg2;
- (void)remoteViewControllerDidUpdateVoiceShortcut:(id)arg1 error:(id)arg2;
- (void)remoteViewControllerDidDeleteVoiceShortcutWithIdentifier:(id)arg1;
- (void)remoteViewControllerDidCancel;

@end

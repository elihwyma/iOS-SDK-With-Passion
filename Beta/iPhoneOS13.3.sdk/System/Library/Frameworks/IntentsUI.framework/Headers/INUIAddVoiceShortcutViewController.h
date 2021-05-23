/*
 Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

#import <UIKit/UIViewController.h>

#import <IntentsUI/Swift-Protocol.h>

@class INShortcut, INUIVoiceShortcutHostViewController, NSString, _UIRemoteViewController;

@protocol INUIAddVoiceShortcutViewControllerDelegate;

@interface INUIAddVoiceShortcutViewController : UIViewController <Swift>

{
    INShortcut *_shortcut;
    id <INUIAddVoiceShortcutViewControllerDelegate> _delegate;
    INUIVoiceShortcutHostViewController *_remoteHostViewController;
    UIViewController *_currentChildViewController;
}

@property (retain, nonatomic) INShortcut *_shortcut;
@property (retain, nonatomic, getter=_remoteHostViewController, setter=_setRemoteHostViewController:) INUIVoiceShortcutHostViewController *remoteHostViewController;
@property (retain, nonatomic) UIViewController *currentChildViewController;
@property (weak, nonatomic) id <INUIAddVoiceShortcutViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;

+ (void)initialize;

- (void)loadView;
- (id)initWithShortcut:(id)arg1;
- (void)setChildViewController:(id)arg1;
- (void)remoteViewControllerDidCreateVoiceShortcut:(id)arg1 error:(id)arg2;
- (void)remoteViewControllerDidCancel;

@end

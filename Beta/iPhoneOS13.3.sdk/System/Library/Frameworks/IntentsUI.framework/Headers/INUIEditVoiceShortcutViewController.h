/*
 Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

#import <UIKit/UIViewController.h>

#import <IntentsUI/Swift-Protocol.h>

@class INUIVoiceShortcutHostViewController, NSString, _UIRemoteViewController;

@protocol INUIEditVoiceShortcutViewControllerDelegate;

@interface INUIEditVoiceShortcutViewController : UIViewController <Swift>

{
    id <INUIEditVoiceShortcutViewControllerDelegate> _delegate;
    INUIVoiceShortcutHostViewController *_remoteHostViewController;
    UIViewController *_currentChildViewController;
}

@property (retain, nonatomic, getter=_remoteHostViewController, setter=_setRemoteHostViewController:) INUIVoiceShortcutHostViewController *remoteHostViewController;
@property (retain, nonatomic) UIViewController *currentChildViewController;
@property (weak, nonatomic) id <INUIEditVoiceShortcutViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;

+ (void)initialize;

- (void)loadView;
- (void)setChildViewController:(id)arg1;
- (void)remoteViewControllerDidUpdateVoiceShortcut:(id)arg1 error:(id)arg2;
- (void)remoteViewControllerDidDeleteVoiceShortcutWithIdentifier:(id)arg1;
- (void)remoteViewControllerDidCancel;
- (id)initWithVoiceShortcut:(id)arg1;

@end

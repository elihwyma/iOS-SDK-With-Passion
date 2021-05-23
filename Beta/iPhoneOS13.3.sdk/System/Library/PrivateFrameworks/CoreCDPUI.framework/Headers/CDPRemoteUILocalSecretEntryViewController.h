/*
 Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

#import <CoreCDPUI/CDPPassphraseEntryViewController.h>

@class NSString;

@interface CDPRemoteUILocalSecretEntryViewController : CDPPassphraseEntryViewController

{
    _Bool _inlineMode;
    _Bool _finished;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)title;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (id)pinInstructionsPrompt;

@end

/*
 Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

#import <UIKit/_UIRemoteViewController.h>

@class NSObject;

@protocol WFPINEntryViewControllerProtocol;

__attribute__((visibility("hidden")))
@interface WFRemotePINEntryViewController : _UIRemoteViewController

{
    NSObject<WFPINEntryViewControllerProtocol> *_delegate;
}

@property (nonatomic) NSObject<WFPINEntryViewControllerProtocol> *delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)dealloc;
- (void)setURL:(id)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)requiresKeyboard;
- (_Bool)isNumericPIN;
- (_Bool)simplePIN;
- (void)setPageTitle:(id)arg1;
- (void)userDidCancel;
- (void)getIsPINPresentWithCompletion:(CDUnknownBlockType)arg1;
- (void)permitURLWithCompletion:(CDUnknownBlockType)arg1;
- (void)userEnteredCorrectPIN;

@end

/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/_UIRemoteViewController.h>

@class NSString;

@protocol CKSMSComposeRemoteViewControllerDelegate;

@interface CKSMSComposeRemoteViewController : _UIRemoteViewController

{
    id <CKSMSComposeRemoteViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <CKSMSComposeRemoteViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;

- (void)dealloc;
- (_Bool)_canShowWhileLocked;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)smsComposeControllerDataInserted;
- (void)smsComposeControllerEntryViewContentInserted;
- (void)smsComposeControllerAppeared;
- (void)smsComposeControllerShouldSendMessageWithText:(id)arg1 toRecipients:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)smsComposeControllerSendStartedWithText:(id)arg1;
- (void)smsComposeControllerCancelled;

@end

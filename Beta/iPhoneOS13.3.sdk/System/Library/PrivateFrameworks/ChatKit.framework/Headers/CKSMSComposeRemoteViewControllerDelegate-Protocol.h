/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/Swift-Protocol.h>

@protocol CKSMSComposeRemoteViewControllerDelegate <Swift>

- (unsigned short)viewServiceDidTerminateWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)smsComposeControllerDataInserted;
- (unsigned short)smsComposeControllerEntryViewContentInserted;
- (unsigned short)smsComposeControllerAppeared;
- (unsigned short)smsComposeControllerShouldSendMessageWithText:toRecipients:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)smsComposeControllerSendStartedWithText: /* Error: Ran out of types for this method. */;
- (unsigned short)smsComposeControllerCancelled;

@end

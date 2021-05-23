/*
 Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

@protocol BCApplePayManagerDelegate;

@protocol BCApplePayManagerProtocol

@property (weak, nonatomic) id <BCApplePayManagerDelegate> delegate;

- (unsigned short)message;
- (unsigned short)initWithMessage:delegate: /* Error: Ran out of types for this method. */;
- (unsigned short)applePayStatus;
- (unsigned short)presentApplePay;

@end

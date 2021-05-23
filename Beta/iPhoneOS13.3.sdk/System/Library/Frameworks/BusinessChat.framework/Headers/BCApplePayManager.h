/*
 Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

#import <Foundation/NSObject.h>

@protocol BCApplePayManagerDelegate;

@interface BCApplePayManager : NSObject

{
    id <BCApplePayManagerDelegate> _delegate;
}

@property (weak, nonatomic) id <BCApplePayManagerDelegate> delegate;

- (id)message;
- (id)initWithMessage:(id)arg1 delegate:(id)arg2;
- (long long)applePayStatus;
- (void)presentApplePay;

@end

/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <Foundation/NSObject.h>

@class CTXPCServiceSubscriptionContext, NSString, TPSCallWaitingRequestController;

@protocol TPSCallWaitingControllerDelegate;

@interface TPSCallWaitingController : NSObject

{
    id <TPSCallWaitingControllerDelegate> _delegate;
    long long _state;
    TPSCallWaitingRequestController *_requestController;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
}

@property (nonatomic, readonly) TPSCallWaitingRequestController *requestController;
@property (nonatomic) long long state;
@property (nonatomic, readonly) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (weak, nonatomic) id <TPSCallWaitingControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithSubscriptionContext:(id)arg1;
- (void)requestController:(id)arg1 didReceiveResponse:(id)arg2;
- (void)requestStateChange:(long long)arg1;

@end

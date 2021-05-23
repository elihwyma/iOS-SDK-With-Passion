/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <Foundation/NSObject.h>

@class CTXPCServiceSubscriptionContext, NSString, TPSCallingLineIdRestrictionRequestController;

@protocol TPSCallingLineIdRestrictionControllerDelegate;

@interface TPSCallingLineIdRestrictionController : NSObject

{
    _Bool _editable;
    id <TPSCallingLineIdRestrictionControllerDelegate> _delegate;
    long long _state;
    TPSCallingLineIdRestrictionRequestController *_requestController;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
}

@property (nonatomic, readonly) TPSCallingLineIdRestrictionRequestController *requestController;
@property (nonatomic, getter=isEditable) _Bool editable;
@property (nonatomic) long long state;
@property (nonatomic, readonly) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (weak, nonatomic) id <TPSCallingLineIdRestrictionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithSubscriptionContext:(id)arg1;
- (void)requestController:(id)arg1 didReceiveResponse:(id)arg2;
- (void)requestStateChange:(long long)arg1;
- (void)requestStateForSubscriptionContext:(id)arg1;

@end

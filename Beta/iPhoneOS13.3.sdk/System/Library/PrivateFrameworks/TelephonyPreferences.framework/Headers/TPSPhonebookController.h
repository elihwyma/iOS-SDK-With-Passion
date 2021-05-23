/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <Foundation/NSObject.h>

@class CTXPCServiceSubscriptionContext, NSString, TPSPhonebookTelephonyController;

@protocol TPSPhonebookControllerDelegate;

@interface TPSPhonebookController : NSObject

{
    NSString *_subscriptionISOCountryCode;
    id <TPSPhonebookControllerDelegate> _delegate;
    TPSPhonebookTelephonyController *_telephonyClient;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
}

@property (nonatomic, readonly) TPSPhonebookTelephonyController *telephonyClient;
@property (copy, nonatomic, readonly) NSString *subscriptionISOCountryCode;
@property (nonatomic, readonly) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (weak, nonatomic) id <TPSPhonebookControllerDelegate> delegate;
@property (nonatomic, readonly, getter=isSubscriptionEditable) _Bool subscriptionEditable;
@property (copy, nonatomic, readonly) NSString *localizedSubscriptionTelephoneNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithSubscriptionContext:(id)arg1;
- (void)phonebookController:(id)arg1 didChangePhoneNumberInfo:(id)arg2;
- (void)updateSubscriptionTelephoneNumber:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class CTXPCServiceSubscriptionInfo, NSArray;

@interface IMCTXPCServiceSubscriptionInfo : NSObject

{
    CTXPCServiceSubscriptionInfo *_subscriptionInfo;
    NSArray *_phoneNumbersOfActiveSubscriptions;
}

@property (retain, nonatomic) CTXPCServiceSubscriptionInfo *subscriptionInfo;
@property (retain, nonatomic) NSArray *phoneNumbersOfActiveSubscriptions;

- (id)description;
- (id)subscriptions;
- (id)allSubscriptions;
- (id)preferredOrDefaultSubscriptionContext;
- (id)__im_subscriptionContextForForSimID:(id)arg1 phoneNumber:(id)arg2;
- (id)__im_switchSubscriptionContextFromSubscriptionContext:(id)arg1;
- (id)__im_preferredSubscriptionContext;
- (id)__im_phoneNumberForSlotID:(long long)arg1;
- (id)__im_subscriptionContextForForSlotID:(long long)arg1;
- (id)_senderIdentityManager;
- (id)__im_subscriptionContextForSenderIdentity:(id)arg1;
- (id)initWithSubscriptionInfo:(id)arg1;
- (id)__im_subscriptionsWithMMSSupport;
- (_Bool)__im_containsPhoneNumber:(id)arg1;
- (_Bool)__im_onlyHasActiveSlots;
- (_Bool)__im_hasMultipleSubscriptions;
- (id)__im_switchSubscriptionContextFromPhoneNumber:(id)arg1 simID:(id)arg2;
- (id)__im_phoneNumberForSlotIDOrDefault:(long long)arg1;
- (id)__im_labelForPhoneNumber:(id)arg1 simID:(id)arg2;
- (long long)__imSlotIDSForPhoneNumber:(id)arg1;
- (id)__imSIMIDForSubscriptionSlot:(long long)arg1;
- (id)__im_subscriptionContextOrDefaultForForSlotID:(long long)arg1;
- (id)__im_subscriptionContextForPhoneNumber:(id)arg1;
- (id)__im_subscriptionContextForForSimID:(id)arg1;
- (id)__im_subscriptionContextForPhoneNumberOrDefault:(id)arg1;
- (id)__im_subscriptionContextOrDefaultForForSimID:(id)arg1 phoneNumber:(id)arg2;
- (id)__im_contactPreferredSubscriptionContextForChatHandleIDs:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <Foundation/NSObject.h>

@class CTXPCContexts, CTXPCServiceSubscriptionContext, CTXPCServiceSubscriptionInfo, NSString;

@interface FTSelectedPNRSubscriptionCache : NSObject

{
    CTXPCServiceSubscriptionInfo *_subscriptionInfo;
    CTXPCContexts *_activeSubscriptionInfo;
    CTXPCServiceSubscriptionContext *_selectedContext;
    NSString *_phoneNumber;
    long long _dualSIMCapability;
}

@property (retain, nonatomic) CTXPCServiceSubscriptionInfo *subscriptionInfo;
@property (retain, nonatomic) CTXPCContexts *activeSubscriptionInfo;
@property (retain, nonatomic) CTXPCServiceSubscriptionContext *selectedContext;
@property (retain, nonatomic) NSString *phoneNumber;
@property (nonatomic) long long dualSIMCapability;

- (id)debugDescription;

@end

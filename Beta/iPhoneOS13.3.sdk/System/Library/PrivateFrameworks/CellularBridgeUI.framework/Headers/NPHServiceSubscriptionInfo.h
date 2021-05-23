/*
 Image: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI
 */

#import <Foundation/NSObject.h>

@class CTXPCServiceSubscriptionContext, NSError, NSString;

@interface NPHServiceSubscriptionInfo : NSObject

{
    _Bool _shouldShowAddNewRemotePlan;
    _Bool _shouldOfferRemotePlan;
    _Bool _shouldOfferTrialPlan;
    _Bool _shouldOfferSignupCompletion;
    CTXPCServiceSubscriptionContext *_serviceSubscriptionContext;
    NSString *_trialPlanType;
    NSString *_SIMStatus;
    unsigned long long _planFlows;
    NSError *_persistentError;
}

@property (retain, nonatomic) CTXPCServiceSubscriptionContext *serviceSubscriptionContext;
@property (nonatomic) _Bool shouldShowAddNewRemotePlan;
@property (nonatomic) _Bool shouldOfferRemotePlan;
@property (nonatomic) _Bool shouldOfferTrialPlan;
@property (nonatomic) _Bool shouldOfferSignupCompletion;
@property (retain, nonatomic) NSString *trialPlanType;
@property (retain, nonatomic) NSString *SIMStatus;
@property (nonatomic) unsigned long long planFlows;
@property (retain, nonatomic) NSError *persistentError;

- (id)description;

@end

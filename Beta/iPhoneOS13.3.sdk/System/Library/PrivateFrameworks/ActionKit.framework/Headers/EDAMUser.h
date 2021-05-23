/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class EDAMAccountLimits, EDAMAccounting, EDAMBusinessUserInfo, EDAMPremiumInfo, EDAMPricingModel, EDAMSubscriptionInfo, EDAMUserAttributes, NSNumber, NSString;

@interface EDAMUser : FATObject

{
    NSNumber *_id;
    NSString *_username;
    NSString *_email;
    NSString *_name;
    NSString *_timezone;
    NSNumber *_privilege;
    NSNumber *_serviceLevel;
    NSNumber *_created;
    NSNumber *_updated;
    NSNumber *_deleted;
    NSNumber *_active;
    NSString *_shardId;
    EDAMUserAttributes *_attributes;
    EDAMAccounting *_accounting;
    EDAMPremiumInfo *_premiumInfo;
    EDAMBusinessUserInfo *_businessUserInfo;
    NSString *_photoUrl;
    NSNumber *_photoLastUpdated;
    EDAMAccountLimits *_accountLimits;
    EDAMSubscriptionInfo *_subscriptionInfo;
    EDAMPricingModel *_pricingModel;
}

@property (retain, nonatomic) NSNumber *id;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *timezone;
@property (retain, nonatomic) NSNumber *privilege;
@property (retain, nonatomic) NSNumber *serviceLevel;
@property (retain, nonatomic) NSNumber *created;
@property (retain, nonatomic) NSNumber *updated;
@property (retain, nonatomic) NSNumber *deleted;
@property (retain, nonatomic) NSNumber *active;
@property (retain, nonatomic) NSString *shardId;
@property (retain, nonatomic) EDAMUserAttributes *attributes;
@property (retain, nonatomic) EDAMAccounting *accounting;
@property (retain, nonatomic) EDAMPremiumInfo *premiumInfo;
@property (retain, nonatomic) EDAMBusinessUserInfo *businessUserInfo;
@property (retain, nonatomic) NSString *photoUrl;
@property (retain, nonatomic) NSNumber *photoLastUpdated;
@property (retain, nonatomic) EDAMAccountLimits *accountLimits;
@property (retain, nonatomic) EDAMSubscriptionInfo *subscriptionInfo;
@property (retain, nonatomic) EDAMPricingModel *pricingModel;

+ (id)structName;
+ (id)structFields;

@end

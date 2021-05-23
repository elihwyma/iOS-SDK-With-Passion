/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSArray, NSNumber, NSString;

@interface EDAMUserAttributes : FATObject

{
    NSString *_defaultLocationName;
    NSNumber *_defaultLatitude;
    NSNumber *_defaultLongitude;
    NSNumber *_preactivation;
    NSArray *_viewedPromotions;
    NSString *_incomingEmailAddress;
    NSArray *_recentMailedAddresses;
    NSString *_comments;
    NSNumber *_dateAgreedToTermsOfService;
    NSNumber *_maxReferrals;
    NSNumber *_referralCount;
    NSString *_refererCode;
    NSNumber *_sentEmailDate;
    NSNumber *_sentEmailCount;
    NSNumber *_dailyEmailLimit;
    NSNumber *_emailOptOutDate;
    NSNumber *_partnerEmailOptInDate;
    NSString *_preferredLanguage;
    NSString *_preferredCountry;
    NSNumber *_clipFullPage;
    NSString *_twitterUserName;
    NSString *_twitterId;
    NSString *_groupName;
    NSString *_recognitionLanguage;
    NSString *_referralProof;
    NSNumber *_educationalDiscount;
    NSString *_businessAddress;
    NSNumber *_hideSponsorBilling;
    NSNumber *_taxExempt;
    NSNumber *_useEmailAutoFiling;
    NSNumber *_reminderEmailConfig;
    NSNumber *_emailAddressLastConfirmed;
    NSNumber *_passwordUpdated;
    NSNumber *_salesforcePushEnabled;
    NSNumber *_shouldLogClientEvent;
    NSNumber *_optOutMachineLearning;
}

@property (retain, nonatomic) NSString *defaultLocationName;
@property (retain, nonatomic) NSNumber *defaultLatitude;
@property (retain, nonatomic) NSNumber *defaultLongitude;
@property (retain, nonatomic) NSNumber *preactivation;
@property (retain, nonatomic) NSArray *viewedPromotions;
@property (retain, nonatomic) NSString *incomingEmailAddress;
@property (retain, nonatomic) NSArray *recentMailedAddresses;
@property (retain, nonatomic) NSString *comments;
@property (retain, nonatomic) NSNumber *dateAgreedToTermsOfService;
@property (retain, nonatomic) NSNumber *maxReferrals;
@property (retain, nonatomic) NSNumber *referralCount;
@property (retain, nonatomic) NSString *refererCode;
@property (retain, nonatomic) NSNumber *sentEmailDate;
@property (retain, nonatomic) NSNumber *sentEmailCount;
@property (retain, nonatomic) NSNumber *dailyEmailLimit;
@property (retain, nonatomic) NSNumber *emailOptOutDate;
@property (retain, nonatomic) NSNumber *partnerEmailOptInDate;
@property (retain, nonatomic) NSString *preferredLanguage;
@property (retain, nonatomic) NSString *preferredCountry;
@property (retain, nonatomic) NSNumber *clipFullPage;
@property (retain, nonatomic) NSString *twitterUserName;
@property (retain, nonatomic) NSString *twitterId;
@property (retain, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSString *recognitionLanguage;
@property (retain, nonatomic) NSString *referralProof;
@property (retain, nonatomic) NSNumber *educationalDiscount;
@property (retain, nonatomic) NSString *businessAddress;
@property (retain, nonatomic) NSNumber *hideSponsorBilling;
@property (retain, nonatomic) NSNumber *taxExempt;
@property (retain, nonatomic) NSNumber *useEmailAutoFiling;
@property (retain, nonatomic) NSNumber *reminderEmailConfig;
@property (retain, nonatomic) NSNumber *emailAddressLastConfirmed;
@property (retain, nonatomic) NSNumber *passwordUpdated;
@property (retain, nonatomic) NSNumber *salesforcePushEnabled;
@property (retain, nonatomic) NSNumber *shouldLogClientEvent;
@property (retain, nonatomic) NSNumber *optOutMachineLearning;

+ (id)structName;
+ (id)structFields;

@end

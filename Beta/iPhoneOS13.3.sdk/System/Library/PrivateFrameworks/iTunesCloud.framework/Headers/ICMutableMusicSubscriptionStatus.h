/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICMusicSubscriptionStatus.h>

@class NSArray, NSDate, NSString;

@interface ICMutableMusicSubscriptionStatus : ICMusicSubscriptionStatus

@property (nonatomic, getter=isMinorAccountHolder) _Bool minorAccountHolder;
@property (nonatomic) _Bool hasFamily;
@property (nonatomic) _Bool hasFamilyGreaterThanOneMember;
@property (nonatomic, getter=isHeadOfHousehold) _Bool headOfHousehold;
@property (nonatomic, getter=isMatchEnabled) _Bool matchEnabled;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) _Bool hasOfflineSlots;
@property (nonatomic, getter=isInFreeTrial) _Bool inFreeTrial;
@property (nonatomic, getter=isEligibleForFreeTrial) _Bool eligibleForFreeTrial;
@property (nonatomic, getter=isPurchaser) _Bool purchaser;
@property (nonatomic) long long carrierBundlingStatusType;
@property (nonatomic) long long reasonType;
@property (nonatomic) long long sourceType;
@property (nonatomic) long long statusType;
@property (nonatomic, getter=isAdministrator) _Bool administrator;
@property (nonatomic, getter=isDiscoveryModeEligible) _Bool discoveryModeEligible;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSArray *termsStatusList;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *cellularOperatorName;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (nonatomic) long long carrierBundlingErrorCode;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end

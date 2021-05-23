/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface SSVSubscriptionStatus : NSObject

{
    NSNumber *_accountIdentifier;
    NSArray *_accountPermissions;
    long long _accountStatus;
    unsigned long long _acceptedStoreTermsVersion;
    long long _carrierBundlingStatus;
    long long _carrierBundlingErrorCode;
    NSString *_cellularOperatorName;
    _Bool _discoveryModeEligible;
    _Bool _familyOrganizer;
    _Bool _familySubscription;
    _Bool _freeTrialIneligible;
    _Bool _hasFamily;
    _Bool _hasFamilyMembers;
    _Bool _hasOfflineSlots;
    unsigned long long _latestStoreTermsVersion;
    NSString *_phoneNumber;
    NSDictionary *_rawResponseData;
    double _subscriptionExpirationTime;
    _Bool _subscriptionPurchaser;
    _Bool _hasOfflineSlot;
    NSString *_sessionIdentifier;
}

@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSArray *accountPermissions;
@property (nonatomic) long long accountStatus;
@property (nonatomic) unsigned long long acceptedStoreTermsVersion;
@property (nonatomic) long long carrierBundlingStatus;
@property (nonatomic) long long carrierBundlingErrorCode;
@property (copy, nonatomic) NSString *cellularOperatorName;
@property (nonatomic, getter=isDiscoveryModeEligible) _Bool discoveryModeEligible;
@property (nonatomic, getter=isFamilyOrganizer) _Bool familyOrganizer;
@property (nonatomic, getter=isFamilySubscription) _Bool familySubscription;
@property (nonatomic, getter=isFreeTrialIneligible) _Bool freeTrialIneligible;
@property (nonatomic) _Bool hasFamily;
@property (nonatomic) _Bool hasFamilyMembers;
@property (nonatomic) _Bool hasOfflineSlots;
@property (nonatomic) unsigned long long latestStoreTermsVersion;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSDictionary *rawResponseData;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (nonatomic, getter=isSubscribed) _Bool subscribed;
@property (copy, nonatomic) NSDate *subscriptionExpirationDate;
@property (nonatomic, getter=isSubscriptionPurchaser) _Bool subscriptionPurchaser;
@property (nonatomic, readonly) _Bool hasOfflineSlot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToStatus:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithUserDefaultsRepresentation:(id)arg1;
- (id)copyUserDefaultsRepresentation;
- (void)resetAccountBasedProperties;
- (void)resetCarrierBundlingProperties;
- (void)_setSubscribed:(_Bool)arg1;
- (void)setValuesUsingStatusDictionary:(id)arg1;

@end

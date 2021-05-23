/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString;

@interface ICMusicSubscriptionStatus : NSObject <Swift>

{
    NSDictionary *_responseDictionary;
    _Bool _isMinorAccountHolder;
    _Bool _hasFamily;
    _Bool _hasFamilyGreaterThanOneMember;
    _Bool _isHeadOfHousehold;
    _Bool _isMatchEnabled;
    NSDate *_expirationDate;
    _Bool _hasOfflineSlots;
    _Bool _isInFreeTrial;
    _Bool _isEligibleForFreeTrial;
    _Bool _isPurchaser;
    long long _carrierBundlingStatusType;
    long long _reasonType;
    long long _sourceType;
    long long _statusType;
    _Bool _isAdministrator;
    _Bool _isDiscoveryModeEligible;
    long long _statusCode;
    NSArray *_termsStatusList;
    NSString *_phoneNumber;
    NSString *_cellularOperatorName;
    NSString *_sessionIdentifier;
    long long _carrierBundlingErrorCode;
}

@property (copy, nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic, readonly) NSDictionary *responseDictionary;
@property (nonatomic, readonly, getter=isMinorAccountHolder) _Bool minorAccountHolder;
@property (nonatomic, readonly) _Bool hasFamily;
@property (nonatomic, readonly) _Bool hasFamilyGreaterThanOneMember;
@property (nonatomic, readonly, getter=isHeadOfHousehold) _Bool headOfHousehold;
@property (nonatomic, readonly, getter=isMatchEnabled) _Bool matchEnabled;
@property (copy, nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) _Bool hasOfflineSlots;
@property (nonatomic, readonly, getter=isInFreeTrial) _Bool inFreeTrial;
@property (nonatomic, readonly, getter=isEligibleForFreeTrial) _Bool eligibleForFreeTrial;
@property (nonatomic, readonly, getter=isPurchaser) _Bool purchaser;
@property (nonatomic, readonly) long long carrierBundlingStatusType;
@property (nonatomic, readonly) long long reasonType;
@property (nonatomic, readonly) long long sourceType;
@property (nonatomic, readonly) long long statusType;
@property (nonatomic, readonly, getter=isAdministrator) _Bool administrator;
@property (nonatomic, readonly, getter=isDiscoveryModeEligible) _Bool discoveryModeEligible;
@property (nonatomic, readonly) long long statusCode;
@property (copy, nonatomic, readonly) NSArray *termsStatusList;
@property (copy, nonatomic, readonly) NSString *phoneNumber;
@property (copy, nonatomic, readonly) NSString *cellularOperatorName;
@property (copy, nonatomic, readonly) NSString *sessionIdentifier;
@property (nonatomic, readonly) long long carrierBundlingErrorCode;
@property (nonatomic, readonly, getter=isCloudMusicServiceEnabled) _Bool cloudMusicServiceEnabled;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseDictionary:(id)arg1;
- (_Bool)isEqualToStatus:(id)arg1;
- (void)_copySubscriptionStatusPropertiesToStatus:(id)arg1 withZone:(struct _NSZone *)arg2;

@end

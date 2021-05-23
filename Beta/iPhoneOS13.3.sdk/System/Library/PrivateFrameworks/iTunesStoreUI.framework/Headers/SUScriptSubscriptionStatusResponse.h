/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumber, NSString, SUScriptDictionary;

@interface SUScriptSubscriptionStatusResponse : SUScriptObject

{
    NSNumber *_acceptedStoreTermsVersion;
    NSString *_accountIdentifier;
    NSString *_accountStatus;
    NSString *_carrierBundlingStatus;
    NSNumber *_carrierBundlingErrorCode;
    id _discoveryModeEligible;
    NSString *_eligibilityStatus;
    id _familyOrganizer;
    id _familySubscription;
    id _final;
    id _hasFamily;
    id _hasFamilyMembers;
    NSNumber *_latestStoreTermsVersion;
    SUScriptDictionary *_rawResponseData;
    NSString *_sessionIdentifier;
    id _subscribed;
}

@property (readonly) NSNumber *acceptedStoreTermsVersion;
@property (readonly) NSString *accountIdentifier;
@property (readonly) NSString *accountStatus;
@property (readonly) NSString *carrierBundlingStatus;
@property (readonly) NSNumber *carrierBundlingErrorCode;
@property (readonly, getter=isDiscoveryModeEligible) id discoveryModeEligible;
@property (readonly) NSString *eligibilityStatus;
@property (readonly, getter=isFamilyOrganizer) id familyOrganizer;
@property (readonly, getter=isFamilySubscription) id familySubscription;
@property (readonly, getter=isFinal) id final;
@property (readonly) id hasFamily;
@property (readonly) id hasFamilyMembers;
@property (readonly) NSNumber *latestStoreTermsVersion;
@property (readonly) SUScriptDictionary *rawResponseData;
@property (readonly) NSString *sessionIdentifier;
@property (readonly, getter=isSubscribed) id subscribed;
@property (readonly) NSString *accountStatusNeedsAuthentication;
@property (readonly) NSString *accountStatusNotSubscribed;
@property (readonly) NSString *accountStatusSubscribed;
@property (readonly) NSString *accountStatusUnknown;
@property (readonly) NSString *eligibilityStatusEligible;
@property (readonly) NSString *eligibilityStatusNotEligible;
@property (readonly) NSString *eligibilityStatusUnknown;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)initWithSubscriptionStatus:(id)arg1 isFinal:(_Bool)arg2;

@end

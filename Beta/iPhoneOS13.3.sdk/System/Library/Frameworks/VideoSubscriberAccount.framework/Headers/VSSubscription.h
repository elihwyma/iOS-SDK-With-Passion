/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDate, NSString, VSSubscriptionSource;

@interface VSSubscription : NSObject

{
    NSDate *_expirationDate;
    long long _accessLevel;
    NSArray *_tierIdentifiers;
    NSString *_billingIdentifier;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    NSString *_derivedSubscriptionInfo;
    NSString *_providedSubscriptionInfo;
    VSSubscriptionSource *_source;
    NSString *_subscriberIdentifierHash;
}

@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *modificationDate;
@property (copy, nonatomic) NSString *subscriptionInfo;
@property (copy, nonatomic) NSString *derivedSubscriptionInfo;
@property (copy, nonatomic) NSString *providedSubscriptionInfo;
@property (copy, nonatomic) VSSubscriptionSource *source;
@property (copy, nonatomic, readonly) NSData *versionHash;
@property (copy, nonatomic) NSString *subscriberIdentifierHash;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) long long accessLevel;
@property (copy, nonatomic) NSArray *tierIdentifiers;
@property (copy, nonatomic) NSString *billingIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)keyPathsForValuesAffectingSubscriptionInfo;
+ (id)keyPathsForValuesAffectingVersionHash;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)_updateHash:(id)arg1 withValueForProperty:(id)arg2;

@end

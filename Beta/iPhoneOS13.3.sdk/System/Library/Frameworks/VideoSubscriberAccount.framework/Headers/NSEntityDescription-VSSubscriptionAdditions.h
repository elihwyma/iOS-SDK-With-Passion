/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <CoreData/NSEntityDescription.h>

@class NSAttributeDescription;

@interface NSEntityDescription (VSSubscriptionAdditions)

@property (retain, nonatomic, getter=vs_referenceValueAttribute, setter=vs_setReferenceValueAttribute:) NSAttributeDescription *referenceValueAttribute;

+ (id)vs_subscriptionEntityForVersion:(long long)arg1;

- (void)vs_setUserInfoValue:(id)arg1 forKey:(id)arg2;

@end

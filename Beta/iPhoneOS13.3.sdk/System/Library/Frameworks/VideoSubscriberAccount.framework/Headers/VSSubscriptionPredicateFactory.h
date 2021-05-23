/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSObject.h>

@class VSAppInstallationInfoCenter;

__attribute__((visibility("hidden")))
@interface VSSubscriptionPredicateFactory : NSObject

{
    VSAppInstallationInfoCenter *_appInstallationInfoCenter;
}

@property (retain, nonatomic) VSAppInstallationInfoCenter *appInstallationInfoCenter;

+ (id)_subscriptionSourcePredicateTemplateValues;
+ (id)_subscriptionSourceKindPredicateTemplateValues;
+ (id)_subscriptionPredicateTemplateValues;

- (id)_predicateTemplateForSourceKind:(long long)arg1;
- (id)_predicateTemplateForSourceIdentifier:(id)arg1;
- (id)_topLevelAccessPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2;
- (id)_predicateTemplateForSourceOfTask:(id)arg1;
- (id)_predicateTemplateForAppPredicate:(id)arg1 withTask:(id)arg2;
- (id)_predicateTemplateForRequestKind:(long long)arg1 fromTask:(id)arg2;
- (id)allowedSubscriptionsPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2;
- (id)_expressionByConvertingSubscriptionKeyPathInExpression:(id)arg1 toAttributeKeysInEntity:(id)arg2;
- (id)predicateByConvertingSubscriptionKeyPathsInPredicate:(id)arg1 toAttributeKeysInEntity:(id)arg2;
- (id)allowedSubscriptionSourceKindsPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2;
- (id)allowedSubscriptionSourcesPredicateForRequestKind:(long long)arg1 fromTask:(id)arg2;
- (id)allowedSubscriptionsPredicateForTask:(id)arg1;
- (id)subscriptionFetchPredicateForTask:(id)arg1 withOptions:(id)arg2;

@end

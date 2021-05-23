/*
 Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
 */

#import <Foundation/NSObject.h>

@interface APUICardRequestSatisfactionCriteria : NSObject

+ (id)generalSatisfactionCriteria;
+ (id)compactSatisfactionCriteria;
+ (id)customIntentSatisfactionCriteria;

- (_Bool)canSatisfyCardRequest:(id)arg1;
- (unsigned long long)servicePriorityForRequest:(id)arg1;

@end

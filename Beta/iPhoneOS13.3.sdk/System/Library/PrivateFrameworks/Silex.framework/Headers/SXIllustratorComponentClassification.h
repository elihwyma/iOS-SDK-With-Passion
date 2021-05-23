/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXDefaultTextComponentClassification.h>

@interface SXIllustratorComponentClassification : SXDefaultTextComponentClassification

+ (int)role;
+ (id)typeString;
+ (id)roleString;
+ (id)accessibilityContextualLabel;

- (id)textRules;
- (_Bool)hasAffiliationWithClassification:(id)arg1 forDirection:(long long)arg2;

@end

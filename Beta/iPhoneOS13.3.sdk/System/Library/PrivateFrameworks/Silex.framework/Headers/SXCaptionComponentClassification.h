/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXDefaultTextComponentClassification.h>

@interface SXCaptionComponentClassification : SXDefaultTextComponentClassification

+ (int)role;
+ (id)typeString;
+ (id)roleString;

- (id)textRules;
- (_Bool)hasAffiliationWithClassification:(id)arg1 forDirection:(long long)arg2;
- (id)accessibilityContextualLabel;

@end

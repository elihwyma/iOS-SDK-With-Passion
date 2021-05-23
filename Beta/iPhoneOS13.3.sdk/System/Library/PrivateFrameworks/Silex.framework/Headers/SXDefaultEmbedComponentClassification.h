/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentClassification.h>

@interface SXDefaultEmbedComponentClassification : SXComponentClassification

+ (int)role;
+ (id)typeString;
+ (id)roleString;

- (_Bool)hasAffiliationWithClassification:(id)arg1 forDirection:(long long)arg2;
- (id)layoutRules;
- (Class)componentModelClass;

@end

/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentClassification.h>

@interface SXBannerAdComponentClassification : SXComponentClassification

+ (int)role;
+ (id)typeString;
+ (id)roleString;

- (_Bool)isCollapsible;
- (id)layoutRules;
- (Class)componentModelClass;

@end

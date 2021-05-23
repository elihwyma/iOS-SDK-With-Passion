/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSLocale.h>

@interface NSLocale (HealthKit)

@property (nonatomic, readonly) _Bool hk_isUSLocale;

+ (id)hk_testableAutoupdatingCurrentLocale;
+ (_Bool)hk_isUSLocale;
+ (void)hk_setTestLocale:(id)arg1;

- (_Bool)hk_isEquivalent:(id)arg1;

@end

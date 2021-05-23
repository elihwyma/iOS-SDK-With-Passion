/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@interface _SFAutomaticTabClosingUtilities : NSObject

+ (id)settingsTitleForAutomaticTabClosingInterval:(unsigned long long)arg1;
+ (_Bool)userHasPreferenceForAutomaticTabClosingInterval;
+ (unsigned long long)automaticTabClosingInterval;
+ (void)setAutomaticTabClosingInterval:(unsigned long long)arg1;
+ (void)resetAutomaticTabClosingIntervalPreference;
+ (id)analyticsTitleForAutomaticTabClosingInterval:(unsigned long long)arg1;
+ (id)promptTitleForAutomaticTabClosingInterval:(unsigned long long)arg1;
+ (double)timeIntervalForAutomaticTabClosingInterval:(unsigned long long)arg1;

@end

/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSBundle.h>

@interface NSBundle (HealthKit)

+ (id)hk_findContainedBundleWithIdentifier:(id)arg1 directoryURL:(id)arg2;

- (id)hk_localizedWriteAuthorizationUsageDescription;
- (id)hk_localizedReadAuthorizationUsageDescription;
- (id)hk_localizedClinicalReadAuthorizationUsageDescription;
- (id)hk_localizedResearchStudyUsageDescription;
- (id)hk_findContainedBundleWithIdentifier:(id)arg1;
- (id)hk_displayName;
- (id)hk_name;

@end

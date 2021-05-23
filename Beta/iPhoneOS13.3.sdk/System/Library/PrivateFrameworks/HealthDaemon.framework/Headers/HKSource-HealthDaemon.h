/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthKit/HKSource.h>

@class NSString;

@interface HKSource (HealthDaemon)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_applicationNameForBundleIdentifier:(id)arg1;
+ (id)hd_getNameForSource:(id)arg1;
+ (id)hd_currentDeviceSourceName;
+ (_Bool)hd_isSpartanDeviceBundleIdentifier:(id)arg1;
+ (id)_studyNameForResearchStudySource:(id)arg1;
+ (id)_applicationNameForCompanionBundleIdentifier:(id)arg1;
+ (id)hd_sourceForClient:(id)arg1;
+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

@end

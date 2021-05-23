/*
 Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
 */

#import <Foundation/NSObject.h>

@class HDMCAnalysisManager, HDMCAnalyticsManager, HDMCNotificationManager, HDProfile, HKMCSettingsManager, NSString;

@interface HDMCProfileExtension : NSObject

{
    HDMCAnalyticsManager *_analyticsManager;
    HDProfile *_profile;
    HDMCAnalysisManager *_analysisManager;
    HDMCNotificationManager *_notificationManager;
    HKMCSettingsManager *_settingsManager;
}

@property (nonatomic, readonly) HKMCSettingsManager *settingsManager;
@property (weak, nonatomic, readonly) HDProfile *profile;
@property (retain, nonatomic) HDMCAnalysisManager *analysisManager;
@property (nonatomic, readonly) HDMCNotificationManager *notificationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithProfile:(id)arg1;

@end

/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface ATXNotificationsSettingsLogger : NSObject

+ (id)getAppGenreFromBundleId:(id)arg1;

- (id)convertToPBFormat:(id)arg1 setting:(id)arg2;
- (id)createPBSettingForBundleID:(id)arg1 settings:(id)arg2;
- (id)retrieveSettingsForBundleIDs:(id)arg1;
- (id)getAppUsageDataForBundleID:(id)arg1;
- (id)getAggregatedData:(id)arg1 totalApps:(int)arg2;
- (id)retrieveLog;
- (id)wrapLog:(id)arg1;
- (void)logNotificationSettings;
- (double)getSamplingRate;

@end

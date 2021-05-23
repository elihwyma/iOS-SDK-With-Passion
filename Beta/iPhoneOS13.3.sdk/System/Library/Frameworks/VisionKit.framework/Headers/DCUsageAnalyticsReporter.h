/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <VisionKit/DCAnalyticsReporterBase.h>

@interface DCUsageAnalyticsReporter : DCAnalyticsReporterBase

+ (id)sharedReporter;
+ (void)clearSharedCollector;

- (void)incrementCountForKey:(id)arg1 withSignature:(id)arg2;
- (void)incrementCountForKey:(id)arg1;
- (void)logDocCamFilterUsageForFilterType:(short)arg1;

@end

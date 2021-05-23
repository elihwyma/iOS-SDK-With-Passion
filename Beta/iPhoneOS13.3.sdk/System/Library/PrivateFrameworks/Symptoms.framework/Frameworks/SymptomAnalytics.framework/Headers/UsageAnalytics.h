/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
 */

#import <SymptomAnalytics/ObjectAnalytics.h>

@interface UsageAnalytics : ObjectAnalytics

- (id)init;
- (id)initWithWorkspace:(id)arg1 withCache:(_Bool)arg2;
- (id)allUsageMarkersWithTag:(unsigned int)arg1 andMetadata:(unsigned int)arg2;
- (id)usageMarkersWithTag:(unsigned int)arg1 andMetadata:(unsigned int)arg2 fromDate:(id)arg3 untilDate:(id)arg4;
- (id)lastHappenedWithTag:(unsigned int)arg1 andMetadata:(unsigned int)arg2;
- (id)usageMarkersWithTag:(unsigned int)arg1 fromDate:(id)arg2 untilDate:(id)arg3;
- (id)allUsageMarkersWithTag:(unsigned int)arg1;
- (id)lastHappenedWithTag:(unsigned int)arg1;

@end

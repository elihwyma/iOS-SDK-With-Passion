/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
 */

#import <SymptomAnalytics/ObjectAnalytics.h>

@interface ProcessAnalytics : ObjectAnalytics

- (id)init;
- (id)initWithWorkspace:(id)arg1 withCache:(_Bool)arg2;
- (id)processesWithName:(id)arg1 nameKind:(id)arg2;
- (id)processesWithNameInSet:(id)arg1 nameKind:(id)arg2;
- (id)processesFromDate:(id)arg1 untilDate:(id)arg2;

@end

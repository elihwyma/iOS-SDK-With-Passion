/*
 Image: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
 */

#import <KnowledgeMonitor/_DKMonitor.h>

@class FBSDisplayLayoutMonitor, NSDictionary, NSString;

@interface _DKApplicationUsageMonitor : _DKMonitor

{
    FBSDisplayLayoutMonitor *_monitor;
    NSDictionary *_activeApplicationEvents;
}

@property (retain, nonatomic) FBSDisplayLayoutMonitor *monitor;
@property (copy, nonatomic) NSDictionary *activeApplicationEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)eventStream;
+ (_Bool)shouldMergeUnchangedEvents;
+ (id)_eventWithBundleIdentifier:(id)arg1 startDate:(id)arg2;

- (id)init;
- (void)stop;
- (void)start;
- (void)synchronouslyReflectCurrentValue;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (void)obtainCurrentValue;
- (void)invalidateInstantState;
- (void)updateActiveApplicationsWithLayout:(id)arg1;
- (void)updateActiveApplications:(id)arg1;
- (void)updateContextStore;
- (void)platformSpecificStart;
- (void)platformSpecificStop;

@end

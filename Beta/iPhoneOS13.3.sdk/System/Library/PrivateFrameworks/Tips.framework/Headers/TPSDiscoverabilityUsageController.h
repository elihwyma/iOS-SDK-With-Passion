/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class NSSortDescriptor, NSString, TPSDuetDataProvider;

@interface TPSDiscoverabilityUsageController : NSObject

{
    TPSDuetDataProvider *_duetProvider;
    NSString *_currentOSBuildVersion;
    NSString *_currentOSMajorVersion;
    NSSortDescriptor *_eventSortDescriptor;
}

+ (id)sharedInstance;

- (id)init;
- (void)_commonInit;
- (id)_initWithDirectory:(id)arg1;
- (id)_eligibleContentForBundleID:(id)arg1 context:(id)arg2 preferredContentID:(id)arg3 setFrequencyControlOnTipStatus:(_Bool *)arg4 error:(id *)arg5;
- (id)_lastOfferedDateFilterPredicate;
- (id)_discoverabilityStream;
- (id)_invalidationDateForContentID:(id)arg1 sinceDate:(id)arg2 error:(id *)arg3;
- (id)_eligibleContentForBundleID:(id)arg1 context:(id)arg2 preferredContentID:(id)arg3 lastOfferedContentID:(id)arg4 error:(id *)arg5;
- (void)_eligibleContentForBundleID:(id)arg1 context:(id)arg2 preferredContentID:(id)arg3 lastOfferedContentID:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_invalidationDateForContentID:(id)arg1 sinceDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_metaDataForUsageEvent:(id)arg1;
- (id)_eventsPredicateForContentID:(id)arg1 sinceDate:(id)arg2;
- (id)_eligibleContentForBundleID:(id)arg1 context:(id)arg2 preferredContentID:(id)arg3 fromEvents:(id)arg4;
- (id)_majorVersionFilterPredicate;
- (id)firstEventMatchingUsageEventState:(long long)arg1 fromEvents:(id)arg2;
- (id)_majorVersionForBuildVersion:(id)arg1;
- (id)eligibleContentForBundleID:(id)arg1 context:(id)arg2 preferredContentID:(id)arg3 setFrequencyControlOnTipStatus:(_Bool *)arg4 error:(id *)arg5;
- (void)eligibleContentForBundleID:(id)arg1 context:(id)arg2 preferredContentID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addContentUsageEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
